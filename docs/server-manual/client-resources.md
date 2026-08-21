# Client script resources

Only client and shared scripts declared by `config.xml` are distributed. At server startup they are compiled in declaration order:

| Source | Downloaded form |
| --- | --- |
| Squirrel `.nut` | Squirrel `.cnut` bytecode with debug information disabled |
| Lua `.lua` | stripped Lua `.luac` bytecode |

The server writes `resources/client-resources/client-scripts.pak` and `client-scripts.manifest.json`. The manifest preserves execution order and records the archive size, archive SHA-256, and the size and SHA-256 of every compiled script. The launcher synchronizes the package into `Multiplayer/Resources`; the client verifies it before creating the runtime.

The client does not read a script entrypoint from its own configuration. The downloaded manifest is the single source of truth for the complete ordered script list.

!!! warning
    Bytecode is obfuscation, not encryption. It prevents casual source reading, but a determined user can reverse engineer code that their machine must execute.

!!! note
    The current hashes check consistency against the downloaded manifest. They do not authenticate the manifest's publisher because the package is not signed.
