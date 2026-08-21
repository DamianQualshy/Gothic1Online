// Server player events and an opt-in client-to-server event.

function handlePlayerConnect(playerId)
{
	local name = getPlayerName(playerId);
	sendMessageToAll(120, 220, 120, name + " joined the server.");
	sendMessageToPlayer(playerId, 255, 210, 80, "Welcome! Type /help for example commands.");
}

function handlePlayerDisconnect(playerId, reason)
{
	local name = getPlayerName(playerId);
	sendMessageToAll(220, 120, 120, name + " left the server (" + reason + ").");
}

function handlePlayerMessage(playerId, message)
{
	if (message == "cancelme")
	{
		sendMessageToPlayer(playerId, 255, 210, 80, "That example message was cancelled by script.");
		cancelEvent();
	}
}

function handlePlayerHit(attackerId, targetId)
{
	print(format("[example] Player %d hit player %d", attackerId, targetId));
}

function handlePlayerDeath(playerId, killerId)
{
	print(format("[example] Player %d died; killer: %d", playerId, killerId));
}

function handleClientReady(playerId, language)
{
	local name = getPlayerName(playerId);
	print(format("[example] %s initialized the %s client runtime", name, language));
	triggerClientEvent(playerId, EXAMPLE_EVENT_SERVER_WELCOME, name, getPlayersCount());
}

addEvent(EXAMPLE_EVENT_CLIENT_READY, true);
addEventHandler(EXAMPLE_EVENT_CLIENT_READY, handleClientReady);
addEventHandler("onPlayerConnect", handlePlayerConnect);
addEventHandler("onPlayerDisconnect", handlePlayerDisconnect);
addEventHandler("onPlayerMessage", handlePlayerMessage);
addEventHandler("onPlayerHit", handlePlayerHit);
addEventHandler("onPlayerDeath", handlePlayerDeath);
