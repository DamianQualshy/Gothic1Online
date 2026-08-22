#ifndef SCRIPTRPC_H
#define SCRIPTRPC_H

namespace ScriptRPC
{
	void HandleScriptRPC(CNetwork* network, Packet* packet);

	void ScriptUnconscious(CNetwork* network, BitStream& stream);
	void ScriptVisual(CNetwork* network, BitStream& stream);
};

#endif //SCRIPTRPC_H
