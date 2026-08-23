---
title: 'onUseItem'
---

# `event` onUseItem

!!! info "Available since version: 0.5.0"

This event is triggered on the server when a connected client changes the item held in a hand.

## Parameters

```cpp
void onUseItem(int playerID, string instance, int amount, int hand)
```

* `int` **playerID**: Authenticated player ID.
* `string` **instance**: Item instance name or an empty string.
* `int` **amount**: Item amount.
* `int` **hand**: Hand identifier.


---
