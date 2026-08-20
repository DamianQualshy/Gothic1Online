import re
from pathlib import Path
from collections import defaultdict

# -----------------------------
# PRETTY PRINT FUNCTIONS
# -----------------------------

def print_info(msg):  print(f"\033[96mInfo: {msg}\033[0m")
def print_ok(msg):    print(f"\033[92mOK: {msg}\033[0m")
def print_warn(msg):  print(f"\033[93mWarning: {msg}\033[0m")
def print_err(msg):   print(f"\033[91mError: {msg}\033[0m")


# -----------------------------
#  CLASS RANGE EXTRACTION
# -----------------------------

CLASS_HEADER_RE = re.compile(
    r'(template\s*<[^>]*>\s*)?\b(class|struct)\s+([A-Za-z_][A-Za-z0-9_]*)'
)

def extract_class_ranges(text: str):
    classes = []

    # Precompute line start offsets
    line_starts = []
    offset = 0
    for line in text.splitlines(True):
        line_starts.append(offset)
        offset += len(line)

    def offset_to_line(off: int) -> int:
        for i in range(len(line_starts)-1):
            if line_starts[i] <= off < line_starts[i+1]:
                return i + 1
        return len(line_starts)

    def scan(start, end, parent=None):
        pos = start
        while True:
            m = CLASS_HEADER_RE.search(text, pos, end)
            if not m:
                break

            is_template = m.group(1) is not None

            name = m.group(3)
            full_name = name if parent is None else f"{parent}::{name}"

            # find opening brace
            brace_start = text.find("{", m.end(), end)
            if brace_start == -1:
                pos = m.end()
                continue

            # find matching closing brace
            depth = 1
            i = brace_start + 1
            while i < end and depth > 0:
                if text[i] == "{":
                    depth += 1
                elif text[i] == "}":
                    depth -= 1
                i += 1

            if depth != 0:
                pos = m.end()
                continue

            begin_line = offset_to_line(m.start())
            end_line   = offset_to_line(i-1)

            classes.append({
                "template": is_template,
                "name": full_name,
                "begin": begin_line,
                "end": end_line
            })

            # recursively scan inside the class body
            scan(brace_start + 1, i - 1, full_name)

            pos = i

    scan(0, len(text))
    return classes, line_starts

# -----------------------------
#  METHOD EXTRACTION
# -----------------------------

METHOD_RE = re.compile(
    r'(?m)^\s*'
    r'(?P<prefix>(?:virtual|static|inline)\s+)*'
    r'(?P<ret>[A-Za-z0-9_:*&<>\s]+?)\s*'
    r'(?P<cc>__thiscall|__cdecl|__stdcall|__fastcall|__vectorcall)?\s*'
    r'(?P<name>[A-Za-z_][A-Za-z0-9_]*)\s*'
    r'\((?P<args>(?:[^()]|\([^()]*\))*)\)\s*'
    r'(?P<cvref>(?:const|volatile|noexcept|\s)*)'
    r'\s*zCall\s*\(\s*(?P<addr>0x[0-9A-Fa-f]+)\s*\)'
)

ARG_DEFAULT_RE = re.compile(r'=\s*([^,)\n]+)')

def clean_args(args: str) -> str:
    # remove default values
    args = ARG_DEFAULT_RE.sub("", args)

    # normalize whitespace
    args = re.sub(r'\s+', ' ', args).strip()

    # fix trailing commas or spaces
    args = re.sub(r',\s*,', ',', args)
    args = re.sub(r'\(\s*,', '(', args)
    args = re.sub(r',\s*\)', ')', args)

    return args

def clean_ret(ret: str) -> str:
    parts = ret.split()
    return " ".join(
        p for p in parts
        if p not in ("virtual", "static", "inline")
    )

def extract_methods(text: str, line_starts):
    methods = []

    def offset_to_line(off: int) -> int:
        for i in range(len(line_starts)-1):
            if line_starts[i] <= off < line_starts[i+1]:
                return i + 1
        return len(line_starts)

    for m in METHOD_RE.finditer(text):
        name = m.group("name")
        if name == "int" or name == "CSparseArrayIterator":
            continue  # skip unwanted matches (hack)

        line = offset_to_line(m.start())

        methods.append({
            "is_static": "static" in (m.group("prefix") or ""),
            "name": name,
            "ret": clean_ret(m.group("ret")),
            "cc": (m.group("cc") or "").strip(),
            "args": clean_args(m.group("args")),
            "cvref": m.group("cvref").strip(),
            "addr": m.group("addr"),
            "line": line,
        })

    return methods


# -----------------------------
#  MAP METHODS → CLASSES
# -----------------------------

def assign_methods_to_classes(classes, methods):
    for method in methods:
        for cls in classes:
            if cls["begin"] <= method["line"] <= cls["end"]:
                method["class"] = cls["name"]


# -----------------------------
#  GENERATE MACROS
# -----------------------------

ARG_TYPE_PREFIX_MAP = {
    "TMobMsgSubType": None,
    "oSDamageDescriptor": "oCNpc",
    "TDamageSubType": None,
    "TWeaponSubType": None,
    "TMovementSubType": None,
    "TAttackSubType": None,
    "TUseItemSubType": None,
    "TStateSubType": None,
    "TManipulateSubType": None,
    "TConversationSubType": None,
    "zTCSCam_EvSubType": None,
    "zTEffectParams": None,
    "oTItemListMode": None,
}

