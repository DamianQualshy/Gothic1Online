#ifndef SCRIPTRPC_H
#define SCRIPTRPC_H

namespace ScriptRPC
{
	void HandleScriptRPC(CNetwork* network, PacketReader& stream);

	void ScriptUnconscious(CNetwork* network, PacketReader& stream);
	void ScriptVisual(CNetwork* network, PacketReader& stream);
};

#endif //SCRIPTRPC_H
