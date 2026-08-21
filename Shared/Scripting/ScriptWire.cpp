#include "ScriptWire.h"

#include <cstdint>

namespace g1o::script::wire {

namespace {

constexpr std::uint16_t kMaxArguments = 64;
constexpr std::uint16_t kMaxCollectionSize = 256;
constexpr std::uint32_t kMaxStringSize = 16 * 1024;
constexpr int kMaxDepth = 8;

enum class ValueTag : std::uint8_t {
	Null,
	Boolean,
	Integer,
	Float,
	String,
	Array,
	Table
};

bool WriteString(RakNet::BitStream& stream, const std::string& value, std::string& error)
{
	if (value.size() > kMaxStringSize)
	{
		error = "script string exceeds the network limit";
		return false;
	}
	const auto size = static_cast<std::uint32_t>(value.size());
	stream.Write(size);
	if (size != 0)
		stream.WriteAlignedBytes(reinterpret_cast<const unsigned char*>(value.data()), size);
	return true;
}

bool ReadString(RakNet::BitStream& stream, std::string& value, std::string& error)
{
	std::uint32_t size = 0;
	if (!stream.Read(size) || size > kMaxStringSize)
	{
		error = "invalid script string in network packet";
		return false;
	}
	value.resize(size);
	if (size != 0 && !stream.ReadAlignedBytes(reinterpret_cast<unsigned char*>(value.data()), size))
	{
		error = "truncated script string in network packet";
		return false;
	}
	return true;
}

bool WriteValue(RakNet::BitStream& stream, const ScriptValue& value, int depth, std::string& error)
{
	if (depth > kMaxDepth)
	{
		error = "script value exceeds the network nesting limit";
		return false;
	}

	if (value.IsNull())
	{
		stream.Write(static_cast<std::uint8_t>(ValueTag::Null));
		return true;
	}
	if (value.IsBool())
	{
		stream.Write(static_cast<std::uint8_t>(ValueTag::Boolean));
		stream.Write(static_cast<std::uint8_t>(value.AsBool() ? 1 : 0));
		return true;
	}
	if (value.IsInteger())
	{
		stream.Write(static_cast<std::uint8_t>(ValueTag::Integer));
		stream.Write(value.AsInteger());
		return true;
	}
	if (value.IsNumber())
	{
		stream.Write(static_cast<std::uint8_t>(ValueTag::Float));
		stream.Write(value.AsNumber());
		return true;
	}
	if (const std::string* string = value.AsString())
	{
		stream.Write(static_cast<std::uint8_t>(ValueTag::String));
		return WriteString(stream, *string, error);
	}
	if (const ScriptArray* array = value.AsArray())
	{
		if (array->size() > kMaxCollectionSize)
		{
			error = "script array exceeds the network limit";
			return false;
		}
		stream.Write(static_cast<std::uint8_t>(ValueTag::Array));
		stream.Write(static_cast<std::uint16_t>(array->size()));
		for (const ScriptValue& item : *array)
			if (!WriteValue(stream, item, depth + 1, error)) return false;
		return true;
	}
	if (const ScriptTable* table = value.AsTable())
	{
		if (table->size() > kMaxCollectionSize)
		{
			error = "script table exceeds the network limit";
			return false;
		}
		stream.Write(static_cast<std::uint8_t>(ValueTag::Table));
		stream.Write(static_cast<std::uint16_t>(table->size()));
		for (const auto& [key, item] : *table)
		{
			if (!WriteString(stream, key, error) || !WriteValue(stream, item, depth + 1, error)) return false;
		}
		return true;
	}

	error = "functions cannot be sent through the network";
	return false;
}

bool ReadValue(RakNet::BitStream& stream, ScriptValue& value, int depth, std::string& error)
{
	if (depth > kMaxDepth)
	{
		error = "script value exceeds the network nesting limit";
		return false;
	}

	std::uint8_t raw_tag = 0;
	if (!stream.Read(raw_tag) || raw_tag > static_cast<std::uint8_t>(ValueTag::Table))
	{
		error = "invalid script value type in network packet";
		return false;
	}

	switch (static_cast<ValueTag>(raw_tag))
	{
	case ValueTag::Null:
		value = {};
		return true;
	case ValueTag::Boolean: {
		std::uint8_t boolean = 0;
		if (!stream.Read(boolean) || boolean > 1) { error = "invalid script boolean in network packet"; return false; }
		value = ScriptValue(boolean != 0);
		return true;
	}
	case ValueTag::Integer: {
		std::int64_t integer = 0;
		if (!stream.Read(integer)) { error = "truncated script integer in network packet"; return false; }
		value = ScriptValue(integer);
		return true;
	}
	case ValueTag::Float: {
		double number = 0.0;
		if (!stream.Read(number)) { error = "truncated script number in network packet"; return false; }
		value = ScriptValue(number);
		return true;
	}
	case ValueTag::String: {
		std::string string;
		if (!ReadString(stream, string, error)) return false;
		value = ScriptValue(std::move(string));
		return true;
	}
	case ValueTag::Array: {
		std::uint16_t size = 0;
		if (!stream.Read(size) || size > kMaxCollectionSize) { error = "invalid script array in network packet"; return false; }
		ScriptArray array;
		array.reserve(size);
		for (std::uint16_t index = 0; index < size; ++index)
		{
			ScriptValue item;
			if (!ReadValue(stream, item, depth + 1, error)) return false;
			array.push_back(std::move(item));
		}
		value = ScriptValue(std::move(array));
		return true;
	}
	case ValueTag::Table: {
		std::uint16_t size = 0;
		if (!stream.Read(size) || size > kMaxCollectionSize) { error = "invalid script table in network packet"; return false; }
		ScriptTable table;
		for (std::uint16_t index = 0; index < size; ++index)
		{
			std::string key;
			ScriptValue item;
			if (!ReadString(stream, key, error) || !ReadValue(stream, item, depth + 1, error)) return false;
			table[std::move(key)] = std::move(item);
		}
		value = ScriptValue(std::move(table));
		return true;
	}
	}
	return false;
}

} // namespace

bool WriteArguments(RakNet::BitStream& stream, const ScriptArguments& arguments, std::string& error)
{
	if (arguments.size() > kMaxArguments)
	{
		error = "too many script arguments for a network packet";
		return false;
	}
	stream.Write(static_cast<std::uint16_t>(arguments.size()));
	for (const ScriptValue& argument : arguments)
		if (!WriteValue(stream, argument, 0, error)) return false;
	return true;
}

bool ReadArguments(RakNet::BitStream& stream, ScriptArguments& arguments, std::string& error)
{
	std::uint16_t count = 0;
	if (!stream.Read(count) || count > kMaxArguments)
	{
		error = "invalid script argument count in network packet";
		return false;
	}

	ScriptArguments result;
	result.reserve(count);
	for (std::uint16_t index = 0; index < count; ++index)
	{
		ScriptValue value;
		if (!ReadValue(stream, value, 0, error)) return false;
		result.push_back(std::move(value));
	}
	arguments = std::move(result);
	return true;
}

} // namespace g1o::script::wire
