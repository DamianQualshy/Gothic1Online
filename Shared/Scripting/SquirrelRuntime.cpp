#include "ScriptEngine.h"

#include <sqrat/sqratVM.h>

#include <cstdarg>
#include <cstdio>
#include <memory>
#include <string>

namespace g1o::script {

namespace {

void PushValue(HSQUIRRELVM vm, const ScriptValue& value, int depth = 0);
ScriptValue ReadValue(HSQUIRRELVM vm, SQInteger index, int depth = 0);

class SquirrelCallable final : public ScriptCallable {
public:
	SquirrelCallable(HSQUIRRELVM vm, HSQOBJECT object, ScriptEngine& engine)
		: vm_(vm), object_(object), engine_(engine)
	{
		sq_addref(vm_, &object_);
	}

	~SquirrelCallable() override
	{
		sq_release(vm_, &object_);
	}

	bool Invoke(const ScriptArguments& arguments) override
	{
		const SQInteger top = sq_gettop(vm_);
		sq_pushobject(vm_, object_);
		sq_pushroottable(vm_);
		for (const auto& argument : arguments)
			PushValue(vm_, argument);
		const bool succeeded = SQ_SUCCEEDED(sq_call(vm_, static_cast<SQInteger>(arguments.size() + 1), SQFalse, SQTrue));
		sq_settop(vm_, top);
		if (!succeeded)
			engine_.Log("[Squirrel] event or timer handler failed");
		return succeeded;
	}

	bool Equals(const ScriptCallable& other) const override
	{
		const auto* callable = dynamic_cast<const SquirrelCallable*>(&other);
		return callable && callable->vm_ == vm_ && callable->object_._type == object_._type
			&& callable->object_._unVal.raw == object_._unVal.raw;
	}

private:
	HSQUIRRELVM vm_;
	HSQOBJECT object_;
	ScriptEngine& engine_;
};

void PushValue(HSQUIRRELVM vm, const ScriptValue& value, int depth)
{
	if (depth > 16 || value.IsNull()) { sq_pushnull(vm); return; }
	if (const auto boolean = std::get_if<bool>(&value.StorageValue())) { sq_pushbool(vm, *boolean ? SQTrue : SQFalse); return; }
	if (const auto integer = std::get_if<std::int64_t>(&value.StorageValue())) { sq_pushinteger(vm, static_cast<SQInteger>(*integer)); return; }
	if (const auto number = std::get_if<double>(&value.StorageValue())) { sq_pushfloat(vm, static_cast<SQFloat>(*number)); return; }
	if (const auto string = value.AsString()) { sq_pushstring(vm, string->c_str(), static_cast<SQInteger>(string->size())); return; }
	if (const auto array = value.AsArray())
	{
		sq_newarray(vm, 0);
		for (const auto& item : *array) { PushValue(vm, item, depth + 1); sq_arrayappend(vm, -2); }
		return;
	}
	if (const auto table = value.AsTable())
	{
		sq_newtable(vm);
		for (const auto& [key, item] : *table)
		{
			sq_pushstring(vm, key.c_str(), static_cast<SQInteger>(key.size()));
			PushValue(vm, item, depth + 1);
			sq_newslot(vm, -3, SQFalse);
		}
		return;
	}
	sq_pushnull(vm);
}

ScriptValue ReadValue(HSQUIRRELVM vm, SQInteger index, int depth)
{
	if (depth > 16) return {};
	switch (sq_gettype(vm, index))
	{
	case OT_BOOL: {
		SQBool value = SQFalse; sq_getbool(vm, index, &value); return ScriptValue(value != SQFalse);
	}
	case OT_INTEGER: {
		SQInteger value = 0; sq_getinteger(vm, index, &value); return ScriptValue(static_cast<std::int64_t>(value));
	}
	case OT_FLOAT: {
		SQFloat value = 0; sq_getfloat(vm, index, &value); return ScriptValue(static_cast<double>(value));
	}
	case OT_STRING: {
		const SQChar* value = nullptr; sq_getstring(vm, index, &value); return ScriptValue(value);
	}
	case OT_ARRAY: {
		ScriptArray result;
		const SQInteger array_index = index < 0 ? sq_gettop(vm) + index + 1 : index;
		const SQInteger size = sq_getsize(vm, array_index);
		for (SQInteger item = 0; item < size; ++item)
		{
			sq_pushinteger(vm, item);
			if (SQ_SUCCEEDED(sq_get(vm, array_index)))
			{
				result.push_back(ReadValue(vm, -1, depth + 1));
				sq_pop(vm, 1);
			}
		}
		return ScriptValue(std::move(result));
	}
	case OT_TABLE: {
		ScriptTable result;
		const SQInteger table_index = index < 0 ? sq_gettop(vm) + index + 1 : index;
		sq_pushnull(vm);
		while (SQ_SUCCEEDED(sq_next(vm, table_index)))
		{
			const SQChar* key = nullptr;
			if (SQ_SUCCEEDED(sq_getstring(vm, -2, &key))) result[key] = ReadValue(vm, -1, depth + 1);
			sq_pop(vm, 2);
		}
		return ScriptValue(std::move(result));
	}
	case OT_CLOSURE:
	case OT_NATIVECLOSURE: {
		HSQOBJECT object; sq_resetobject(&object); sq_getstackobj(vm, index, &object);
		auto* engine = static_cast<ScriptEngine*>(sq_getforeignptr(vm));
		return ScriptValue(std::make_shared<SquirrelCallable>(vm, object, *engine));
	}
	default:
		return {};
	}
}

class SquirrelRuntime final : public IScriptRuntime {
public:
	SquirrelRuntime(ScriptEngine& engine, RuntimePolicy policy)
		: engine_(engine)
	{
		const unsigned char libraries = policy == RuntimePolicy::TrustedServer
			? Sqrat::SqratVM::LIB_ALL
			: static_cast<unsigned char>(Sqrat::SqratVM::LIB_BLOB | Sqrat::SqratVM::LIB_MATH | Sqrat::SqratVM::LIB_STR);
		vm_ = std::make_unique<Sqrat::SqratVM>(1024, libraries);
		sq_setforeignptr(vm_->GetVM(), &engine_);
		vm_->SetPrintFunc(Print, Print);
		vm_->SetErrorHandler(RuntimeError, CompileError);
		BindFunctions();
	}

