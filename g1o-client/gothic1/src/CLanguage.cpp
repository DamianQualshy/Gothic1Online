#include "stdafx.h"

namespace
{
	const char* GetEnglish(EClientText text)
	{
		switch (text)
		{
		case EClientText::EstablishingConnection: return "Establishing connection with %s:%s...";
		case EClientText::ConnectionLost: return "Connection lost";
		case EClientText::ServerClosedConnection: return "Server closed the connection";
		case EClientText::ConnectedJoining: return "Connected to: %s. Joining the game...";
		case EClientText::IncorrectVersion: return "Incorrect Gothic Online version";
		case EClientText::ServerFull: return "Server is full";
		case EClientText::NicknameUsed: return "Your nickname is already in use";
		case EClientText::Banned: return "You are banned from this server!";
		case EClientText::ConnectionFailed: return "Cannot reach the server (connection attempt failed)";
		case EClientText::Disconnected: return "Disconnected: %s";
		case EClientText::NetworkProperties: return "Network properties";
		case EClientText::ReceivedPackets: return "Received packets: %d";
		case EClientText::LostPackets: return "Packet loss: %f%%";
		case EClientText::LostPacketsLastSecond: return "Packet loss in the last second: %f%%";
		case EClientText::MessageResendBuffer: return "Messages in resend buffer: %d";
		case EClientText::ByteResendBuffer: return "Bytes in resend buffer: %d";
		case EClientText::CreatedPlayers: return "Created players: %d";
		case EClientText::CreatedItems: return "Created items: %d";
		case EClientText::NotConnected: return "Not connected!";
		case EClientText::PlayerList: return "Players on this server:";
		}
		return "";
	}

	const char* GetPolish(EClientText text)
	{
		switch (text)
		{
		case EClientText::EstablishingConnection: return "Nawiązywanie połączenia z %s:%s...";
		case EClientText::ConnectionLost: return "Połączenie utracone";
		case EClientText::ServerClosedConnection: return "Serwer zamknął połączenie";
		case EClientText::ConnectedJoining: return "Połączono z: %s. Dołączanie do gry...";
		case EClientText::IncorrectVersion: return "Zła wersja Gothic Online";
		case EClientText::ServerFull: return "Serwer jest pełny";
		case EClientText::NicknameUsed: return "Twój nick jest już zajęty";
		case EClientText::Banned: return "Masz aktywnego bana na tym serwerze!";
		case EClientText::ConnectionFailed: return "Nie można połączyć z serwerem (próba połączenia nieudana)";
		case EClientText::Disconnected: return "Rozłączono: %s";
		case EClientText::NetworkProperties: return "Właściwości sieci";
		case EClientText::ReceivedPackets: return "Odebrane pakiety: %d";
		case EClientText::LostPackets: return "Pakiety zagubione: %f%%";
		case EClientText::LostPacketsLastSecond: return "Pakiety zagubione w ostatniej sekundzie: %f%%";
		case EClientText::MessageResendBuffer: return "Bufor wiadomości: %d";
		case EClientText::ByteResendBuffer: return "Bufor bajtów do wysłania: %d";
		case EClientText::CreatedPlayers: return "Utworzeni gracze: %d";
		case EClientText::CreatedItems: return "Utworzone przedmioty: %d";
		case EClientText::NotConnected: return "Brak połączenia!";
		case EClientText::PlayerList: return "Lista graczy na serwerze:";
		}
		return "";
	}

	const char* GetGerman(EClientText text)
	{
		switch (text)
		{
		case EClientText::EstablishingConnection: return "Verbindung mit %s:%s wird hergestellt...";
		case EClientText::ConnectionLost: return "Verbindung verloren";
		case EClientText::ServerClosedConnection: return "Der Server hat die Verbindung geschlossen";
		case EClientText::ConnectedJoining: return "Verbunden mit: %s. Spielbeitritt läuft...";
		case EClientText::IncorrectVersion: return "Falsche Gothic-Online-Version";
		case EClientText::ServerFull: return "Der Server ist voll";
		case EClientText::NicknameUsed: return "Dein Nickname wird bereits verwendet";
		case EClientText::Banned: return "Du wurdest von diesem Server gebannt!";
		case EClientText::ConnectionFailed: return "Der Server ist nicht erreichbar (Verbindungsversuch fehlgeschlagen)";
		case EClientText::Disconnected: return "Verbindung getrennt: %s";
		case EClientText::NetworkProperties: return "Netzwerkeigenschaften";
		case EClientText::ReceivedPackets: return "Empfangene Pakete: %d";
		case EClientText::LostPackets: return "Paketverlust: %f%%";
		case EClientText::LostPacketsLastSecond: return "Paketverlust in der letzten Sekunde: %f%%";
		case EClientText::MessageResendBuffer: return "Nachrichten im Sendewiederholungspuffer: %d";
		case EClientText::ByteResendBuffer: return "Bytes im Sendewiederholungspuffer: %d";
		case EClientText::CreatedPlayers: return "Erstellte Spieler: %d";
		case EClientText::CreatedItems: return "Erstellte Gegenstände: %d";
		case EClientText::NotConnected: return "Nicht verbunden!";
		case EClientText::PlayerList: return "Spieler auf diesem Server:";
		}
		return "";
	}
}

const char* ClientLanguage::Get(EClientText text, const std::string& language)
{
	// The legacy Gothic 1 renderer is tied to the Central-European execution
	// code page. Unsupported or missing translations deliberately fall back to
	// English instead of displaying text from a different selected language.
	if (language == "pl")
		return GetPolish(text);
	if (language == "de")
		return GetGerman(text);
	return GetEnglish(text);
}
