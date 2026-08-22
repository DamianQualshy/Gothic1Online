#ifndef SFUNCTION_H
#define SFUNCTION_H

namespace SFunction
{
	void Register(g1o::script::NativeRegistry& registry);
	int getPlayerName(g1o::script::CallContext& context);
	int getPlayerPing(g1o::script::CallContext& context);
	int setPlayerVirtualWorld(g1o::script::CallContext& context);
	int getPlayerVirtualWorld(g1o::script::CallContext& context);
	int isPlayerConnected(g1o::script::CallContext& context);
	int sendMessageToAll(g1o::script::CallContext& context);
	int sendMessageToPlayer(g1o::script::CallContext& context);
	int getPlayerPosition(g1o::script::CallContext& context);
	int isPlayerAdmin(g1o::script::CallContext& context);
	int getMaxSlots(g1o::script::CallContext& context);
	int getPlayersCount(g1o::script::CallContext& context);
	int getServerDescription(g1o::script::CallContext& context);
	int setServerDescription(g1o::script::CallContext& context);
	int getServerWorld(g1o::script::CallContext& context);
	int setServerWorld(g1o::script::CallContext& context);
	int kick(g1o::script::CallContext& context);
	int ban(g1o::script::CallContext& context);
	int setUnconsciousEnabled(g1o::script::CallContext& context);
	int createGroundItem(g1o::script::CallContext& context);
	int destroyGroundItem(g1o::script::CallContext& context);
	int setPlayerInvisible(g1o::script::CallContext& context);
	int isPlayerInvisible(g1o::script::CallContext& context);
};

#endif //SFUNCTION_H
