// Server lifecycle and timer examples.

function exampleLogServerStatus()
{
	print(format("[example] Players online: %d/%d", getPlayersCount(), getMaxSlots()));
}

function handleServerInit()
{
	print("[example] Default Squirrel resource loaded");
	print("[example] Info color: " + exampleColorText(EXAMPLE_COLOR_INFO));
	setTimer(exampleLogServerStatus, 60000, true);
}

addEventHandler("onInit", handleServerInit);
