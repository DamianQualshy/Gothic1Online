#include "ScriptEngine.h"

#include <sol/sol.hpp>

#include <memory>
#include <string>

namespace g1o::script {

namespace {

void PushValue(lua_State* lua, const ScriptValue& value, int depth = 0);
ScriptValue ReadValue(lua_State* lua, int index, ScriptEngine& engine, int depth = 0);

class LuaCallable final : public ScriptCallable {
public:
	LuaCallable(sol::protected_function function, const void* identity, ScriptEngine& engine)
		: function_(std::move(function)), identity_(identity), engine_(engine)
	{
	}

	bool Invoke(const ScriptArguments& arguments) override
	{
		lua_State* lua = function_.lua_state();
		const int top = lua_gettop(lua);
		sol::stack::push(lua, function_);
		for (const auto& argument : arguments) PushValue(lua, argument);
		if (lua_pcall(lua, static_cast<int>(arguments.size()), 0, 0) != LUA_OK)
		{
			const char* error = lua_tostring(lua, -1);
			engine_.Log(std::string("[Lua] ") + (error ? error : "event or timer handler failed"));
			lua_settop(lua, top);
			return false;
		}
		lua_settop(lua, top);
		return true;
	}

	bool Equals(const ScriptCallable& other) const override
	{
		const auto* callable = dynamic_cast<const LuaCallable*>(&other);
		return callable && callable->function_.lua_state() == function_.lua_state() && callable->identity_ == identity_;
	}

	void Push(lua_State* lua) const
	{
		sol::stack::push(lua, function_);
	}

private:
	sol::protected_function function_;
	const void* identity_;
	ScriptEngine& engine_;
};

void PushValue(lua_State* lua, const ScriptValue& value, int depth)
{
	if (depth > 16 || value.IsNull()) { lua_pushnil(lua); return; }
	if (const auto boolean = std::get_if<bool>(&value.StorageValue())) { lua_pushboolean(lua, *boolean); return; }
	if (const auto integer = std::get_if<std::int64_t>(&value.StorageValue())) { lua_pushinteger(lua, static_cast<lua_Integer>(*integer)); return; }
	if (const auto number = std::get_if<double>(&value.StorageValue())) { lua_pushnumber(lua, static_cast<lua_Number>(*number)); return; }
	if (const auto string = value.AsString()) { lua_pushlstring(lua, string->data(), string->size()); return; }
	if (const auto array = value.AsArray())
	{
		lua_createtable(lua, static_cast<int>(array->size()), 0);
		for (std::size_t index = 0; index < array->size(); ++index)
		{
			PushValue(lua, (*array)[index], depth + 1);
			lua_rawseti(lua, -2, static_cast<lua_Integer>(index + 1));
		}
		return;
	}
	if (const auto table = value.AsTable())
	{
		lua_createtable(lua, 0, static_cast<int>(table->size()));
		for (const auto& [key, item] : *table)
		{
			PushValue(lua, item, depth + 1);
			lua_setfield(lua, -2, key.c_str());
		}
		return;
	}
	if (const auto callable = value.AsCallable())
	{
		if (const auto lua_callable = dynamic_cast<const LuaCallable*>(callable.get()))
		{
			lua_callable->Push(lua);
			return;
		}
	}
	lua_pushnil(lua);
}

ScriptValue ReadValue(lua_State* lua, int index, ScriptEngine& engine, int depth)
{
	if (depth > 16) return {};
	index = lua_absindex(lua, index);
	switch (lua_type(lua, index))
	{
	case LUA_TBOOLEAN: return ScriptValue(lua_toboolean(lua, index) != 0);
	case LUA_TNUMBER:
		if (lua_isinteger(lua, index)) return ScriptValue(static_cast<std::int64_t>(lua_tointeger(lua, index)));
		return ScriptValue(static_cast<double>(lua_tonumber(lua, index)));
	case LUA_TSTRING: {
		std::size_t size = 0; const char* value = lua_tolstring(lua, index, &size); return ScriptValue(std::string(value, size));
	}
	case LUA_TFUNCTION: {
		const void* identity = lua_topointer(lua, index);
		auto function = sol::stack::get<sol::protected_function>(lua, index);
		return ScriptValue(std::make_shared<LuaCallable>(std::move(function), identity, engine));
	}
	case LUA_TTABLE: {
		const std::size_t length = lua_rawlen(lua, index);
		if (length != 0)
		{
			ScriptArray result;
			result.reserve(length);
			for (std::size_t item = 1; item <= length; ++item)
			{
				lua_rawgeti(lua, index, static_cast<lua_Integer>(item));
				result.push_back(ReadValue(lua, -1, engine, depth + 1));
				lua_pop(lua, 1);
			}
			return ScriptValue(std::move(result));
		}

		ScriptTable result;
		lua_pushnil(lua);
		while (lua_next(lua, index) != 0)
		{
			if (lua_type(lua, -2) == LUA_TSTRING)
			{
				std::size_t size = 0;
				const char* key = lua_tolstring(lua, -2, &size);
				result[std::string(key, size)] = ReadValue(lua, -1, engine, depth + 1);
			}
			lua_pop(lua, 1);
		}
		return ScriptValue(std::move(result));
	}
	default:
		return {};
	}
}

class LuaRuntime final : public IScriptRuntime {
public:
	LuaRuntime(ScriptEngine& engine) : engine_(engine)
	{
		lua_.open_libraries(sol::lib::base, sol::lib::string, sol::lib::math, sol::lib::table, sol::lib::coroutine);
		lua_["dofile"] = sol::nil;
		lua_["loadfile"] = sol::nil;
		lua_["load"] = sol::nil;
		lua_.open_libraries(sol::lib::os);
		sol::table os = lua_["os"];
		for (const char* unsafe : {"execute", "exit", "getenv", "remove", "rename", "setlocale", "tmpname"}) os[unsafe] = sol::nil;
		BindFunctions();
	}