	RuntimeLanguage Language() const override { return RuntimeLanguage::Squirrel; }

	bool LoadFile(const std::string& path) override
	{
		const auto result = vm_->DoFile(path);
		if (result == Sqrat::SqratVM::SQRAT_NO_ERROR) return true;
		engine_.Log("[Squirrel] " + vm_->GetLastErrorMsg());
		return false;
	}

	bool LoadBuffer(const std::string& name, const std::vector<std::uint8_t>& bytes) override
	{
		auto& script = vm_->GetScript();
		Sqrat::string error;
		const std::string data(reinterpret_cast<const char*>(bytes.data()), bytes.size());
		const bool compiled = bytes.size() >= 2 && bytes[0] == 0xfa && bytes[1] == 0xfa
			? script.LoadBytecode(data)
			: script.CompileString(data, error, name);
		if (!compiled || !script.Run(error))
		{
			engine_.Log("[Squirrel] " + (error.empty() ? vm_->GetLastErrorMsg() : error));
			return false;
		}
		return true;
	}

	bool Call(const std::string& function, const ScriptArguments& arguments) override
	{
		HSQUIRRELVM vm = vm_->GetVM();
		const SQInteger top = sq_gettop(vm);
		sq_pushroottable(vm);
		sq_pushstring(vm, function.c_str(), static_cast<SQInteger>(function.size()));
		if (SQ_FAILED(sq_get(vm, -2))) { sq_settop(vm, top); return false; }
		sq_pushroottable(vm);
		for (const auto& argument : arguments) PushValue(vm, argument);
		const bool succeeded = SQ_SUCCEEDED(sq_call(vm, static_cast<SQInteger>(arguments.size() + 1), SQFalse, SQTrue));
		sq_settop(vm, top);
		return succeeded;
	}

private:
	static void Print(HSQUIRRELVM vm, const SQChar* format, ...)
	{
		char buffer[1024]{};
		va_list arguments;
		va_start(arguments, format);
		std::vsnprintf(buffer, sizeof(buffer), format, arguments);
		va_end(arguments);
		static_cast<ScriptEngine*>(sq_getforeignptr(vm))->Log(std::string("[Squirrel] ") + buffer);
	}

