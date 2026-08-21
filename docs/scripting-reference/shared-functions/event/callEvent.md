---
title: 'callEvent'
---

# `function` callEvent <font size="4">(shared-side)</font>

!!! info "Available since version: 0.5.0"

This function dispatches a custom event to all of its handlers.

## Declaration

```cpp
bool callEvent(string eventName, ... arguments)
```

## Parameters

* `string` **eventName**: Event name.
* `...` **arguments**: Values passed to each handler.

## Returns `bool`

True if the event existed, was enabled, and was not cancelled.


---
