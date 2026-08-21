# Gothic 1 Online

Gothic 1 Online is a multiplayer modification for Gothic 1. This documentation covers server setup, client-resource delivery, and the scripting API shared by Squirrel and Lua.

The native game integration is built for the Gothic 1 API (`__G1`). References to GMPC and G2O describe scripting and resource-system behavior only; Gothic 2 engine layouts and addresses are not used.

## Scripting at a glance

- Server scripts are trusted and may use either Squirrel (`.nut`) or Lua (`.lua`).
- Client scripts use the same API surface but execute under a restricted runtime.
- Functions, values, events, and timers are language-neutral.
- A single runtime or imported resource cannot mix Squirrel and Lua files.
- Client source is compiled into `.cnut` or stripped `.luac` bytecode before download.

Start with [server configuration](server-manual/configuration.md), then read the [scripting overview](scripting/index.md). The generated [scripting reference](scripting-reference/index.md) is derived directly from `g1odoc` blocks in the source tree.
