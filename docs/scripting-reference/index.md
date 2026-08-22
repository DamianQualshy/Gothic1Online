# Scripting reference

Function and event pages below this directory are generated from `g1odoc` blocks in the source code. Every documented API runs in the authoritative server VM and is available to both Squirrel and Lua unless its page says otherwise.

Regenerate after changing a scripting function or event:

```powershell
python docs/generate_reference.py
```

Use `python docs/generate_reference.py --check` to verify that committed pages match the source metadata.
