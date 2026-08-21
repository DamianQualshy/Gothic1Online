# Scripting overview

G1O exposes the same language-neutral host API to Squirrel and Lua. The runtime adapter is responsible only for converting values, binding functions and constants, loading files, and retaining callable event/timer handlers. Game-facing client and server bindings do not depend on a specific scripting language.

This boundary makes another language possible later without duplicating the event, timer, networking, or native-function layers. A new adapter still needs explicit integration: a runtime implementation, source and bytecode extensions, build dependencies, and client compilation support.

## Runtime rules

- One runtime loads one language and may load multiple files in order.
- Server and client runtimes may choose different languages.
- A `shared` declaration is inserted into both lists and therefore must be compatible with each list's selected language.
- A load error stops that runtime; partial mixed-language startup is rejected during preflight.

## Events

Callbacks have been replaced by named events. Built-in lifecycle and game events are registered before scripts load. Custom events use `addEvent`, and handlers use `addEventHandler` and `removeEventHandler`.

Remote events are opt-in. Pass `true` as the second argument to `addEvent` before `triggerServerEvent` or `triggerClientEvent` may dispatch that event over the network. The server prepends the authenticated sender's player ID to client-originated event arguments.

## Shared functions

Language-neutral utilities such as `sscanf`, distance helpers, color conversion, hashes, tick count, events, and timers are registered once by the shared engine. Client-only Gothic functions use `CFunction`; server-only functions use `SFunction`.

## Values

The common value layer supports null, booleans, signed integers, floating-point numbers, strings, arrays, string-keyed tables, and callable references. Network events exclude callable values and impose limits on argument counts, strings, collections, and nesting depth.
