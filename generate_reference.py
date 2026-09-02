#!/usr/bin/env python3
"""Generate the G1O scripting reference from source metadata and registrations."""

from __future__ import annotations

import argparse
import json
import re
import shutil
import sys
from dataclasses import asdict, dataclass
from pathlib import Path

from jinja2 import Environment, FileSystemLoader, StrictUndefined


SCRIPT_DIR = Path(__file__).resolve().parent
PROJECT_ROOT = SCRIPT_DIR.parent
DOCS_ROOT = SCRIPT_DIR
REFERENCE_ROOT = DOCS_ROOT / "scripting-reference"
TEMPLATES_ROOT = SCRIPT_DIR / "templates"

SOURCE_EXTENSIONS = {".cpp", ".h", ".hpp"}
EXCLUDED_PARTS = {".git", ".xmake", "build", "dependencies", "docs"}
GENERATED_DIRECTORIES = (
    "functions",
    "events",
    "constants",
)
VALID_KINDS = {"func", "event"}
VALID_SIDES = {"server"}

CONSTANT_SOURCE = PROJECT_ROOT / "g1o-server" / "Script" / "SVariable.cpp"
CONSTANT_ARRAY_RE = re.compile(
    r"constexpr\s+IntegerConstant\s+kConstants\[\]\s*=\s*\{(?P<body>.*?)\n\s*\};",
    re.DOTALL,
)
CONSTANT_RE = re.compile(
    r'\{\s*"(?P<name>[A-Z][A-Z0-9_]*)"\s*,\s*(?P<value>0x[0-9A-Fa-f]+|[0-9]+)\s*\}'
)
CONSTANT_GROUPS = {
    "keys": (
        "Keys",
        "DirectInput scan codes and aliases accepted by Gothic's keyboard input handling.",
    ),
    "weapon-modes": (
        "Weapon modes",
        "Values describing the weapon mode currently used by an NPC.",
    ),
    "weapon-skills": (
        "Weapon skills",
        "Identifiers for the weapon-skill categories exposed to scripts.",
    ),
    "skill-levels": (
        "Skill levels",
        "Values describing an NPC's learned weapon-skill level.",
    ),
    "protection-types": (
        "Protection types",
        "Damage protection categories used by NPC attributes.",
    ),
    "mob-types": (
        "Mob types",
        "Interactive world-object categories reported to scripts.",
    ),
    "hands": (
        "Hands",
        "Left- and right-hand identifiers used by inventory functions.",
    ),
}

BLOCK_RE = re.compile(
    r"/\*\s*g1odoc\s*\((?P<kind>[^)]+)\)\s*(?P<body>.*?)\*/",
    re.DOTALL | re.IGNORECASE,
)
TAG_RE = re.compile(r"^@(?P<tag>[A-Za-z_]+)\s*(?P<value>.*)$")
PARAM_RE = re.compile(r"^\((?P<type>[^)]+)\)\s+(?P<name>\S+)\s*(?P<description>.*)$")
RETURN_RE = re.compile(r"^\((?P<type>[^)]+)\)\s*(?P<description>.*)$")
NAME_RE = re.compile(r"^[A-Za-z_][A-Za-z0-9_]*$")


@dataclass(frozen=True)
class Parameter:
    type: str
    name: str
    description: str


@dataclass(frozen=True)
class ReturnValue:
    type: str
    description: str


@dataclass(frozen=True)
class Example:
    language: str
    code: str


@dataclass
class DocumentationBlock:
    kind: str
    name: str
    side: str
    category: str
    version: str
    deprecated: str | None
    description: str
    notes: list[str]
    params: list[Parameter]
    returns: ReturnValue | None
    cancellable: bool
    examples: list[Example]
    source: str
    line: int
    declaration: str = ""


@dataclass(frozen=True)
class ConstantValue:
    name: str
    value: int


@dataclass
class ConstantGroup:
    name: str
    slug: str
    description: str
    constants: list[ConstantValue]
    source: str
    line: int


class DocumentationError(RuntimeError):
    pass


def slugify(value: str) -> str:
    slug = re.sub(r"[^a-z0-9]+", "-", value.strip().lower()).strip("-")
    return slug or "uncategorized"


def clean_lines(body: str) -> list[str]:
    lines = [re.sub(r"^\s*\*\s?", "", line).rstrip() for line in body.splitlines()]
    while lines and not lines[0]:
        lines.pop(0)
    while lines and not lines[-1]:
        lines.pop()
    return lines