	RuntimeLanguage Language() const override { return RuntimeLanguage::Lua; }

	bool LoadFile(const std::string& path) override
	{
		sol::load_result loaded = lua_.load_file(path);
		return RunLoaded(std::move(loaded));
	}

	bool Call(const std::string& function, const ScriptArguments& arguments) override
	{
		lua_State* lua = lua_.lua_state();
		const int top = lua_gettop(lua);
		lua_getglobal(lua, function.c_str());
		if (!lua_isfunction(lua, -1)) { lua_settop(lua, top); return false; }
		for (const auto& argument : arguments) PushValue(lua, argument);
		if (lua_pcall(lua, static_cast<int>(arguments.size()), 0, 0) != LUA_OK)
		{
			const char* error = lua_tostring(lua, -1);
			engine_.Log(std::string("[Lua] ") + (error ? error : "function call failed"));
			lua_settop(lua, top);
			return false;
		}
		lua_settop(lua, top);
		return true;
	}

private:
	static int DispatchHost(lua_State* lua)
	{
		auto* runtime = static_cast<LuaRuntime*>(lua_touserdata(lua, lua_upvalueindex(1)));
		std::size_t name_size = 0;
		const char* name = lua_tolstring(lua, lua_upvalueindex(2), &name_size);
		ScriptArguments arguments;
		const int count = lua_gettop(lua);
		arguments.reserve(static_cast<std::size_t>(count));
		for (int index = 1; index <= count; ++index) arguments.push_back(ReadValue(lua, index, runtime->engine_));

		std::string error;
		auto result = runtime->engine_.InvokeHostFunction(std::string(name, name_size), std::move(arguments), error);
		if (!result) return luaL_error(lua, "%s", error.c_str());
		for (const auto& value : *result) PushValue(lua, value);
		return static_cast<int>(result->size());
	}

	void Bind(const std::string& name)
	{
		lua_State* lua = lua_.lua_state();
		lua_pushlightuserdata(lua, this);
		lua_pushlstring(lua, name.data(), name.size());
		lua_pushcclosure(lua, DispatchHost, 2);
		lua_setglobal(lua, name.c_str());
	}

	void BindFunctions()
	{
		for (const char* name : CoreHostFunctionNames()) Bind(name);
		for (const auto& [name, function] : engine_.Natives().Functions()) Bind(name);
		for (const auto& [name, value] : engine_.Natives().Constants())
		{
			PushValue(lua_.lua_state(), value);
			lua_setglobal(lua_.lua_state(), name.c_str());
		}
	}

	bool RunLoaded(sol::load_result loaded)
	{
		if (!loaded.valid())
		{
			sol::error error = loaded;
			engine_.Log(std::string("[Lua] ") + error.what());
			return false;
		}
		sol::protected_function function = loaded;
		sol::protected_function_result result = function();
		if (!result.valid())
		{
			sol::error error = result;
			engine_.Log(std::string("[Lua] ") + error.what());
			return false;
		}
		return true;
	}

	ScriptEngine& engine_;
	sol::state lua_;
};

} // namespace

std::unique_ptr<IScriptRuntime> CreateLuaRuntime(ScriptEngine& engine)
{
	return std::make_unique<LuaRuntime>(engine);
}

} // namespace g1o::script
