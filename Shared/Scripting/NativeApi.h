#pragma once

#include "NativeRegistry.h"

#include <cstdio>
#include <string>

namespace g1o::script {

inline std::string NativeArgumentError(const char* function, int index, const char* expected)
{
	char buffer[256]{};
	std::snprintf(buffer, sizeof(buffer), "(%s) invalid argument at index %d, expecting '%s'", function, index, expected);
	return buffer;
}

inline std::string NativeCountError(const char* function, int count)
{
	char buffer[256]{};
	std::snprintf(buffer, sizeof(buffer), "(%s) wrong number of parameters, expecting %d params", function, count);
	return buffer;
}

} // namespace g1o::script

#define SCRIPT_CHECK_PARAM_COUNT(context, count) \
	const int stack_size = (context).GetTop(); \
	if (stack_size <= (count)) { \
		(context).Error(g1o::script::NativeCountError(__FUNCTION__, (count))); \
		return -1; \
	}

#define SCRIPT_CHECK_PARAM_INT(context, ref, index) \
	int ref = 0; \
	if (!(context).GetInteger((index) + 2, ref)) { \
		(context).Error(g1o::script::NativeArgumentError(__FUNCTION__, (index), "int")); \
		return -1; \
	}

#define SCRIPT_CHECK_PARAM_BOOL(context, ref, index) \
	bool ref = false; \
	if (!(context).GetBool((index) + 2, ref)) { \
		(context).Error(g1o::script::NativeArgumentError(__FUNCTION__, (index), "bool")); \
		return -1; \
	}

#define SCRIPT_CHECK_PARAM_FLOAT(context, ref, index) \
	float ref = 0.0f; \
	if (!(context).GetFloat((index) + 2, ref)) { \
		(context).Error(g1o::script::NativeArgumentError(__FUNCTION__, (index), "float")); \
		return -1; \
	}

#define SCRIPT_CHECK_PARAM_STRING(context, ref, index) \
	const char* ref = nullptr; \
	if (!(context).GetString((index) + 2, ref)) { \
		(context).Error(g1o::script::NativeArgumentError(__FUNCTION__, (index), "string")); \
		return -1; \
	}

#define SCRIPT_CHECK_PARAM_CALLABLE(context, ref, index) \
	std::shared_ptr<g1o::script::ScriptCallable> ref; \
	if (!(context).GetCallable((index) + 2, ref)) { \
		(context).Error(g1o::script::NativeArgumentError(__FUNCTION__, (index), "function")); \
		return -1; \
	}

#define SCRIPT_PARAM_VALUE(context, ref, index) \
	g1o::script::ScriptValue ref; \
	(context).GetValue((index) + 2, ref)

#define SCRIPT_TABLE_SET_INT(context, key, value) (context).TableSet((key), g1o::script::ScriptValue(static_cast<int>(value)))
#define SCRIPT_TABLE_SET_FLOAT(context, key, value) (context).TableSet((key), g1o::script::ScriptValue(static_cast<float>(value)))
#define SCRIPT_TABLE_SET_STRING(context, key, value) (context).TableSet((key), g1o::script::ScriptValue(value))
#define SCRIPT_ARRAY_INT(context, value) do { (context).Push(static_cast<int>(value)); (context).ArrayAppend(); } while (false)
#define SCRIPT_ARRAY_FLOAT(context, value) do { (context).Push(static_cast<float>(value)); (context).ArrayAppend(); } while (false)
#define SCRIPT_ARRAY_STRING(context, value) do { (context).Push(value); (context).ArrayAppend(); } while (false)
