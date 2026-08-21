target("G1O.Shared")
    set_kind("static")
    set_default(false)

    add_includedirs(".", {public = true})
    add_includedirs(
        "RakNet",
        "../dependencies/squirrel/include",
        "../dependencies/squirrel/squirrel",
        "../dependencies/squirrel/sqstdlib",
        "../dependencies/sqrat/include",
        {public = true})
    add_packages("lua", "sol2", "nlohmann_json", "minizip", {public = true})

    add_files("RakNet/*.cpp")
    remove_files(
        "RakNet/BitStream_NoTemplate.cpp",
        "RakNet/FileListTransfer_original.cpp",
        "RakNet/RakNetSocket2_360_720.cpp",
        "RakNet/RakNetSocket2_NativeClient.cpp",
        "RakNet/RakNetSocket2_PS3_PS4.cpp",
        "RakNet/RakNetSocket2_PS4.cpp",
        "RakNet/RakNetSocket2_Vita.cpp",
        "RakNet/RakNetSocket2_WindowsStore8.cpp",
        "RakNet/VitaIncludes.cpp",
        "RakNet/PS4Includes.cpp")

    add_files(
        "../dependencies/squirrel/squirrel/*.cpp",
        "../dependencies/squirrel/sqstdlib/*.cpp",
        "Scripting/*.cpp",
        "Resource/*.cpp",
        "TinyThread/tinythread.cpp",
        "tinyxml/*.cpp",
        "hashlib/*.cpp",
        "goMath/goMath.cpp",
        "Utility/utility.cpp")

    add_defines("_CRT_SECURE_NO_WARNINGS")
    add_syslinks("ws2_32", "winmm")
