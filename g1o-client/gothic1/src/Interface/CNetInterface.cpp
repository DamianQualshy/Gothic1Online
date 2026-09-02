#include "..\\stdafx.h"

namespace
{
	std::string FormatValue(EClientText text, const std::string& language, std::int64_t value)
	{
		std::string result = ClientLanguage::Get(text, language);
		for (const char* placeholder : {"%llu", "%lld", "%u", "%d", "%f"})
		{
			const auto position = result.find(placeholder);
			if (position != std::string::npos)
			{
				result.replace(position, std::strlen(placeholder), std::to_string(value));
				return result;
			}
		}
		return result + " " + std::to_string(value);
	}
}

CNetInterface::CNetInterface()
	: isShowing(false), receivedPacketCount(0), window(new zCView(0, 0, windowMaxPosX, windowMaxPosY))
{
	window->SetPos(0, 0);
	window->InsertBack(zSTRING("DLG_CONVERSATION.TGA"));
}

CNetInterface::~CNetInterface() = default;

void CNetInterface::Render()
{
	oCGame* game = oCGame::GetGame();
	zCView* screen = zCView::GetScreen();
	zCInput* input = zCInput::GetInput();
	CChat* chat = core.GetChat();
	CNetwork* network = core.GetNetwork();
	const std::string language = core.GetConfig()->GetLanguage();
	const zSTRING font = screen->GetFontName();
	const zCOLOR color(255, 255, 255, 255);

	if (game->GetShowPlayerStatus())
	{
		if (input->KeyPressed(KEY_F1))
		{
			if (!isShowing)
			{
				if (chat->IsShowing())
					chat->Show(false);
				screen->InsertItem(window);
				window->SetSize(windowMaxPosX, windowMaxPosY);
				isShowing = true;
			}
		}
		else if (isShowing)
		{
			if (!chat->IsShowing())
				chat->Show(true);
			screen->RemoveItem(window);
			isShowing = false;
		}

		if (isShowing)
		{
			screen->SetFont(zSTRING("Font_Old_20_White_Hi.TGA"));
			screen->SetFontColor(zCOLOR(247, 243, 115, 255));
			screen->Print(0, 0, zSTRING(ClientLanguage::Get(EClientText::NetworkProperties, language)));
			screen->SetFontColor(color);
			screen->SetFont(font);
			if (network->IsConnected())
			{
				SteamNetConnectionRealTimeStatus_t status{};
				network->GetStatus(status);
				screen->Print(0, 400, zSTRING(("Ping: " + std::to_string(network->GetPing()) + "ms").c_str()));
				screen->Print(0, 600, zSTRING(("FPS: " + std::to_string(vidGetFPSRate())).c_str()));
				screen->Print(0, 800, zSTRING(FormatValue(EClientText::ReceivedPackets, language, receivedPacketCount).c_str()));
				const int localLoss = status.m_flConnectionQualityLocal < 0.0f ? 0 :
					static_cast<int>((1.0f - status.m_flConnectionQualityLocal) * 100.0f);
				const int remoteLoss = status.m_flConnectionQualityRemote < 0.0f ? 0 :
					static_cast<int>((1.0f - status.m_flConnectionQualityRemote) * 100.0f);
				screen->Print(0, 1000, zSTRING(FormatValue(EClientText::LostPackets, language, localLoss).c_str()));
				screen->Print(0, 1200, zSTRING(FormatValue(EClientText::LostPacketsLastSecond, language, remoteLoss).c_str()));
				screen->Print(0, 1400, zSTRING(FormatValue(EClientText::MessageResendBuffer, language, status.m_cbPendingReliable).c_str()));
				screen->Print(0, 1600, zSTRING(FormatValue(EClientText::ByteResendBuffer, language, status.m_cbSentUnackedReliable).c_str()));
				screen->Print(0, 1800, zSTRING(FormatValue(EClientText::CreatedPlayers, language, playerManager.GetNumberOfPlayers()).c_str()));
				screen->Print(0, 2000, zSTRING(FormatValue(EClientText::CreatedItems, language, itemManager.GetNumberOfItems()).c_str()));
			}
			else
			{
				screen->SetFontColor(zCOLOR(255, 0, 0, 255));
				screen->Print(windowMaxPosX / 2, windowMaxPosY / 2,
					zSTRING(ClientLanguage::Get(EClientText::NotConnected, language)));
				screen->SetFontColor(color);
			}
		}
	}
	screen->SetFont(font);
	screen->SetFontColor(color);
}
