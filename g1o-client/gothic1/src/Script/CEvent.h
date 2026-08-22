#pragma once

namespace CEvent
{
	void MouseDown(int button);
	void MouseUp(int button);
	void MouseWheel(int delta);
	void KeyDown(int key);
	void OpenInventory();
	void CloseInventory();
	void MobTrigger(oCMobInter* mob);
	void MobUntrigger(oCMobInter* mob);
	void UseItem(const char* instance, int amount, int hand);
}
