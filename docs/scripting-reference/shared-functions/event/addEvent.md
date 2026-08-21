---
title: 'addEvent'
---

# `function` addEvent <font size="4">(shared-side)</font>

!!! info "Available since version: 0.5.0"

This function registers a custom event.

## Declaration

```cpp
bool addEvent(string eventName, bool allowRemoteTrigger)
```

## Parameters

* `string` **eventName**: Event name, from 1 to 128 bytes.
* `bool` **allowRemoteTrigger**: Whether the event accepts network triggers.

## Returns `bool`

True if the event was registered.


---
