// Client-only commands cancel the built-in command after handling it.

function handleClientCommand(command, params)
{
	if (command == "help")
	{
		exampleShowClientHint();
		cancelEvent();
	}
	else if (command == "ping")
	{
		addChatMessage(180, 220, 255, format("Ping: %d ms", getPlayerPing()));
		cancelEvent();
	}
	else if (command == "where")
	{
		local position = getPlayerPosition();
		if (position)
			addChatMessage(180, 220, 255, "Position: " + examplePositionText(position));
		cancelEvent();
	}
	else if (command == "language")
	{
		addChatMessage(180, 220, 255, "Runtime language: " + getLanguage());
		cancelEvent();
	}
	else if (command == "color")
	{
		addChatMessage(180, 220, 255, "Info color: " + exampleColorText(EXAMPLE_COLOR_INFO));
		cancelEvent();
	}
}

addEventHandler("onCommand", handleClientCommand);
