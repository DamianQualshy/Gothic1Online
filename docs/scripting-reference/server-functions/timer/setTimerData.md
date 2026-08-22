---
title: 'setTimerData'
---

# `function` setTimerData <font size="4">(server-side)</font>

!!! info "Available since version: 0.4.0"

This function replaces the value passed to a script timer's handler.

## Declaration

```cpp
bool setTimerData(int timerId, mixed data)
```

## Parameters

* `int` **timerId**: Timer ID.
* `mixed` **data**: New handler value.

## Returns `bool`

True if the timer was updated.


---
