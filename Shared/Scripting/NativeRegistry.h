#pragma once

#include "ScriptValue.h"

#include <cstddef>
#include <functional>
#include <optional>
#include <stdexcept>
#include <string>
#include <unordered_map>

namespace g1o::script {

enum class ValueType {
	Null,
	Boolean,
	Integer,
	Float,
	String,
	Array,
	Table,
	Callable
};

class CallContext {
public:
	explicit CallContext(ScriptArguments arguments);

	int GetTop() const;
	ValueType GetType(int index) const;
	bool GetInteger(int index, int& value) const;
	bool GetBool(int index, bool& value) const;
	bool GetFloat(int index, float& value) const;
	bool GetString(int index, const char*& value) const;
	bool GetValue(int index, ScriptValue& value) const;
	bool GetCallable(int index, std::shared_ptr<ScriptCallable>& value) const;
	ScriptArguments ArgumentsFrom(std::size_t first) const;

	void PushNull();
	void Push(bool value);
	void Push(int value);
	void Push(unsigned value);
	void Push(float value);
	void Push(double value);
	void Push(const char* value);
	void Push(std::string value);
	void Push(ScriptValue value);
	void NewArray();
	void NewTable();
	bool ArrayAppend();
	bool TableSet(const std::string& key, ScriptValue value);
	void ClearResults();
	void Error(std::string message);

	const std::string& ErrorMessage() const { return error_; }
	ScriptArguments TakeResults(int count);

private:
	const ScriptValue* At(int index) const;
	ScriptValue* AtOutput(int index);

	ScriptArguments arguments_;
	ScriptArguments output_;
	std::string error_;
};

using NativeFunction = std::function<int(CallContext&)>;

class NativeRegistry {
public:
	bool Add(std::string name, NativeFunction function);
	bool AddConstant(std::string name, ScriptValue value);
	const std::unordered_map<std::string, NativeFunction>& Functions() const { return functions_; }
	const std::unordered_map<std::string, ScriptValue>& Constants() const { return constants_; }
	std::optional<ScriptArguments> Invoke(const std::string& name, ScriptArguments arguments, std::string& error) const;
	void Clear();

private:
	std::unordered_map<std::string, NativeFunction> functions_;
	std::unordered_map<std::string, ScriptValue> constants_;
};

} // namespace g1o::script
