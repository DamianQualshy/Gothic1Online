target("G1O.Shared")
    set_kind("static")
    set_default(false)

    add_includedirs(".", {public = true})
    add_includedirs(
        "../dependencies/squirrel/include",
        "../dependencies/squirrel/squirrel",
        "../dependencies/squirrel/sqstdlib",
        "../dependencies/sqrat/include",
        {public = true})
    add_packages("gamenetworkingsockets", "libsodium", "lua", "sol2", {public = true})

    add_files(
        "../dependencies/squirrel/squirrel/*.cpp",
        "../dependencies/squirrel/sqstdlib/*.cpp",
        "Crypto/*.cpp",
        "Scripting/*.cpp",
        "TinyThread/tinythread.cpp",
        "tinyxml/*.cpp",
        "goMath/goMath.cpp",
        "Utility/utility.cpp")

    add_defines("_CRT_SECURE_NO_WARNINGS")
    add_syslinks("bcrypt", {public = true})
    add_syslinks("ws2_32", "winmm")