def parse_block(kind: str, body: str, source: Path, line: int) -> DocumentationBlock:
    normalized_kind = kind.strip().lower()
    location = f"{source.relative_to(PROJECT_ROOT).as_posix()}:{line}"
    if normalized_kind not in VALID_KINDS:
        raise DocumentationError(f"{location}: unsupported g1odoc kind '{normalized_kind}'")

    description_lines: list[str] = []
    values: dict[str, str] = {}
    notes: list[str] = []
    params: list[Parameter] = []
    returns: ReturnValue | None = None
    examples: list[Example] = []
    cancellable = False
    lines = clean_lines(body)
    index = 0

    while index < len(lines) and not TAG_RE.match(lines[index].strip()):
        description_lines.append(lines[index])
        index += 1

    while index < len(lines):
        stripped = lines[index].strip()
        if not stripped:
            index += 1
            continue
        match = TAG_RE.match(stripped)
        if not match:
            raise DocumentationError(f"{location}: text after tags must start with @")
        tag = match.group("tag").lower()
        value = match.group("value").strip()
        if tag == "param":
            parsed = PARAM_RE.match(value)
            if not parsed:
                raise DocumentationError(f"{location}: invalid @param syntax")
            params.append(Parameter(parsed.group("type").strip(), parsed.group("name"), parsed.group("description").strip()))
        elif tag in {"return", "returns"}:
            if returns is not None:
                raise DocumentationError(f"{location}: duplicate @return")
            parsed = RETURN_RE.match(value)
            if not parsed:
                raise DocumentationError(f"{location}: invalid @return syntax")
            returns = ReturnValue(parsed.group("type").strip(), parsed.group("description").strip())
        elif tag in {"name", "side", "category", "version", "deprecated"}:
            if tag in values:
                raise DocumentationError(f"{location}: duplicate @{tag}")
            values[tag] = value
        elif tag in {"note", "notes"}:
            if not value:
                raise DocumentationError(f"{location}: @{tag} cannot be empty")
            notes.append(value)
        elif tag == "cancellable":
            normalized = value.lower()
            if normalized not in {"", "1", "true", "yes", "on", "0", "false", "no", "off"}:
                raise DocumentationError(f"{location}: invalid @cancellable value '{value}'")
            cancellable = normalized in {"", "1", "true", "yes", "on"}
        elif tag == "example":
            language = value
            if language.startswith("(") and language.endswith(")"):
                language = language[1:-1].strip()
            if not language:
                raise DocumentationError(f"{location}: @example requires a language")
            code_lines: list[str] = []
            index += 1
            while index < len(lines) and not TAG_RE.match(lines[index].strip()):
                code_lines.append(lines[index])
                index += 1
            while code_lines and not code_lines[0]:
                code_lines.pop(0)
            while code_lines and not code_lines[-1]:
                code_lines.pop()
            if not code_lines:
                raise DocumentationError(f"{location}: @{tag} code is empty")
            examples.append(Example(language=language, code="\n".join(code_lines)))
            continue
        else:
            raise DocumentationError(f"{location}: unsupported tag @{tag}")
        index += 1

    missing = [tag for tag in ("name", "side", "category", "version") if not values.get(tag)]
    if missing:
        raise DocumentationError(f"{location}: missing {', '.join('@' + tag for tag in missing)}")
    if not NAME_RE.fullmatch(values["name"]):
        raise DocumentationError(f"{location}: invalid documented name '{values['name']}'")
    side = values["side"].lower()
    if side not in VALID_SIDES:
        raise DocumentationError(f"{location}: invalid side '{side}'")
    description = "\n".join(description_lines).strip()
    if not description:
        raise DocumentationError(f"{location}: description is empty")

    block = DocumentationBlock(
        kind=normalized_kind,
        name=values["name"],
        side=side,
        category=values["category"],
        version=values["version"],
        deprecated=values.get("deprecated"),
        description=description,
        notes=notes,
        params=params,
        returns=returns,
        cancellable=cancellable,
        examples=examples,
        source=source.relative_to(PROJECT_ROOT).as_posix(),
        line=line,
    )
    arguments = ", ".join(f"{param.type} {param.name}" for param in params)
    if block.kind == "func":
        block.declaration = f"{returns.type if returns else 'void'} {block.name}({arguments})"
    else:
        block.declaration = f"void {block.name}({arguments})"
    return block


