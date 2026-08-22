# Gothic 1 Online documentation

The documentation site uses MkDocs Material. Its scripting reference is generated from `g1odoc` blocks in the C++ sources.

From the repository root:

```powershell
python -m pip install -r docs/requirements.txt
python docs/generate_reference.py
python -m mkdocs serve --config-file mkdocs.yml
```

Use `python docs/generate_reference.py --check` in CI to reject stale generated pages without modifying them.

Pushes to `main` deploy the generated site to the `gh-pages` branch. Configure the repository's GitHub Pages source as **Deploy from a branch**, using `gh-pages` and the `/ (root)` directory. The deployment workflow owns the generated branch; do not edit it by hand.

Do not edit files inside the generated `*-functions` and `*-events` directories by hand. Edit the corresponding `g1odoc` block and regenerate instead. Manual pages under `docs/server-manual` and `docs/client-manual` follow the same concise, behavior-first organization as the GMPC manuals and are preserved by the generator.

Each block requires `@name`, `@side server`, `@category`, and `@version`. The generator also supports the GMPC-style `@deprecated`, `@note`, `@cancellable`, and multiline `@example (Squirrel)` or `@example (Lua)` tags. Function and event declarations are synthesized from `@param` and `@return` metadata.
