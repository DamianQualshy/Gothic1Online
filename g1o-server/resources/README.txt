Default G1O resource pack
=========================

config.xml accepts ordered G2O-style script declarations and imports. The
default config enables resources/squirrel-scripts/scripts.xml and includes the
equivalent Lua import as a commented line. Enable exactly one of them. Each
script uses a relative src path and a type of client, server, or shared.
Imported paths are relative to the XML file containing them. Shared scripts
are loaded by both the server and packaged client runtime at that position.

squirrel-scripts and lua-scripts contain parallel shared, server, and client
examples. Their scripts.xml files show the complete load order. Every imported
resource and every server-side or client-side runtime must use one language
only; enabling both default imports stops server startup by design.

To use different languages for the server and client runtimes, place their
declarations in separate single-language imports (or directly in config.xml).

At server startup, the selected client scripts are compiled into client-resources as a
manifest plus client-scripts.pak. Squirrel source becomes .cnut bytecode and
Lua source becomes stripped .luac bytecode. The client downloads only that
package into Multiplayer/Resources and verifies it before execution.

Bytecode packaging prevents casual source reading, but it is obfuscation, not
cryptographic secrecy. A determined client can still reverse engineer code it
must execute. The current SHA-256 checks detect corruption against the
downloaded manifest; they do not authenticate who produced that manifest.

Files placed in download are synchronized into the client's Data directory.
Only scripts declared in config.xml or its imports are packaged or executed.
