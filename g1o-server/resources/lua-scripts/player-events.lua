-- Server player and client-reported input events.

function handlePlayerConnect(playerId)
    local name = getPlayerName(playerId)
    sendMessageToAll(120, 220, 120, name .. " joined the server.")
    sendMessageToPlayer(playerId, 255, 210, 80, "Welcome! Type /help for example commands.")
end

function handlePlayerDisconnect(playerId, reason)
    local name = getPlayerName(playerId)
    sendMessageToAll(220, 120, 120, name .. " left the server (" .. reason .. ").")
end

function handlePlayerMessage(playerId, message)
    if message == "cancelme" then
        sendMessageToPlayer(playerId, 255, 210, 80, "That example message was cancelled by script.")
        cancelEvent()
    end
end

function handlePlayerHit(attackerId, targetId)
    print(string.format("[example] Player %d hit player %d", attackerId, targetId))
end

function handlePlayerDeath(playerId, killerId)
    print(string.format("[example] Player %d died; killer: %d", playerId, killerId))
end

function handleKeyDown(playerId, key, letter)
    if key == KEY_F5 then
        sendMessageToPlayer(playerId, 180, 220, 255, "F5 was handled by the server script.")
    end
end

function handleMouseDown(playerId, button)
    print(string.format("[example] Player %d pressed mouse button %d", playerId, button))
end

addEventHandler("onPlayerConnect", handlePlayerConnect)
addEventHandler("onPlayerDisconnect", handlePlayerDisconnect)
addEventHandler("onPlayerMessage", handlePlayerMessage)
addEventHandler("onPlayerHit", handlePlayerHit)
addEventHandler("onPlayerDeath", handlePlayerDeath)
addEventHandler("onKeyDown", handleKeyDown)
addEventHandler("onMouseDown", handleMouseDown)
