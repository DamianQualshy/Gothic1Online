Default G1O resource pack
=========================

server-scripts/server-main.gm is executed by GO_Server.exe. It contains
working join, disconnect, chat, and command callback examples.

client-scripts/client-main.gm is downloaded into Multiplayer/Script and then
executed by the selected client DLL. It contains local /ping and /where
command examples plus the complete set of client callback signatures.

Files placed in download are synchronized into the client's Data directory.
Keep the entry-point names in ../config.xml in sync with renamed script
files.
