#include "..\stdafx.h"

namespace
{
	bool Begin(BitStream& stream, EClientScriptEvent event)
	{
		CNetwork* network = core.GetNetwork();
		if (!network || !network->IsConnected())
			return false;

		stream.Write(static_cast<MessageID>(GO_SCRIPT));
		stream.Write(static_cast<MessageID>(SCRIPT_CLIENT_EVENT));
		stream.Write(static_cast<MessageID>(event));
		return true;
	}

	void Send(BitStream& stream, PacketReliability reliability = RELIABLE_ORDERED)
	{
		CNetwork* network = core.GetNetwork();
		network->GetPeer()->Send(&stream, LOW_PRIORITY, reliability, 0, network->GetServerAddress(), false);
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
		BitStream stream;
		if (!Begin(stream, event)) return;
		const zVEC3 position = mob->GetPositionWorld();
		stream.Write(RakString(mob->GetName().ToChar()));
		stream.Write(position[0]);
		stream.Write(position[1]);
		stream.Write(position[2]);
		stream.Write(MobType(mob));
		Send(stream);
	}
}

void CEvent::MouseDown(int button)
{
	BitStream stream;
	if (!Begin(stream, CLIENT_EVENT_MOUSE_DOWN)) return;
	stream.Write(button);
	Send(stream);
}

void CEvent::MouseUp(int button)
{
	BitStream stream;
	if (!Begin(stream, CLIENT_EVENT_MOUSE_UP)) return;
	stream.Write(button);
	Send(stream);
}

void CEvent::MouseWheel(int delta)
{
	BitStream stream;
	if (!Begin(stream, CLIENT_EVENT_MOUSE_WHEEL)) return;
	stream.Write(delta);
	Send(stream);
}

void CEvent::KeyDown(int key)
{
	BitStream stream;
	if (!Begin(stream, CLIENT_EVENT_KEY_DOWN)) return;
	const RakString letter(core.GetKeyBoard()->GetTranslatedLetter(zCInput::GetInput()->GetLetter(key)));
	stream.Write(key);
	stream.Write(letter);
	Send(stream, UNRELIABLE);
}

void CEvent::OpenInventory()
{
	BitStream stream;
	if (!Begin(stream, CLIENT_EVENT_OPEN_INVENTORY)) return;
	Send(stream);
}

void CEvent::CloseInventory()
{
	BitStream stream;
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
	BitStream stream;
	if (!Begin(stream, CLIENT_EVENT_USE_ITEM)) return;
	stream.Write(RakString(instance ? instance : ""));
	stream.Write(amount);
	stream.Write(hand);
	Send(stream);
}
