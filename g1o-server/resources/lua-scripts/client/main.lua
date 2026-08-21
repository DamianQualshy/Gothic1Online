-- Client lifecycle, timer, and remote-event examples.

function exampleShowClientHint()
    addChatMessage(180, 220, 255, "Client commands: /help, /ping, /where, /language, /color")
end

function handleClientInit()
    addChatMessage(120, 220, 120, "Default Lua client resource loaded.")
    setTimer(exampleShowClientHint, 10000, false)
    triggerServerEvent(EXAMPLE_EVENT_CLIENT_READY, getLanguage())
end

addEvent(EXAMPLE_EVENT_SERVER_WELCOME, true)
addEventHandler("onInit", handleClientInit)
