# Server Configuration

The server reads `config.xml` from its working directory. A missing file is created from compiled defaults. An existing malformed file is reported and prevents startup instead of being overwritten.

```xml
<server>
  <config public="false"
          host_name="Gothic Online Server"
          port="28970"
          max_slots="32"
          rcon_pass="change-me" />

  <import src="resources/squirrel-scripts/scripts.xml" />
  <!-- <import src="resources/lua-scripts/scripts.xml" /> -->
</server>
```

## Server Settings

| Attribute | Default | Runtime behavior |
| --- | --- | --- |
| `public` | `false` | Enables registration with the configured master server. Accepts `true`, `false`, `1`, or `0`. |
| `host_name` | `Gothic Online Server` | Name sent to clients, the launcher, and master-server listings. |
| `port` | `28970` | RakNet game port and TCP download port. |
| `max_slots` | `32` | Maximum number of accepted players. |
| `rcon_pass` | `change-me` | Administrator password. Change it before public hosting. |

## Script Startup

Every script runs on the server. A declaration contains only a relative source path:

```xml
<script src="resources/squirrel-scripts/constants.nut" />
<script src="resources/squirrel-scripts/main.nut" />
```

Declarations execute in document order. A legacy `type="client"`, `type="shared"`, or `type="server"` attribute is rejected; it is not ignored. This makes stale split configurations fail clearly.

Only `.nut` and `.lua` source files are accepted. The complete expanded list must use one language, and a load error stops startup. To switch the default server to Lua, comment the Squirrel import and enable the Lua import.

## Imports

Imports are expanded inline at their declaration position:

```xml
<import src="resources/squirrel-scripts/scripts.xml" />
```

Paths inside an imported document are relative to that document. Imports may be nested, but cycles are rejected. The resulting sequence remains exact, so a constants file can reliably precede helpers and gameplay entry points.

Startup also fails on missing files, duplicate effective scripts, absolute paths, paths that leave the server directory, unsupported extensions, or a mixed Squirrel/Lua list.

## Downloads

Files under `resources/download` are synchronized into the client's Gothic `Data` directory. Scripts are excluded from this transport: the launcher no longer requests a script package, and the client has no script runtime.

See [Server Scripting](scripting.md) for the execution model and event boundary.
