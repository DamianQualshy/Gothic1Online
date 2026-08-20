local launcher_dir = os.scriptdir()

target("G1O.Launcher")
    set_kind("binary")
    set_basename("GO_Launcher")
    set_prefixdir("/", {bindir = "system"})
    set_runtimes("MD")
    add_rules("qt.widgetapp")

    add_files("*.cpp", "RPC/*.cpp", "Style/*.cpp")
    add_files("*.h", "RPC/*.h", "Style/*.h")
    add_files("*.ui", "resource.qrc", "GO_Launcher_resource.rc")
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
    add_includedirs(".", "RakNet")
    add_packages("qt5widgets")
    add_frameworks("QtCore", "QtGui", "QtNetwork", "QtWidgets")
    set_values("qt.deploy.flags",
               "--release",
               "--no-translations",
               "--no-system-d3d-compiler",
               "--no-opengl-sw",
               "--no-compiler-runtime")
    add_defines("_CRT_SECURE_NO_WARNINGS", "NOMINMAX", "_ATL_XP_TARGETING", "D_ATL_XP_TARGETING")
    add_syslinks("ws2_32", "shell32", "advapi32")

    local master_server_list_url = get_config("master_server_list_url")
    if master_server_list_url and #master_server_list_url > 0 then
        master_server_list_url = master_server_list_url:gsub("\\", "\\\\"):gsub("\"", "\\\"")
        add_defines(string.format("G1O_MASTER_SERVER_LIST_URL=\"%s\"", master_server_list_url))
    end

    local launcher_version_url = get_config("launcher_version_url")
    if launcher_version_url and #launcher_version_url > 0 then
        launcher_version_url = launcher_version_url:gsub("\\", "\\\\"):gsub("\"", "\\\"")
        add_defines(string.format("G1O_LAUNCHER_VERSION_URL=\"%s\"", launcher_version_url))
    end

    after_build(function (target)
        import("lib.detect.find_file")

        local qt = assert(target:data("qt"), "Qt SDK information is unavailable")
        local windeployqt = assert(find_file("windeployqt.exe", {qt.bindir_host, qt.bindir}),
                                   "windeployqt.exe was not found in the configured Qt SDK")
        local deploydir = path.join(target:targetdir(), "GO_Launcher")
        local deployfile = path.join(deploydir, path.filename(target:targetfile()))

        if os.isdir(deploydir) then
            os.rm(deploydir)
        end
        os.mkdir(deploydir)
        os.vcp(target:targetfile(), deployfile)
        os.vcp(path.join(launcher_dir, "lang"), deploydir)
        os.vrunv(windeployqt, {
            "--release",
            "--force",
            "--no-translations",
            "--no-system-d3d-compiler",
            "--no-opengl-sw",
            "--dir", deploydir,
            deployfile
        })
    end)

    on_install(function (target)
        local install_to_system_dir = import("install_to_system_dir")
        local system_dir = install_to_system_dir(target)

        os.vcp(path.join(launcher_dir, "lang"), system_dir)
        print("Installed launcher languages → " .. system_dir)
    end)
