# Gothic 1 Online

This repository contains the Gothic 1 client DLL, external Qt launcher, game server, master server, and their shared legacy networking and Squirrel dependencies.

## Layout

- `g1o-client/gothic1/src` — injected Gothic 1 client DLL
- `g1o-client/gothic1/launcher` — external launcher
- `g1o-client/gothic1/lib/gothic-api` — maintained Union Gothic API, configured for Gothic 1 Classic
- `g1o-server` — multiplayer game server
- `g1o-master` — master server
- `Shared` — RakNet, Squirrel, TinyXML, hashing, threading, and common protocol code

The old hand-written ZenGin class layouts have been removed. G1O-specific helpers and hooks live in `g1o-client/gothic1/src/game`, while declarations that extend ZenGin classes use `ZenGin/Gothic_UserAPI`.

## Build configuration

The project uses xmake and targets 32-bit Windows. Native multiplayer targets use the static MSVC runtime; the launcher retains Qt's dynamic runtime convention and requires Qt 5 Widgets.

Available targets:

- `G1O.Client`
- `G1O.Launcher`
- `G1O.Server`
- `G1O.Master`

Configure a release build from the repository root with `xmake f -p windows -a x86 -m release`, then build all default products with `xmake`. To build one product, pass its target name to the build task, for example `xmake build G1O.Client`.

Master-server endpoints are xmake configuration options. For example:

```powershell
xmake f -p windows -a x86 -m release `
  --master_server_address=master.example.com `
  --master_server_port=1200 `
  --master_server_list_url=https://master.example.com/list.txt `
  --launcher_version_url=https://master.example.com/version.txt
```

In Bash/Git Bash, use backslashes for line continuation instead of PowerShell backticks:

```bash
xmake f -p windows -a x86 -m release \
  --master_server_address=127.0.0.1 \
  --master_server_port=1200 \
  --master_server_list_url=http://localhost/g1o/list.txt \
  --launcher_version_url=http://localhost/g1o/version.txt
```

These are build-time settings, not values from the client or server XML files. `master_server_address` is the RakNet host used by `GO_Server`; `master_server_port` is both its destination port and the port listened on by `GO_Master`. `master_server_list_url` is the separate HTTP(S) `list.txt` endpoint read by the launcher, and `launcher_version_url` is its update-check endpoint. Reconfigure and rebuild the affected targets after changing them.

`GO_Master` writes `list.txt` and `list.html` into its current working directory; it does not serve HTTP itself. Run it in the web directory represented by `master_server_list_url`, or publish/copy those files there. A game server registers only when its `config.xml` contains `<public>1</public>`; the default is private.

Install a completed build into a Gothic directory with:

```powershell
xmake install -o "E:\Gothic 1 Online"
```

This installs `GO_Launcher.exe`, the matching Qt runtime, plugins, and launcher language files under `Multiplayer/Launcher`. The client DLL is installed as `Multiplayer/versions/<version>.dll`, matching the version reported by a server. Client resources are copied from `g1o-client/gothic1/resources` into the game directory; an existing client configuration is preserved. The server is installed into `g1o-server`, with its configuration, default scripts, documentation, and download directory grouped under `g1o-server/resources`, matching the GMPC layout. `G1O.Master` is intentionally excluded from the default game installation.

The Gothic API target is deliberately compiled with `__G1`. Do not change it to `__G2` or `__G2A`; the class layouts, globals, and function addresses are not compatible.

Squirrel scripting and the external launcher remain part of the architecture.
