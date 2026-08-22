#include "..\\stdafx.h"

void ScriptRPC::HandleScriptRPC(CNetwork* network, Packet* packet)
{
	BitStream stream(packet->data,packet->length,false);
	stream.IgnoreBytes(1);

	MessageID eScriptRPC;
	stream.Read(eScriptRPC);
	switch(eScriptRPC)
	{
	case SCRIPT_UNCONSCIOUS: ScriptUnconscious(network,stream); break;
	case SCRIPT_VISUAL: ScriptVisual(network, stream); break;
	}
};

void ScriptRPC::ScriptUnconscious(CNetwork* network, BitStream& stream)
{
	bool unconscious;
	stream.Read(unconscious);

	scr.GetScriptVars()->isUnconsciousEnabled = unconscious;
}

void ScriptRPC::ScriptVisual(CNetwork* network, BitStream& stream)
{
	int playerID;
	RakString bodyModel, headModel;
	int bodyTexture, headTexture;

	stream.Read(playerID);

	CPlayer *player = playerManager.GetPlayer(playerID);
	if (playerID != core.GetMultiplayer()->GetMyID() && player)
	{
		stream.Read(bodyModel);
		stream.Read(bodyTexture);
		stream.Read(headModel);
		stream.Read(headTexture);

		player->SetAdditionalVisuals(zSTRING(bodyModel.C_String()), bodyTexture, zSTRING(headModel.C_String()), headTexture);
	}
}
