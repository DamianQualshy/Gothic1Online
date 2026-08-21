-- Client input and local-player event examples.

function handleServerWelcome(name, playerCount)
    addChatMessage(120, 220, 120, string.format("Welcome %s. Players online: %d", name, playerCount))
end

function handlePlayerDead()
    addChatMessage(220, 120, 120, "Your character died.")
end

function handlePlayerRespawn()
    addChatMessage(120, 220, 120, "Your character respawned.")
end

function handleKeyDown(key, letter)
    if key == KEY_F5 then
        addChatMessage(180, 220, 255, "F5 sent the client-ready event again.")
        triggerServerEvent(EXAMPLE_EVENT_CLIENT_READY, getLanguage())
    end
end

function handleMouseDown(button)
    print(string.format("[example] Mouse button %d pressed", button))
end

function handlePlayerTakeFocus(id, name, x, y, z)
    print(string.format("[example] Focused %s (%d) at %.2f, %.2f, %.2f", name, id, x, y, z))
end

function handlePlayerLostFocus(id, name)
    print(string.format("[example] Lost focus: %s (%d)", name, id))
end

addEventHandler(EXAMPLE_EVENT_SERVER_WELCOME, handleServerWelcome)
addEventHandler("onPlayerDead", handlePlayerDead)
addEventHandler("onPlayerRespawn", handlePlayerRespawn)
addEventHandler("onKeyDown", handleKeyDown)
addEventHandler("onMouseDown", handleMouseDown)
addEventHandler("onPlayerTakeFocus", handlePlayerTakeFocus)
addEventHandler("onPlayerLostFocus", handlePlayerLostFocus)
