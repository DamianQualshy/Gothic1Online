---
title: 'triggerClientEvent'
---

# `function` triggerClientEvent <font size="4">(server-side)</font>

!!! info "Available since version: 0.4.0"

This function triggers a remotely enabled custom event on a client.

## Declaration

```cpp
bool triggerClientEvent(int playerID, string eventName, ... arguments)
```

## Parameters

* `int` **playerID**: Target player ID, or -1 for every connected player.
* `string` **eventName**: Custom client event name, from 1 to 128 bytes.
* `...` **arguments**: Values passed to the event handlers.

## Returns `bool`

True if the event packet was sent.


---
