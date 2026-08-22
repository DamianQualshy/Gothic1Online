---
title: 'setTimer'
---

# `function` setTimer <font size="4">(server-side)</font>

!!! info "Available since version: 0.4.0"

This function creates a script timer.

## Declaration

```cpp
int setTimer(fun handler, int interval, bool repeat, mixed data)
```

## Parameters

* `fun` **handler**: Function to invoke.
* `int` **interval**: Interval in milliseconds.
* `bool` **repeat**: Whether the timer repeats.
* `mixed` **data**: Optional value passed to the handler.

## Returns `int`

Timer ID.


---
