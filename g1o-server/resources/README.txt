Default G1O server resources
============================

config.xml accepts ordered script declarations and imports. Every script runs
on the server. A declaration contains a relative src path and has no type:

    <script src="resources/squirrel-scripts/main.nut" />

Imports are expanded inline. Paths inside an imported XML document are
relative to that document, so constants and helpers remain at their declared
positions in the final loading sequence.

The default config enables resources/squirrel-scripts/scripts.xml and includes
the equivalent Lua import as a commented line. Enable exactly one language.
The complete expanded script list must contain only .nut files or only .lua
files. A missing file, duplicate, import cycle, path traversal, mixed language,
or legacy type attribute stops startup.

squirrel-scripts and lua-scripts contain equivalent flat server examples in
this order: constants, helpers, main, player-events, commands.

Clients do not download or execute scripts. Files placed in download are still
synchronized into the client's Gothic Data directory.
