# Client Configuration

The launcher and injected Gothic client share `Multiplayer/G1O_Config.json` for persistent user preferences. On first launch, an existing `G1O_Config.xml` is imported and the JSON file is written without changing the server's XML configuration format.

```json
{
  "playerName": "Nickname",
  "lang": "en",
  "launcherPosX": -1,
  "launcherPosY": -1,
  "favorites": []
}
```

## Player Preferences

| Field | Default | Runtime behavior |
| --- | --- | --- |
| `playerName` | `Nickname` | Nickname sent during connection. |
| `lang` | `en` | Launcher/client language. Shipped launcher values are `en`, `pl`, and `ru`; unsupported in-game text falls back to English. |

## Launch Session

The selected server address, port, and start world are transient session data. The launcher validates them, serializes them as JSON into the child-only `G1O_LAUNCH_SESSION` environment variable, creates Gothic suspended, and injects the matching client DLL. The injected client consumes and removes that variable before starting multiplayer. These values are never written to the persistent configuration.

The local player instance is an internal `PC_HERO` invariant rather than a configurable setting.

## Launcher State

`launcherPosX` and `launcherPosY` store the launcher window position. `-1` centers it on first start. The `favorites` array contains zero or more entries in this form:

```json
{
  "ip": "127.0.0.1",
  "port": "28970"
}
```

## Script Behavior

There is no client script setting or entry point. The launcher downloads only files published from the server's `resources/download` directory, and the injected client does not execute Squirrel or Lua code.