def prefix_arg_types(cls: str, args: str) -> str:
    def repl(match):
        token = match.group(0)

        if token in ARG_TYPE_PREFIX_MAP:
            prefix = ARG_TYPE_PREFIX_MAP[token]
            if prefix is None:
                return f"{cls}::{token}"
            
            return f"{prefix}::{token}"

        return token

    # skip already-qualified names (oCMobMsg::X)
    return re.sub(
        r'\b(?!\w+::)[A-Za-z_][A-Za-z0-9_]*\b',
        repl,
        args
    )

def generate_macros(classes, methods):
    free_functions = []
    grouped_methods = defaultdict(list)

    for m in methods:
        if not "class" in m:
            free_functions.append(m)
        else:
            grouped_methods[m["class"]].append(m)

    out = []

    # -----------------------------------------
    # FREE FUNCTION REGISTRATION
    # -----------------------------------------
    if free_functions:
        # overload detection
        counts = {}
        for m in free_functions:
            counts[m["name"]] = counts.get(m["name"], 0) + 1

    for m in free_functions:
        name = m["name"]
        ret  = m["ret"]
        cc   = (m["cc"] + " ") if m["cc"] else ""
        args = m["args"]
        addr = m["addr"]

        overloaded = counts[name] > 1

        if not overloaded:
            out.append(f"\tZENGIN_REGISTER_FUNCTION(&{name}, {addr});")
        else:
            # correct placement of calling convention
            sig = f"{ret}({cc}*)({args})"
            out.append(f"\tZENGIN_REGISTER_FUNCTION_EXPLICIT(&{name}, {sig}, {addr});")

        out.append("")  # blank line

    # -----------------------------------------
    # CLASS METHOD REGISTRATION
    # -----------------------------------------
    for cls in classes:
        if cls["template"]:
            VERBOSE_OUTPUT and print_warn(f"Warning: Skipping template class {cls['name']} at line {cls['begin']}")
            continue  # skip template classes for now

        cname = cls["name"]
        if cname not in grouped_methods:
            continue

        out.append(f"\tZENGIN_REGISTER_CLASS({cname});")

        methods = grouped_methods[cname]

        # overload detection
        counts = {}
        for m in methods:
            counts[m["name"]] = counts.get(m["name"], 0) + 1

        for m in methods:
            if m.get("is_static"):
                VERBOSE_OUTPUT and print_warn(f"Warning: Skipping static method {cname}::{m['name']} at line {m['line']}")
                continue  # skip static methods for now

            name = m["name"]
            ret  = m["ret"]
            cc = (m["cc"] + " ") if m["cc"] else ""
            args = prefix_arg_types(cname, m["args"])
            cv   = m["cvref"]
            addr = m["addr"]

            overloaded = counts[name] > 1

            if not overloaded:
                out.append(f"\tZENGIN_REGISTER_METHOD({cname}, &{cname}::{name}, {addr});")
            else:
                sig = f"{ret}({cc}{cname}::*)({args})"
                if cv:
                    sig += f" {cv}"
                out.append(f"\tZENGIN_REGISTER_METHOD_EXPLICIT({cname}, &{cname}::{name}, {sig}, {addr});")

        out.append("")  # blank line

    return "\n".join(out)

def generate_engine_header(generated_files):
    includes = []
    for fname in sorted(generated_files):
        includes.append(f'#include "{fname}"')

    return "#pragma once\n\n" + "\n".join(includes) + "\n"

# -----------------------------
#  MAIN MULTI-FILE PIPELINE
# -----------------------------

def process_root(root: Path):
    namespace = root.name

    api_dir = root / "API"

    out_dir = root / "Signature"
    out_dir.mkdir(exist_ok=True)

    generated_files = []

    # Generate per-header signature files
    for header in api_dir.glob("*.h"):
        text = header.read_text(encoding="utf8")

        classes, line_starts = extract_class_ranges(text)
        methods = extract_methods(text, line_starts)
        assign_methods_to_classes(classes, methods)

        output = f"namespace {namespace} {{\n\n"
        output += generate_macros(classes, methods)
        output += f"\n}} // namespace {namespace}\n"

        out_file = out_dir / header.name
        out_file.write_text(output, encoding="utf8")

        generated_files.append(header.name)
        VERBOSE_OUTPUT and print_info(f"Generated: {out_file}")

    # Generate zEngine.h
    engine_header = out_dir / "zEngine.h"

    engine_header.write_text(
        generate_engine_header(generated_files),
        encoding="utf8"
    )

    VERBOSE_OUTPUT and print_info(f"Generated: {engine_header}")



# -----------------------------
#  ENTRY POINT
# -----------------------------

# Config variables
VERBOSE_OUTPUT = False

if __name__ == "__main__":
    # Force ANSI color support on Windows 10+ (cmd, powershell)
    import os
    os.system("")


    SUBDIRS = [
        "Gothic_I_Classic",
        "Gothic_I_Addon",
        "Gothic_II_Classic",
        "Gothic_II_Addon",
    ]

    base = Path.cwd()

    for sub in SUBDIRS:
        root = base / sub

        print_info(f"Processing {sub} ...")
        process_root(root)
        print_ok(f"Processing done for {sub}!")
    
    print_ok(f"Generation finished")
