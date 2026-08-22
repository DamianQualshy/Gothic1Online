-- Commands are entered without the leading slash here.

function exampleSendHelp(playerId)
    sendMessageToPlayer(playerId, 255, 210, 80, "/players - show the current player count")
    sendMessageToPlayer(playerId, 255, 210, 80, "/position - show your server-side position")
    sendMessageToPlayer(playerId, 255, 210, 80, "/ping - show your server-side ping")
end

function handlePlayerCommand(playerId, command, params)
    if command == "help" then
        exampleSendHelp(playerId)
    elseif command == "players" then
        sendMessageToPlayer(playerId, 180, 220, 255, string.format("Players: %d/%d", getPlayersCount(), getMaxSlots()))
    elseif command == "ping" then
        sendMessageToPlayer(playerId, 180, 220, 255, string.format("Ping: %d ms", getPlayerPing(playerId)))
    elseif command == "position" then
        local position = getPlayerPosition(playerId)
        if position then
            sendMessageToPlayer(playerId, 180, 220, 255, "Position: " .. examplePositionText(position))
        else
            sendMessageToPlayer(playerId, 220, 120, 120, "Your position is not available yet.")
        end
    end
end

addEventHandler("onPlayerCommand", handlePlayerCommand)
