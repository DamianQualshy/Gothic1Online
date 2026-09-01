Gothic 1 Online server
======================

Run GO_Server.exe with this directory as its working directory.

Configuration is stored in config.xml. The server is private by default. Set
public="true" on the <config> element to register it with the master server
HTTP endpoint compiled into GO_Server.exe. Ordered <script> declarations and <import> files
select the scripts loaded for the client, server, and shared sides.

Required runtime directories are grouped under resources:

	resources/squirrel-scripts  Shared, server, and client Squirrel examples
	resources/lua-scripts       Equivalent shared, server, and client Lua examples
	resources/download          Additional files downloaded into the client's Data folder

The default config enables Squirrel and keeps the Lua import commented for quick
switching. See resources/README.txt for the included events and commands.

Public servers send a JSON heartbeat every 15 seconds to the endpoint selected
with xmake's master_server_endpoint option. The launcher retrieves the JSON
server list with GET from that same endpoint.

See the repository README.md for xmake configuration, build, and installation
commands.
