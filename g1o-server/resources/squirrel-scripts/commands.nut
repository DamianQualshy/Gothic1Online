// Commands are entered without the leading slash here.

function exampleSendHelp(playerId)
{
	sendMessageToPlayer(playerId, 255, 210, 80, "/players - show the current player count");
	sendMessageToPlayer(playerId, 255, 210, 80, "/position - show your server-side position");
	sendMessageToPlayer(playerId, 255, 210, 80, "/ping - show your server-side ping");
}

function handlePlayerCommand(playerId, command, params)
{
	if (command == "help")
		exampleSendHelp(playerId);
	else if (command == "players")
		sendMessageToPlayer(playerId, 180, 220, 255, format("Players: %d/%d", getPlayersCount(), getMaxSlots()));
	else if (command == "ping")
		sendMessageToPlayer(playerId, 180, 220, 255, format("Ping: %d ms", getPlayerPing(playerId)));
	else if (command == "position")
	{
		local position = getPlayerPosition(playerId);
		if (position)
			sendMessageToPlayer(playerId, 180, 220, 255, "Position: " + examplePositionText(position));
		else
			sendMessageToPlayer(playerId, 220, 120, 120, "Your position is not available yet.");
	}
}

addEventHandler("onPlayerCommand", handlePlayerCommand);
