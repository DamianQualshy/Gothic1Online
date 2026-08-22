---
title: 'sscanf'
---

# `function` sscanf <font size="4">(server-side)</font>

!!! info "Available since version: 0.4.0"

This function parses a command string using a sequence of `d`, `f`, and `s` format characters.

## Declaration

```cpp
array|bool sscanf(string format, string input)
```

## Parameters

* `string` **format**: Value types to parse.
* `string` **input**: Command text.

## Returns `array|bool`

Parsed values, or false when parsing fails.


---
