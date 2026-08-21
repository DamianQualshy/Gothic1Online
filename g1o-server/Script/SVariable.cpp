#include "../stdafx.h"

#define PRIORITY_AMOUNT 3

static const char PRIORITY[][30] =
{
	"UNRELIABLE",
	"RELIABLE",
	"RELIABLE_ORDERED"
};

void SVariable::RegisterConstants(g1o::script::NativeRegistry& registry)
{
	// Priority
	for (int i = 0; i < PRIORITY_AMOUNT; ++i)
		registry.AddConstant(PRIORITY[i], static_cast<int>(i));
}