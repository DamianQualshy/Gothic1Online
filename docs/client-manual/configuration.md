# Client Configuration

The launcher and injected Gothic client share `Multiplayer/G1O_Config.xml`. The launcher updates connection and preference values; the client reads the same flat XML fields when it starts.

```xml
<GO_Config>
  <playerName>Nickname</playerName>
  <serverIp>127.0.0.1</serverIp>
  <serverPort>28970</serverPort>
  <startWorld>WORLD.ZEN</startWorld>
  <playerInstance>PC_HERO</playerInstance>
  <lang>en</lang>
  <launcherPosX>-1</launcherPosX>
  <launcherPosY>-1</launcherPosY>
  <favorites />
</GO_Config>
```

## Player And Connection

| Element | Default | Runtime behavior |
| --- | --- | --- |
| `playerName` | `Nickname` | Nickname sent during connection. |
| `serverIp` | `127.0.0.1` | Address selected by the launcher. |
| `serverPort` | `28970` | Game and download port. |
| `startWorld` | `WORLD.ZEN` | Initial Gothic world expected by the connection flow. |
| `playerInstance` | `PC_HERO` | Local player instance name. |
| `lang` | `en` | Launcher/client language. Shipped launcher values are `en`, `pl`, and `ru`; unsupported in-game text falls back to English. |

## Launcher State

`launcherPosX` and `launcherPosY` store the launcher window position. `-1` centers it on first start. The `favorites` element contains zero or more entries in this form:

```xml
<favorites>
  <server ip="127.0.0.1" port="28970" />
</favorites>
```

## Script Behavior

There is no client script setting or entry point. The launcher downloads only files published from the server's `resources/download` directory, and the injected client does not execute Squirrel or Lua code.
