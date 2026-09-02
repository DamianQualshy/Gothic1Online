#include "stdafx.h"

CAdmin::CAdmin()
{
};

CAdmin::~CAdmin()
{
};

void CAdmin::HandleAdminCommand(CPlayer* player, std::string command)
{
	if( player )
	{
		CNetwork* n = core.GetNetwork();
		const size_t pos = command.find(' ');
		if (pos != std::string::npos)
		{
			SPDLOG_INFO("[admin] param found!");
			std::string cmd = command;
			cmd.erase(pos, cmd.size()-pos);
			std::string params = command;
			params.erase(0, pos+1);

			if( player->isAdmin == false )
			{
				if (cmd == "login")
				{
					if (params == core.GetConfig()->GetAdminPassword())
					{
						player->isAdmin = true;
						PacketWriter s;
						s.Write(GO_CHAT);
						s.Write(CHAT_MESSAGE);
						s.Write(std::string("(SERVER): Admin access granted!"));
						n->Send(player->GetConnection(), s);
					}
					else
					{
						PacketWriter s;
						s.Write((std::uint8_t)GO_CHAT);
						s.Write((std::uint8_t)CHAT_MESSAGE);
						s.Write(std::string("(SERVER): Bad admin password."));
						n->Send(player->GetConnection(), s);
					}
				}
			}
			else
			{
				if (cmd == "say")
				{
					PacketWriter s;
					s.Write((std::uint8_t)GO_CHAT);
					s.Write((std::uint8_t)CHAT_MESSAGE);
					s.Write(std::string("(SERVER): ")+params);

					n->SendToAll(s, k_nSteamNetworkingSend_Reliable);
				}
				else if (cmd == "ban")
				{
					CPlayer* banplayer = playerManager.GetPlayer(params);
					if( banplayer )
					{
						if( core.GetBanSystem()->BanPlayer(banplayer, BAN_LIST) == true )
						{
							PacketWriter s;
							s.Write((std::uint8_t)GO_CHAT);
							s.Write((std::uint8_t)CHAT_MESSAGE);
							s.Write(std::string("(SERVER): Player ") + params + " has been silent-banned");

							n->Send(player->GetConnection(), s);
						}
						else
						{
							PacketWriter s;
							s.Write((std::uint8_t)GO_CHAT);
							s.Write((std::uint8_t)CHAT_MESSAGE);
							s.Write(std::string("(SERVER): Error, cannot ban player. Maybe he isn't exists?"));

							n->Send(player->GetConnection(), s);
						}
					}
				}
				else
				{
					SEvent::AdminCommand(player->GetID(), cmd.c_str());
				}
			}
			command.clear();
			cmd.clear();
			params.clear();
		}
	}
};