	static SQInteger RuntimeError(HSQUIRRELVM vm)
	{
		const SQChar* message = "unknown runtime error";
		if (sq_gettop(vm) >= 2) sq_getstring(vm, 2, &message);
		static_cast<ScriptEngine*>(sq_getforeignptr(vm))->Log(std::string("[Squirrel] ") + message);
		return 0;
	}

	static void CompileError(HSQUIRRELVM vm, const SQChar* description, const SQChar* file, SQInteger line, SQInteger column)
	{
		char buffer[1200]{};
		std::snprintf(buffer, sizeof(buffer), "[Squirrel] %s:%d:%d: %s", file, static_cast<int>(line), static_cast<int>(column), description);
		static_cast<ScriptEngine*>(sq_getforeignptr(vm))->Log(buffer);
	}

	static SQInteger DispatchHost(HSQUIRRELVM vm)
	{
		// Squirrel appends native-closure free variables after the visible arguments.
		// Bind() captures the host function name as this closure's only free variable.
		const SQInteger top = sq_gettop(vm);
		const SQChar* name = nullptr;
		if (top < 2 || SQ_FAILED(sq_getstring(vm, -1, &name)) || !name || !*name)
			return sq_throwerror(vm, _SC("cannot resolve native function"));
		const std::string function_name = name;

		ScriptArguments arguments;
		arguments.reserve(static_cast<std::size_t>(top > 2 ? top - 2 : 0));
		for (SQInteger index = 2; index < top; ++index) arguments.push_back(ReadValue(vm, index));

		auto* engine = static_cast<ScriptEngine*>(sq_getforeignptr(vm));
		std::string error;
		auto result = engine->InvokeHostFunction(function_name, std::move(arguments), error);
		if (!result) return sq_throwerror(vm, error.c_str());
		for (const auto& value : *result) PushValue(vm, value);
		return static_cast<SQInteger>(result->size());
	}

	void Bind(const std::string& name)
	{
		HSQUIRRELVM vm = vm_->GetVM();
		sq_pushroottable(vm);
		sq_pushstring(vm, name.c_str(), static_cast<SQInteger>(name.size()));
		sq_pushstring(vm, name.c_str(), static_cast<SQInteger>(name.size()));
		sq_newclosure(vm, DispatchHost, 1);
		sq_newslot(vm, -3, SQFalse);
		sq_pop(vm, 1);
	}

	void BindFunctions()
	{
		for (const char* name : CoreHostFunctionNames()) Bind(name);
		for (const auto& [name, function] : engine_.Natives().Functions()) Bind(name);
		HSQUIRRELVM vm = vm_->GetVM();
		for (const auto& [name, value] : engine_.Natives().Constants())
		{
			sq_pushconsttable(vm);
			sq_pushstring(vm, name.c_str(), static_cast<SQInteger>(name.size()));
			PushValue(vm, value);
			sq_newslot(vm, -3, SQFalse);
			sq_pop(vm, 1);
		}
	}

	ScriptEngine& engine_;
	std::unique_ptr<Sqrat::SqratVM> vm_;
};

} // namespace

std::unique_ptr<IScriptRuntime> CreateSquirrelRuntime(ScriptEngine& engine, RuntimePolicy policy)
{
	return std::make_unique<SquirrelRuntime>(engine, policy);
}

} // namespace g1o::script
