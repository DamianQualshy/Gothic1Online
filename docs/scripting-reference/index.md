# Scripting reference

Function and event pages below this directory are generated from `g1odoc` blocks in the source code. They describe the common API used by both Squirrel and Lua; a page's side label states where it is available.

Regenerate after changing a scripting function or event:

```powershell
python docs/generate_reference.py
```

Use `python docs/generate_reference.py --check` to verify that committed pages match the source metadata.
