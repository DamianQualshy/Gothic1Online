#ifndef CCLIENTLANGUAGE_H
#define CCLIENTLANGUAGE_H

enum class EClientText
{
	EstablishingConnection,
	ConnectionLost,
	ServerClosedConnection,
	ConnectedJoining,
	IncorrectVersion,
	ServerFull,
	NicknameUsed,
	Banned,
	ConnectionFailed,
	Disconnected,
	NetworkProperties,
	ReceivedPackets,
	LostPackets,
	LostPacketsLastSecond,
	MessageResendBuffer,
	ByteResendBuffer,
	CreatedPlayers,
	CreatedItems,
	NotConnected,
	PlayerList
};

namespace ClientLanguage
{
	const char* Get(EClientText text, const RakString& language);
}

#endif // CCLIENTLANGUAGE_H
