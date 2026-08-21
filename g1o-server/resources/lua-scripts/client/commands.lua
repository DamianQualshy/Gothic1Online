-- Client-only commands cancel the built-in command after handling it.

function handleClientCommand(command, params)
    if command == "help" then
        exampleShowClientHint()
        cancelEvent()
    elseif command == "ping" then
        addChatMessage(180, 220, 255, string.format("Ping: %d ms", getPlayerPing()))
        cancelEvent()
    elseif command == "where" then
        local position = getPlayerPosition()
        if position then
            addChatMessage(180, 220, 255, "Position: " .. examplePositionText(position))
        end
        cancelEvent()
    elseif command == "language" then
        addChatMessage(180, 220, 255, "Runtime language: " .. getLanguage())
        cancelEvent()
    elseif command == "color" then
        addChatMessage(180, 220, 255, "Info color: " .. exampleColorText(EXAMPLE_COLOR_INFO))
        cancelEvent()
    end
end

addEventHandler("onCommand", handleClientCommand)
