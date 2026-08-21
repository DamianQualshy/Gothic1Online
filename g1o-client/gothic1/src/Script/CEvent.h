#pragma once

namespace CEvent
{
	int Init();
	int Render();
	int Command(RakString command, RakString params);
	int Packet(const char* data);
	int MouseDown(int button);
	int MouseUp(int button);
	int MouseWheel(int delta);
	int KeyDown(int key);
	int PlayerHit();
	int PlayerDead();
	int PlayerRespawn();
	int PlayerUnconscious();
	int PlayerStandUp();
	int ProgramName(const char* windowText);
	int OpenInventory();
	int CloseInventory();
	int MobTrigger(oCMobInter* mob);
	int MobUntrigger(oCMobInter* mob);
	int UseItem(const char* instance, int amount, int hand);
	int PlayerTakeFocus(int id, const char* name, float x, float y, float z);
	int PlayerLostFocus(int id, const char* name);
	int PlayerRenderNickname(int id, const char* name, int x, int y);
}
