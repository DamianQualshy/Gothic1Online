---
title: 'triggerServerEvent'
---

# `function` triggerServerEvent <font size="4">(client-side)</font>

!!! info "Available since version: 0.4.0"

This function triggers a remotely enabled custom event on the server.

## Declaration

```cpp
bool triggerServerEvent(string eventName, ... arguments)
```

## Parameters

* `string` **eventName**: Custom server event name, from 1 to 128 bytes.
* `...` **arguments**: Values passed after the authenticated sender player ID.

## Returns `bool`

True if the event packet was sent.


---