def should_scan(path: Path) -> bool:
    relative = path.relative_to(PROJECT_ROOT)
    if path.suffix.lower() not in SOURCE_EXTENSIONS:
        return False
    if any(part.lower() in EXCLUDED_PARTS for part in relative.parts):
        return False
    lowered = relative.as_posix().lower()
    return "g1o-client/gothic1/lib/" not in lowered and "shared/tinyxml/" not in lowered


def scan() -> list[DocumentationBlock]:
    blocks: list[DocumentationBlock] = []
    for path in sorted(PROJECT_ROOT.rglob("*")):
        if not path.is_file() or not should_scan(path):
            continue
        data = path.read_bytes()
        if b"g1odoc (" not in data.lower():
            continue
        text = data.decode("utf-8", errors="replace")
        for match in BLOCK_RE.finditer(text):
            line = text.count("\n", 0, match.start()) + 1
            blocks.append(parse_block(match.group("kind"), match.group("body"), path, line))

    seen: dict[tuple[str, str, str], DocumentationBlock] = {}
    for block in blocks:
        key = (block.side, block.kind, block.name.lower())
        if key in seen:
            other = seen[key]
            raise DocumentationError(
                f"{block.source}:{block.line}: duplicate {block.side} {block.kind} '{block.name}' "
                f"(first declared at {other.source}:{other.line})"
            )
        seen[key] = block
    return sorted(blocks, key=lambda block: (block.side, block.kind, block.category.lower(), block.name.lower()))


def classify_constant(name: str) -> str:
    if name.startswith("KEY_"):
        return "keys"
    if name.startswith("NPC_WEAPON_"):
        return "weapon-modes"
    if name.startswith("WEAPON_"):
        return "weapon-skills"
    if name.startswith("SKILL_"):
        return "skill-levels"
    if name.startswith("PROT_"):
        return "protection-types"
    if name.startswith("MOB_"):
        return "mob-types"
    if name.startswith("HAND_"):
        return "hands"
    raise DocumentationError(f"{CONSTANT_SOURCE.relative_to(PROJECT_ROOT).as_posix()}: unclassified constant '{name}'")


def scan_constants() -> list[ConstantGroup]:
    text = CONSTANT_SOURCE.read_text(encoding="utf-8")
    array_match = CONSTANT_ARRAY_RE.search(text)
    if not array_match:
        raise DocumentationError(
            f"{CONSTANT_SOURCE.relative_to(PROJECT_ROOT).as_posix()}: could not find kConstants registration table"
        )

    body = array_match.group("body")
    matches = list(CONSTANT_RE.finditer(body))
    if body.count('{"') != len(matches):
        raise DocumentationError(
            f"{CONSTANT_SOURCE.relative_to(PROJECT_ROOT).as_posix()}: unsupported entry in kConstants registration table"
        )

    grouped: dict[str, list[ConstantValue]] = {slug: [] for slug in CONSTANT_GROUPS}
    seen: set[str] = set()
    lines: dict[str, int] = {}
    for match in matches:
        name = match.group("name")
        if name in seen:
            raise DocumentationError(
                f"{CONSTANT_SOURCE.relative_to(PROJECT_ROOT).as_posix()}: duplicate constant '{name}'"
            )
        seen.add(name)
        slug = classify_constant(name)
        grouped[slug].append(ConstantValue(name=name, value=int(match.group("value"), 0)))
        lines.setdefault(slug, text.count("\n", 0, array_match.start("body") + match.start()) + 1)

    if not matches:
        raise DocumentationError(
            f"{CONSTANT_SOURCE.relative_to(PROJECT_ROOT).as_posix()}: kConstants registration table is empty"
        )

    source = CONSTANT_SOURCE.relative_to(PROJECT_ROOT).as_posix()
    groups: list[ConstantGroup] = []
    for slug, (name, description) in CONSTANT_GROUPS.items():
        constants = grouped[slug]
        if not constants:
            raise DocumentationError(f"{source}: constant group '{name}' is empty")
        groups.append(
            ConstantGroup(
                name=name,
                slug=slug,
                description=description,
                constants=constants,
                source=source,
                line=lines[slug],
            )
        )
    return groups


