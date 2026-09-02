#include "stdafx.h"

CChat::CChat()
{
	SPDLOG_TRACE("CChat::CChat()");

	bIsInitiated = false;
	bIsShowing = false;
	bIsInputActive = false;
	chatLines = 20;
	lines.clear();
	timeLastKey = 0;
	timeGesticulation = 0;

};

CChat::~CChat()
{
	SPDLOG_TRACE("CChat::~CChat()");

	bIsInitiated = false;
	bIsShowing = false;
	bIsInputActive = false;

	if( this->IsInitiated() == true )
	{
		lines.clear();
	}
	
};

void CChat::InitChat()
{
	if( this->IsInitiated() == false )
	{
		/*this->textLines = new std::string[this->chatLines];
		this->colorLines = new zCOLOR[this->chatLines];*/

		this->bIsInitiated = true;
	}
};

void CChat::AddLine(std::string text, zCOLOR color)
{
	SPDLOG_TRACE("CChat::AddLine()");
	if(this->IsInitiated() == true)
	{
		ChatLine line;
		line.text = text;
		line.color = color;
		if(text.size() <= 255)
		{
			if( lines.size() < chatLines )
				lines.push_back(line);
			else
			{
				lines.erase(lines.begin());
				lines.push_back(line);
			}
		}
	}
};

void CChat::Render()
{
	if(this->IsInitiated() == true && this->IsShowing() == true)
	{
		oCGame* game = oCGame::GetGame();
		zCView* screen = zCView::GetScreen();
		zSTRING font = screen->GetFontName();
		zCOLOR color = zCOLOR(255, 255, 255, 255);
		screen->SetFont(zSTRING("Font_Old_10_White_Hi.TGA"));

		int lineDistance = 50;

		if( game->GetShowPlayerStatus() ) //Ukrywanie wiadomości na czacie gdy menu jest aktywne
		{
			for(unsigned int i = 0; i < lines.size(); i++)
			{
				if(lines[i].text.size() > 0)
				{
					screen->SetFontColor(lines[i].color);
					screen->Print(50, lineDistance, zSTRING(lines[i].text.c_str()));
					screen->SetFontColor(color);
				}

				lineDistance = lineDistance + 150;
			}
		}
		if(this->IsInputActive() == true)
		{
			lineDistance = (150 * lines.size()) + 100;
			screen->SetFontColor(zCOLOR(70,70,70,255));
			screen->Print(50, lineDistance, zSTRING(">"));
			screen->SetFontColor(color);
			zSTRING print(this->currentText.c_str());
			print += "|";
			screen->Print(130, lineDistance, print);

			//Gestykulowanie
			if( this->timeGesticulation < g1o::network::NowMilliseconds() )
			{
				//Odtworzenie animacji i sprawdzanie czy gracz jest "zamrożony"
				oCNpc* hero = oCNpc::GetHero();
				if( hero )	//Zapobieganie crashowi
				{
					if( !hero->IsMovLock() ) hero->_SetMovLock(1);
					if( !hero->IsDead() && !hero->IsUnconscious() )
						hero->StartDialogAni();
				}
				this->timeGesticulation = g1o::network::NowMilliseconds() + 3500; //zauważyłem że zwykła animka gestykulacji trwa 3.5 sekundy
			}
		}
		//Stara czcionka
		screen->SetFont(font);
	}
};

void CChat::KeyEvent(int key)
{
	if(key == KEY_T && this->IsInputActive() == false)
	{
		this->bIsInputActive = true;
		this->lastLetter = "t";
		this->timeLastKey = g1o::network::NowMilliseconds() + 175; //175ms, bo ostatni klawisz to "t", a nie chcemy zeby przy kazdym otwarciu czatu sie drukowal
		oCNpc* hero = oCNpc::GetHero();
		if( hero )
		{
			hero->CloseInventory(); //Zamknięcie ekwipunku

			if (scr.GetScriptVars()->isResetModelEnabled && !hero->IsUnconscious() && !hero->IsDead())
			{
				/*zCModel* model = hero->GetModel();
				if( model )
					model->FadeOutAnisLayerRange(1,2000); //Wyłączenie animacji*/

				if (hero->GetWeaponMode() != NPC_WEAPON_NONE) hero->SetWeaponMode2(NPC_WEAPON_NONE);
			}

			hero->SetMovLock(1);
			playerManager.GetLocalPlayer()->ReleaseMob();
		}
	}
	else if(key == KEY_RETURN && this->IsInputActive())
	{
		this->bIsInputActive = false;
		if( this->currentText.size() > 0 )
		{
			CNetwork* net = core.GetNetwork();
			// Commands and regular messages are both evaluated by the server.
			{
				//Wysłanie wiadomości
				if( net->IsConnected() == true )
				{
					PacketWriter stream;
					stream.Write((std::uint8_t)GO_CHAT);
					stream.Write((std::uint8_t)CHAT_MESSAGE);
					stream.Write(this->currentText);
					net->Send(stream, k_nSteamNetworkingSend_Reliable);
				}
			}
			this->lastMessage.clear();
			this->lastMessage = this->currentText;

		}
		this->currentText.clear();
		
		if(oCNpc::GetHero()->IsMovLock()) oCNpc::GetHero()->SetMovLock(0);
	}
	else if( zCInput::GetInput()->KeyPressed(KEY_LCONTROL) && key == KEY_V && this->IsInputActive() == true )
	{
		OpenClipboard(0);
		this->currentText += (char*)GetClipboardData(1);
		CloseClipboard();
	}
	else if(this->IsInputActive() == true)
	{
		if(key == KEY_UP)
		{
			this->currentText = this->lastMessage;
		}
		else if(key == KEY_BACK)
		{
			if(this->currentText.size() > 0)
				this->currentText.erase(this->currentText.size()-1, 1);
		}
		else if (key == KEY_ESCAPE)
		{
			this->bIsInputActive = false;
			this->currentText.clear();

			if (oCNpc::GetHero()->IsMovLock()) oCNpc::GetHero()->SetMovLock(0);
		}
		else
		{
			char c_key = core.GetKeyBoard()->GetTranslatedLetter(zCInput::GetInput()->GetLetter(key));
			if( c_key )
			{
				if( this->lastLetter == std::string(1, c_key) )
				{
					if( g1o::network::NowMilliseconds() > this->timeLastKey )
					{
						this->currentText += c_key;	
						this->timeLastKey = g1o::network::NowMilliseconds() + 160;
					}
				}
				else
				{
					this->currentText += c_key;
					this->lastLetter = c_key;
					this->timeLastKey = g1o::network::NowMilliseconds() + 130;
				}
			}
		}
	}
};

void CChat::Clear()
{
	lines.clear();
}
