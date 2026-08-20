target("gothic_api")
    set_kind("static")
    set_default(false)

    add_files("ZenGin/zGothicAPI.cpp")
    add_includedirs(".", "ZenGin/Gothic_UserAPI", {public = true})
    add_linkdirs("ZenGin", {public = true})
    add_links("Shw32", {public = true})
    add_defines("__G1", {public = true})

