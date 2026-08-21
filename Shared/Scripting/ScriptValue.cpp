#include "ScriptValue.h"

namespace g1o::script {

bool ScriptValue::AsBool(bool fallback) const
{
	if (const auto value = std::get_if<bool>(&value_))
		return *value;
	if (const auto value = std::get_if<std::int64_t>(&value_))
		return *value != 0;
	return fallback;
}

std::int64_t ScriptValue::AsInteger(std::int64_t fallback) const
{
	if (const auto value = std::get_if<std::int64_t>(&value_))
		return *value;
	if (const auto value = std::get_if<double>(&value_))
		return static_cast<std::int64_t>(*value);
	return fallback;
}

double ScriptValue::AsNumber(double fallback) const
{
	if (const auto value = std::get_if<double>(&value_))
		return *value;
	if (const auto value = std::get_if<std::int64_t>(&value_))
		return static_cast<double>(*value);
	return fallback;
}

const std::string* ScriptValue::AsString() const
{
	return std::get_if<std::string>(&value_);
}

ScriptArray* ScriptValue::AsArray()
{
	const auto value = std::get_if<ArrayPtr>(&value_);
	return value && *value ? value->get() : nullptr;
}

const ScriptArray* ScriptValue::AsArray() const
{
	const auto value = std::get_if<ArrayPtr>(&value_);
	return value && *value ? value->get() : nullptr;
}

ScriptTable* ScriptValue::AsTable()
{
	const auto value = std::get_if<TablePtr>(&value_);
	return value && *value ? value->get() : nullptr;
}

const ScriptTable* ScriptValue::AsTable() const
{
	const auto value = std::get_if<TablePtr>(&value_);
	return value && *value ? value->get() : nullptr;
}

ScriptValue::CallablePtr ScriptValue::AsCallable() const
{
	const auto value = std::get_if<CallablePtr>(&value_);
	return value ? *value : nullptr;
}

} // namespace g1o::script