def output_path(block: DocumentationBlock) -> Path:
    kind = "functions" if block.kind == "func" else "events"
    return REFERENCE_ROOT / kind / slugify(block.category) / f"{block.name}.md"


def render(blocks: list[DocumentationBlock], constant_groups: list[ConstantGroup]) -> dict[Path, str]:
    environment = Environment(
        loader=FileSystemLoader(str(TEMPLATES_ROOT)),
        undefined=StrictUndefined,
        autoescape=False,
        trim_blocks=True,
        lstrip_blocks=True,
        keep_trailing_newline=True,
    )
    templates = {
        "func": environment.get_template("function.md"),
        "event": environment.get_template("event.md"),
    }
    constant_template = environment.get_template("constants.md")
    rendered: dict[Path, str] = {}
    for block in blocks:
        content = templates[block.kind].render(**asdict(block)).rstrip() + "\n"
        rendered[output_path(block)] = content
    for group in constant_groups:
        content = constant_template.render(**asdict(group)).rstrip() + "\n"
        rendered[REFERENCE_ROOT / "constants" / f"{group.slug}.md"] = content

    api = {
        "format": 2,
        "functions": [asdict(block) for block in blocks if block.kind == "func"],
        "events": [asdict(block) for block in blocks if block.kind == "event"],
        "constants": [asdict(group) for group in constant_groups],
    }
    rendered[DOCS_ROOT / "api.json"] = json.dumps(api, indent=2, ensure_ascii=False) + "\n"
    return rendered


def generated_files() -> set[Path]:
    files: set[Path] = set()
    for directory in GENERATED_DIRECTORIES:
        root = REFERENCE_ROOT / directory
        if root.is_dir():
            files.update(path for path in root.rglob("*") if path.is_file())
    api = DOCS_ROOT / "api.json"
    if api.is_file():
        files.add(api)
    return files


def check(rendered: dict[Path, str]) -> bool:
    # pathlib follows the host filesystem's case rules. On Windows that made
    # getDistance2D.md compare equal to getDistance2d.md, while the Linux CI
    # runner correctly reported one stale and one missing file. Compare the
    # portable documentation paths as case-sensitive strings instead.
    expected = {path.relative_to(DOCS_ROOT).as_posix(): path for path in rendered}
    existing = {path.relative_to(DOCS_ROOT).as_posix(): path for path in generated_files()}
    stale = sorted(existing.keys() - expected.keys())
    missing = sorted(expected.keys() - existing.keys())
    changed = sorted(
        relative
        for relative in expected.keys() & existing.keys()
        if existing[relative].read_text(encoding="utf-8") != rendered[expected[relative]]
    )
    if stale or missing or changed:
        for label, paths in (("stale", stale), ("missing", missing), ("changed", changed)):
            for path in paths:
                print(f"{label}: {path}", file=sys.stderr)
        return False
    return True


def write(rendered: dict[Path, str]) -> None:
    REFERENCE_ROOT.mkdir(parents=True, exist_ok=True)
    for directory in GENERATED_DIRECTORIES:
        path = REFERENCE_ROOT / directory
        if path.exists():
            shutil.rmtree(path)
    for path, content in rendered.items():
        path.parent.mkdir(parents=True, exist_ok=True)
        path.write_text(content, encoding="utf-8", newline="\n")


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--check", action="store_true", help="Check generated files without changing them")
    args = parser.parse_args()
    try:
        blocks = scan()
        constant_groups = scan_constants()
        rendered = render(blocks, constant_groups)
        constant_count = sum(len(group.constants) for group in constant_groups)
        if args.check:
            if not check(rendered):
                print("Generated scripting documentation is stale.", file=sys.stderr)
                return 1
            print(
                f"Documentation is current: {len(blocks)} blocks and "
                f"{constant_count} constants in {len(constant_groups)} groups."
            )
            return 0
        write(rendered)
        function_count = sum(block.kind == "func" for block in blocks)
        event_count = sum(block.kind == "event" for block in blocks)
        print(
            f"Generated {function_count} functions and {event_count} events from {len(blocks)} g1odoc blocks, "
            f"plus {constant_count} constants in {len(constant_groups)} groups."
        )
        return 0
    except (DocumentationError, OSError, ValueError) as error:
        print(f"ERROR: {error}", file=sys.stderr)
        return 2


if __name__ == "__main__":
    raise SystemExit(main())
