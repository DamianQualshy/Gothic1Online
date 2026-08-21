# Server configuration

The server reads `config.xml` from its working directory. The root element is `<server>`, with one `<config>` element for server settings and ordered `<script>` or `<import>` declarations for scripting.

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

## Server settings

| Attribute | Default | Meaning |
| --- | --- | --- |
| `public` | `false` | Whether the server registers with the configured master server. Accepts `true`, `false`, `1`, or `0`. |
| `host_name` | `Gothic Online Server` | Name shown to players and in server listings. |
| `port` | `28970` | RakNet game port and base for the resource downloader. |
| `max_slots` | `32` | Maximum player count. |
| `rcon_pass` | `change-me` | Administrator password. Change it before public hosting. |

## Script declarations

Each script declaration has a relative source path and one side:

```xml
<script src="resources/squirrel-scripts/server/main.nut" type="server" />
<script src="resources/squirrel-scripts/shared/constants.nut" type="shared" />
<script src="resources/squirrel-scripts/client/main.nut" type="client" />
```

Declarations are processed in document order. `server` scripts execute only on the server, `client` scripts are compiled into the client package, and `shared` scripts participate in both ordered lists.

Only `.nut` and `.lua` source files are accepted. Every final server list and client list must contain one language. The runtime rejects a mixed list before executing its first file. The default config therefore shows both complete resources but comments the Lua import; uncommenting Lua requires commenting Squirrel.

## Imports

Imports are expanded inline, preserving order:

```xml
<import src="resources/squirrel-scripts/scripts.xml" />
```

Paths inside an imported document are relative to that document, matching G2O's behavior. Imports may be nested, but each imported resource must be single-language. A server may still use Squirrel while its client uses Lua by placing those declarations in separate imports or directly in the top-level `config.xml`.

Startup fails on missing or invalid XML, import cycles, missing scripts, duplicate effective scripts, absolute paths, traversal outside the server directory, unsupported sides or extensions, and mixed-language resources/runtime lists. An invalid existing configuration is not replaced with defaults.
