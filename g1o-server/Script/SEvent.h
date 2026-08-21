#pragma once

namespace SEvent
{
	int Init();
	int Tick();
	int PlayerConnect(int playerID);
	int PlayerHit(int playerID, int targetID);
	int PlayerDeath(int playerID, int killerID);
	int PlayerUnconscious(int playerID, int killerID);
	int PlayerRespawn(int playerID);
	int PlayerStandUp(int playerID);
	int PlayerDisconnect(int playerID, const char* reason);
	int PlayerCommand(int playerID, const char* command, const char* params);
	int PlayerPacket(int playerID, const char* data);
	int AdminCommand(int playerID, const char* command);
	int PlayerMessage(int playerID, const char* message);
	int PlayerTakeItem(int playerID, int itemID, const char* itemInstance, int amount, const char* world);
	int PlayerDropItem(int playerID, int itemID, const char* itemInstance, int amount, const char* world);
	int PlayerTakeFocus(int playerID, int focusID);
	int PlayerLostFocus(int playerID, int focusID);
}
