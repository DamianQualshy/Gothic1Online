includes("lib")
includes("launcher")

target("G1O.Client")
    set_kind("shared")
    set_basename("GO")

    add_files("src/**.cpp")
    add_files("src/resource.rc")

    add_includedirs("src")
    add_deps("G1O.Shared", "gothic_api")
    add_defines("WIN32_LEAN_AND_MEAN", "NOMINMAX", "_CRT_SECURE_NO_WARNINGS")
    add_syslinks("user32", "gdi32", "shell32", "ws2_32", "winmm", "advapi32")

    on_install(function (target)
        local install_to_system_dir = import("install_to_system_dir")
        install_to_system_dir(target)

        local multiplayer_dir = path.join(target:installdir(), "Multiplayer")
        local config_file = path.join(multiplayer_dir, "GO_Config.client.xml")
        os.mkdir(multiplayer_dir)
        if not os.isfile(config_file) then
            os.vcp(path.join(target:scriptdir(), "launcher", "GO_Client.config.xml"), config_file)
        end
    end)
