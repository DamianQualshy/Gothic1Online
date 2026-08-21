// Client input and local-player event examples.

function handleServerWelcome(name, playerCount)
{
	addChatMessage(120, 220, 120, format("Welcome %s. Players online: %d", name, playerCount));
}

function handlePlayerDead()
{
	addChatMessage(220, 120, 120, "Your character died.");
}

function handlePlayerRespawn()
{
	addChatMessage(120, 220, 120, "Your character respawned.");
}

function handleKeyDown(key, letter)
{
	if (key == KEY_F5)
	{
		addChatMessage(180, 220, 255, "F5 sent the client-ready event again.");
		triggerServerEvent(EXAMPLE_EVENT_CLIENT_READY, getLanguage());
	}
}

function handleMouseDown(button)
{
	print(format("[example] Mouse button %d pressed", button));
}

function handlePlayerTakeFocus(id, name, x, y, z)
{
	print(format("[example] Focused %s (%d) at %.2f, %.2f, %.2f", name, id, x, y, z));
}

function handlePlayerLostFocus(id, name)
{
	print(format("[example] Lost focus: %s (%d)", name, id));
}

addEventHandler(EXAMPLE_EVENT_SERVER_WELCOME, handleServerWelcome);
addEventHandler("onPlayerDead", handlePlayerDead);
addEventHandler("onPlayerRespawn", handlePlayerRespawn);
addEventHandler("onKeyDown", handleKeyDown);
addEventHandler("onMouseDown", handleMouseDown);
addEventHandler("onPlayerTakeFocus", handlePlayerTakeFocus);
addEventHandler("onPlayerLostFocus", handlePlayerLostFocus);
