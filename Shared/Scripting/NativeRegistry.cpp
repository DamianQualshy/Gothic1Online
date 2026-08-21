#include "NativeRegistry.h"

#include <algorithm>

namespace g1o::script {

CallContext::CallContext(ScriptArguments arguments) : arguments_(std::move(arguments))
{
}

int CallContext::GetTop() const
{
	return static_cast<int>(arguments_.size()) + 1;
}

const ScriptValue* CallContext::At(int index) const
{
	if (index >= 2)
	{
		const auto offset = static_cast<std::size_t>(index - 2);
		return offset < arguments_.size() ? &arguments_[offset] : nullptr;
	}
	if (index < 0)
	{
		const auto offset = static_cast<std::size_t>(-index);
		return offset <= output_.size() ? &output_[output_.size() - offset] : nullptr;
	}
	return nullptr;
}

ScriptValue* CallContext::AtOutput(int index)
{
	if (index >= 0)
		return nullptr;
	const auto offset = static_cast<std::size_t>(-index);
	return offset <= output_.size() ? &output_[output_.size() - offset] : nullptr;
}

ValueType CallContext::GetType(int index) const
{
	const ScriptValue* value = At(index);
	if (!value || value->IsNull()) return ValueType::Null;
	if (value->IsBool()) return ValueType::Boolean;
	if (value->IsInteger()) return ValueType::Integer;
	if (std::holds_alternative<double>(value->StorageValue())) return ValueType::Float;
	if (value->IsString()) return ValueType::String;
	if (value->IsArray()) return ValueType::Array;
	if (value->IsTable()) return ValueType::Table;
	return ValueType::Callable;
}

bool CallContext::GetInteger(int index, int& value) const
{
	const ScriptValue* input = At(index);
	if (!input || !input->IsNumber()) return false;
	value = static_cast<int>(input->AsInteger());
	return true;
}

bool CallContext::GetBool(int index, bool& value) const
{
	const ScriptValue* input = At(index);
	if (!input || (!input->IsBool() && !input->IsInteger())) return false;
	value = input->AsBool();
	return true;
}

bool CallContext::GetFloat(int index, float& value) const
{
	const ScriptValue* input = At(index);
	if (!input || !input->IsNumber()) return false;
	value = static_cast<float>(input->AsNumber());
	return true;
}

bool CallContext::GetString(int index, const char*& value) const
{
	const ScriptValue* input = At(index);
	const std::string* string = input ? input->AsString() : nullptr;
	if (!string) return false;
	value = string->c_str();
	return true;
}

bool CallContext::GetValue(int index, ScriptValue& value) const
{
	const ScriptValue* input = At(index);
	if (!input) return false;
	value = *input;
	return true;
}

bool CallContext::GetCallable(int index, std::shared_ptr<ScriptCallable>& value) const
{
	const ScriptValue* input = At(index);
	value = input ? input->AsCallable() : nullptr;
	return value != nullptr;
}

ScriptArguments CallContext::ArgumentsFrom(std::size_t first) const
{
	if (first >= arguments_.size())
		return {};
	return ScriptArguments(arguments_.begin() + first, arguments_.end());
}

void CallContext::PushNull() { output_.emplace_back(); }
void CallContext::Push(bool value) { output_.emplace_back(value); }
void CallContext::Push(int value) { output_.emplace_back(value); }
void CallContext::Push(unsigned value) { output_.emplace_back(value); }
void CallContext::Push(float value) { output_.emplace_back(value); }
void CallContext::Push(double value) { output_.emplace_back(value); }
void CallContext::Push(const char* value) { output_.emplace_back(value); }
void CallContext::Push(std::string value) { output_.emplace_back(std::move(value)); }
void CallContext::Push(ScriptValue value) { output_.emplace_back(std::move(value)); }
void CallContext::NewArray() { output_.emplace_back(ScriptArray{}); }
void CallContext::NewTable() { output_.emplace_back(ScriptTable{}); }

bool CallContext::ArrayAppend()
{
	if (output_.size() < 2)
		return false;
	ScriptValue value = std::move(output_.back());
	output_.pop_back();
	ScriptArray* array = output_.back().AsArray();
	if (!array)
		return false;
	array->push_back(std::move(value));
	return true;
}

bool CallContext::TableSet(const std::string& key, ScriptValue value)
{
	for (auto it = output_.rbegin(); it != output_.rend(); ++it)
	{
		if (ScriptTable* table = it->AsTable())
		{
			(*table)[key] = std::move(value);
			return true;
		}
	}
	return false;
}

void CallContext::ClearResults()
{
	output_.clear();
}

void CallContext::Error(std::string message)
{
	error_ = std::move(message);
}

ScriptArguments CallContext::TakeResults(int count)
{
	if (count <= 0)
		return {};
	const auto result_count = std::min<std::size_t>(static_cast<std::size_t>(count), output_.size());
	return ScriptArguments(output_.end() - result_count, output_.end());
}

bool NativeRegistry::Add(std::string name, NativeFunction function)
{
	return functions_.emplace(std::move(name), std::move(function)).second;
}

bool NativeRegistry::AddConstant(std::string name, ScriptValue value)
{
	return constants_.emplace(std::move(name), std::move(value)).second;
}

std::optional<ScriptArguments> NativeRegistry::Invoke(
	const std::string& name, ScriptArguments arguments, std::string& error) const
{
	const auto function = functions_.find(name);
	if (function == functions_.end())
	{
		error = "unknown native function '" + name + "'";
		return std::nullopt;
	}

	CallContext context(std::move(arguments));
	const int result_count = function->second(context);
	if (!context.ErrorMessage().empty())
	{
		error = context.ErrorMessage();
		return std::nullopt;
	}
	return context.TakeResults(result_count);
}

void NativeRegistry::Clear()
{
	functions_.clear();
	constants_.clear();
}

} // namespace g1o::script
