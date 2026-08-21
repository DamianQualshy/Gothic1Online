-- Server lifecycle and timer examples.

function exampleLogServerStatus()
    print(string.format("[example] Players online: %d/%d", getPlayersCount(), getMaxSlots()))
end

function handleServerInit()
    print("[example] Default Lua resource loaded")
    print("[example] Info color: " .. exampleColorText(EXAMPLE_COLOR_INFO))
    setTimer(exampleLogServerStatus, 60000, true)
end

addEventHandler("onInit", handleServerInit)
