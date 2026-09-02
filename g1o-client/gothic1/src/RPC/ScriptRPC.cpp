#include "..\\stdafx.h"

void ScriptRPC::HandleScriptRPC(CNetwork* network, PacketReader& stream)
{
	EScriptRPC eScriptRPC{};
	if (!stream.Read(eScriptRPC))
		return;
	switch(eScriptRPC)
	{
	case SCRIPT_UNCONSCIOUS: ScriptUnconscious(network,stream); break;
	case SCRIPT_VISUAL: ScriptVisual(network, stream); break;
	}
};

void ScriptRPC::ScriptUnconscious(CNetwork* network, PacketReader& stream)
{
	bool unconscious = false;
	if (!stream.Read(unconscious) || !stream.Empty())
		return;

	scr.GetScriptVars()->isUnconsciousEnabled = unconscious;
}

void ScriptRPC::ScriptVisual(CNetwork* network, PacketReader& stream)
{
	int playerID = -1;
	std::string bodyModel, headModel;
	int bodyTexture = 0, headTexture = 0;
	if (!stream.Read(playerID) || !stream.Read(bodyModel, 256) || !stream.Read(bodyTexture) ||
		!stream.Read(headModel, 256) || !stream.Read(headTexture) || !stream.Empty())
		return;

	CPlayer *player = playerManager.GetPlayer(playerID);
	if (playerID != core.GetMultiplayer()->GetMyID() && player)
	{
		player->SetAdditionalVisuals(zSTRING(bodyModel.c_str()), bodyTexture, zSTRING(headModel.c_str()), headTexture);
	}
}
