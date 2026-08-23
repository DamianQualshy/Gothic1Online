---
title: 'addEventHandler'
---

# `function` addEventHandler

!!! info "Available since version: 0.5.0"

This function binds a function to an event.

## Declaration

```cpp
bool addEventHandler(string eventName, fun handler, int priority)
```

## Parameters

* `string` **eventName**: Event name.
* `fun` **handler**: Function to invoke.
* `int` **priority**: Optional handler priority; lower values run first.

## Returns `bool`

True if the handler was added.


---
