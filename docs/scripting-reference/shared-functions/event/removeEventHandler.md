---
title: 'removeEventHandler'
---

# `function` removeEventHandler <font size="4">(shared-side)</font>

!!! info "Available since version: 0.5.0"

This function unbinds a function from an event.

## Declaration

```cpp
bool removeEventHandler(string eventName, fun handler)
```

## Parameters

* `string` **eventName**: Event name.
* `fun` **handler**: Previously registered function.

## Returns `bool`

True if a matching handler was removed.


---
