# Gothic 1 Online

This repository contains the Gothic 1 client DLL, external Qt launcher, game server, and their shared networking and scripting infrastructure.

## Layout

- `g1o-client/gothic1/src` — injected Gothic 1 client DLL
- `g1o-client/gothic1/launcher` — external launcher
- `g1o-client/gothic1/lib/gothic-api` — maintained Union Gothic API, configured for Gothic 1 Classic
- `g1o-server` — multiplayer game server
- `Shared` — RakNet, the language-neutral server scripting core, TinyXML, hashing, threading, and common protocol code
- `dependencies` — pinned Squirrel and Sqrat submodules

The old hand-written ZenGin class layouts have been removed. G1O-specific helpers and hooks live in `g1o-client/gothic1/src/game`, while declarations that extend ZenGin classes use `ZenGin/Gothic_UserAPI`.

## Build configuration

The project uses xmake and targets 32-bit Windows. Native multiplayer targets use the static MSVC runtime; the launcher retains Qt's dynamic runtime convention and requires Qt 5 Widgets.

Available targets:

- `G1O.Client`
- `G1O.Launcher`
- `G1O.Server`

Configure a release build from the repository root with `xmake f -p windows -a x86 -m release`, then build all default products with `xmake`. To build one product, pass its target name to the build task, for example `xmake build G1O.Client`.

Master-server endpoints are xmake configuration options. For example:

```powershell
xmake f -p windows -a x86 -m release `
  --master_server_endpoint=https://master.example.com/g1o/servers `
  --launcher_version_url=https://master.example.com/g1o/version.txt
```

In Bash/Git Bash, use backslashes for line continuation instead of PowerShell backticks:

```bash
xmake f -p windows -a x86 -m release \
  --master_server_endpoint=http://localhost:8080/g1o/servers \
  --launcher_version_url=http://localhost:8080/g1o/version.txt
```

These are build-time settings, not values from the client or server XML files. `master_server_endpoint` is one HTTP(S) endpoint shared by `GO_Server` and `GO_Launcher`: public game servers POST JSON heartbeats to it every 15 seconds and the launcher retrieves the JSON list from it with GET. `launcher_version_url` remains the launcher's separate update-check endpoint. Reconfigure and rebuild the affected targets after changing them. A game server registers only when its `config.xml` has `public="true"`; the default is private. The server generates and persists `server_identity_seed` on first startup.

Install a completed build into a Gothic directory with:

```powershell
xmake install -o "E:\Gothic 1 Online"
```

This installs `GO_Launcher.exe`, the matching Qt runtime, plugins, and launcher language files under `Multiplayer/Launcher`. The client DLL is installed as `Multiplayer/versions/<version>.dll`, matching the version reported by a server. Client resources are copied from `g1o-client/gothic1/resources` into the game directory; an existing client configuration is preserved. The server is installed into `g1o-server`, with `config.xml` beside the executable and scripts, imported script lists, documentation, and downloads under `g1o-server/resources`.

The Gothic API target is deliberately compiled with `__G1`. Do not change it to `__G2` or `__G2A`; the class layouts, globals, and function addresses are not compatible.

The scripting layer supports Squirrel and Lua through runtime adapters over one server-side value, event, timer, and native-function API. Server `config.xml` uses ordered `<script src="..." />` declarations and recursive `<import src="..." />` files. Imports are expanded inline, so the declared loading order remains authoritative. The complete list must use one language; mixed Squirrel/Lua lists are rejected before execution. Clients do not download or execute game-mode scripts. They report a fixed set of input and gameplay observations to server events, with the player identity derived from the authenticated connection. The game bindings remain explicitly Gothic 1 (`__G1`).
