#pragma once

#include "ScriptValue.h"

#include <RakNet/BitStream.h>

#include <string>

namespace g1o::script::wire {

bool WriteArguments(RakNet::BitStream& stream, const ScriptArguments& arguments, std::string& error);
bool ReadArguments(RakNet::BitStream& stream, ScriptArguments& arguments, std::string& error);

} // namespace g1o::script::wire
