#pragma once

#include <cstdint>
#include <map>
#include <memory>
#include <string>
#include <variant>
#include <vector>

namespace g1o::script {

class ScriptCallable;
class ScriptValue;

using ScriptArguments = std::vector<ScriptValue>;
using ScriptArray = std::vector<ScriptValue>;
using ScriptTable = std::map<std::string, ScriptValue>;

class ScriptValue {
public:
	using ArrayPtr = std::shared_ptr<ScriptArray>;
	using TablePtr = std::shared_ptr<ScriptTable>;
	using CallablePtr = std::shared_ptr<ScriptCallable>;
	using Storage = std::variant<std::monostate, bool, std::int64_t, double, std::string, ArrayPtr, TablePtr, CallablePtr>;

	ScriptValue() = default;
	ScriptValue(bool value) : value_(value) {}
	ScriptValue(int value) : value_(static_cast<std::int64_t>(value)) {}
	ScriptValue(unsigned value) : value_(static_cast<std::int64_t>(value)) {}
	ScriptValue(std::int64_t value) : value_(value) {}
	ScriptValue(float value) : value_(static_cast<double>(value)) {}
	ScriptValue(double value) : value_(value) {}
	ScriptValue(const char* value) : value_(std::string(value ? value : "")) {}
	ScriptValue(std::string value) : value_(std::move(value)) {}
	ScriptValue(ScriptArray value) : value_(std::make_shared<ScriptArray>(std::move(value))) {}
	ScriptValue(ScriptTable value) : value_(std::make_shared<ScriptTable>(std::move(value))) {}
	ScriptValue(CallablePtr value) : value_(std::move(value)) {}

	const Storage& StorageValue() const { return value_; }
	Storage& StorageValue() { return value_; }

	bool IsNull() const { return std::holds_alternative<std::monostate>(value_); }
	bool IsBool() const { return std::holds_alternative<bool>(value_); }
	bool IsInteger() const { return std::holds_alternative<std::int64_t>(value_); }
	bool IsNumber() const { return IsInteger() || std::holds_alternative<double>(value_); }
	bool IsString() const { return std::holds_alternative<std::string>(value_); }
	bool IsArray() const { return std::holds_alternative<ArrayPtr>(value_); }
	bool IsTable() const { return std::holds_alternative<TablePtr>(value_); }
	bool IsCallable() const { return std::holds_alternative<CallablePtr>(value_); }

	bool AsBool(bool fallback = false) const;
	std::int64_t AsInteger(std::int64_t fallback = 0) const;
	double AsNumber(double fallback = 0.0) const;
	const std::string* AsString() const;
	ScriptArray* AsArray();
	const ScriptArray* AsArray() const;
	ScriptTable* AsTable();
	const ScriptTable* AsTable() const;
	CallablePtr AsCallable() const;

private:
	Storage value_;
};

class ScriptCallable {
public:
	virtual ~ScriptCallable() = default;
	virtual bool Invoke(const ScriptArguments& arguments) = 0;
	virtual bool Equals(const ScriptCallable& other) const = 0;
};

} // namespace g1o::script
