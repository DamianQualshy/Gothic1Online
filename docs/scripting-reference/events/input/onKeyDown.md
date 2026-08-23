---
title: 'onKeyDown'
---

# `event` onKeyDown

!!! info "Available since version: 0.5.0"

This event is triggered on the server when a connected client presses a key.

## Parameters

```cpp
void onKeyDown(int playerID, int key, string letter)
```

* `int` **playerID**: Authenticated player ID.
* `int` **key**: Gothic DirectInput scan code.
* `string` **letter**: Translated key character.


---
