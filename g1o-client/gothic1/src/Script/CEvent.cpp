#include "..\stdafx.h"

namespace
{
	bool Begin(PacketWriter& stream, EClientScriptEvent event)
	{
		CNetwork* network = core.GetNetwork();
		if (!network || !network->IsConnected())
			return false;

		stream.Write(static_cast<std::uint8_t>(GO_SCRIPT));
		stream.Write(static_cast<std::uint8_t>(SCRIPT_CLIENT_EVENT));
		stream.Write(static_cast<std::uint8_t>(event));
		return true;
	}

	void Send(PacketWriter& stream, int sendFlags = k_nSteamNetworkingSend_Reliable)
	{
		CNetwork* network = core.GetNetwork();
		network->Send(stream, sendFlags);
	}

	int MobType(oCMobInter* mob)
	{
		switch (*reinterpret_cast<int*>(mob))
		{
		case VOB_TYPE_VT_OCMOBBED: return 0;
		case VOB_TYPE_VT_OCMOBCONTAINER: return 1;
		case VOB_TYPE_VT_OCMOBDOOR: return 2;
		case VOB_TYPE_VT_OCMOBINTER: return 3;
		case VOB_TYPE_VT_OCMOBLADDER: return 4;
		case VOB_TYPE_VT_OCMOBSWITCH: return 5;
		case VOB_TYPE_VT_OCMOBWHEEL: return 6;
		default: return -1;
		}
	}

	void EmitMob(EClientScriptEvent event, oCMobInter* mob)
	{
		if (!mob) return;
		PacketWriter stream;
		if (!Begin(stream, event)) return;
		const zVEC3 position = mob->GetPositionWorld();
		stream.Write(std::string(mob->GetName().ToChar()));
		stream.Write(position[0]);
		stream.Write(position[1]);
		stream.Write(position[2]);
		stream.Write(MobType(mob));
		Send(stream);
	}
}

void CEvent::MouseDown(int button)
{
	PacketWriter stream;
	if (!Begin(stream, CLIENT_EVENT_MOUSE_DOWN)) return;
	stream.Write(button);
	Send(stream);
}

void CEvent::MouseUp(int button)
{
	PacketWriter stream;
	if (!Begin(stream, CLIENT_EVENT_MOUSE_UP)) return;
	stream.Write(button);
	Send(stream);
}

void CEvent::MouseWheel(int delta)
{
	PacketWriter stream;
	if (!Begin(stream, CLIENT_EVENT_MOUSE_WHEEL)) return;
	stream.Write(delta);
	Send(stream);
}

void CEvent::KeyDown(int key)
{
	PacketWriter stream;
	if (!Begin(stream, CLIENT_EVENT_KEY_DOWN)) return;
	const std::string letter(1, core.GetKeyBoard()->GetTranslatedLetter(zCInput::GetInput()->GetLetter(key)));
	stream.Write(key);
	stream.Write(letter);
	Send(stream, k_nSteamNetworkingSend_UnreliableNoDelay);
}

void CEvent::OpenInventory()
{
	PacketWriter stream;
	if (!Begin(stream, CLIENT_EVENT_OPEN_INVENTORY)) return;
	Send(stream);
}

void CEvent::CloseInventory()
{
	PacketWriter stream;
	if (!Begin(stream, CLIENT_EVENT_CLOSE_INVENTORY)) return;
	Send(stream);
}

void CEvent::MobTrigger(oCMobInter* mob)
{
	EmitMob(CLIENT_EVENT_MOB_TRIGGER, mob);
}

void CEvent::MobUntrigger(oCMobInter* mob)
{
	EmitMob(CLIENT_EVENT_MOB_UNTRIGGER, mob);
}

void CEvent::UseItem(const char* instance, int amount, int hand)
{
	PacketWriter stream;
	if (!Begin(stream, CLIENT_EVENT_USE_ITEM)) return;
	stream.Write(std::string(instance ? instance : ""));
	stream.Write(amount);
	stream.Write(hand);
	Send(stream);
}
