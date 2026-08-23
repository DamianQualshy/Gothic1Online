---
title: 'onMobTrigger'
---

# `event` onMobTrigger

!!! info "Available since version: 0.5.0"

This event is triggered on the server when a connected client starts interacting with a mob.

## Parameters

```cpp
void onMobTrigger(int playerID, string name, float x, float y, float z, int type)
```

* `int` **playerID**: Authenticated player ID.
* `string` **name**: Mob name.
* `float` **x**: X coordinate.
* `float` **y**: Y coordinate.
* `float` **z**: Z coordinate.
* `int` **type**: Mob type.


---
