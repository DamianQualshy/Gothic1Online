# Home

## Introduction

Gothic 1 Online (**G1O**) is an open-source multiplayer modification for Gothic 1. The repository contains the injected game client, launcher, game server, master server, and the shared network and scripting infrastructure.

Game modes are authoritative server programs. G1O supports Squirrel and Lua, but one configured script list must use one language. Clients do not download or execute game-mode scripts.

---

The native client targets Gothic 1 Classic. GMPC, GMPA, and G2O are behavioral references for multiplayer architecture; their Gothic 2 layouts and addresses are not used by G1O.

## Start Here

- [Server configuration](server-manual/configuration.md) describes `config.xml`, imports, validation, and startup order.
- [Server scripting](server-manual/scripting.md) explains runtimes, constants, events, and client-reported input.
- [Client configuration](client-manual/configuration.md) documents `G1O_Config.json`.

## Useful Links

##### Language documentation

- [Squirrel 3 documentation](http://www.squirrel-lang.org/doc/squirrel3.html)
- [Lua 5.4 reference manual](https://www.lua.org/manual/5.4/)

## IDE

##### Visual Studio Code

- [Visual Studio Code](https://code.visualstudio.com/)
- [Lua Language Server](https://marketplace.visualstudio.com/items?itemName=sumneko.lua)
