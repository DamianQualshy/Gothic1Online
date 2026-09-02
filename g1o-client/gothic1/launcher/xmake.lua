local launcher_dir = os.scriptdir()

target("G1O.Launcher")
    set_kind("binary")
    set_basename("GO_Launcher")
    set_runtimes("MT")
    set_prefixdir("/", {bindir = "Multiplayer/Launcher"})
    add_rules("qt.widgetapp")

    add_files("*.cpp", "RPC/*.cpp", "Style/*.cpp")
    add_files("*.h", "RPC/*.h", "Style/*.h")
    add_files("*.ui", "resource.qrc", "GO_Launcher_resource.rc")
    add_includedirs(".", "../../../Shared")
    add_packages("nlohmann_json", "qt5widgets", "gamenetworkingsockets")
    add_packages("fmt", "spdlog", {cxxflags = {}})
    add_frameworks("QtCore", "QtGui", "QtNetwork", "QtWidgets")
    set_values("qt.deploy.flags",
               "--release",
               "--no-translations",
               "--no-system-d3d-compiler",
               "--no-opengl-sw",
               "--no-compiler-runtime")
    add_defines(
        "_CRT_SECURE_NO_WARNINGS",
        "NOMINMAX",
        "SPDLOG_FMT_EXTERNAL",
        "SPDLOG_ACTIVE_LEVEL=SPDLOG_LEVEL_TRACE")
    add_syslinks("ws2_32", "shell32", "advapi32")

    local master_server_endpoint = get_config("master_server_endpoint")
    if master_server_endpoint and #master_server_endpoint > 0 then
        master_server_endpoint = master_server_endpoint:gsub("\\", "\\\\"):gsub("\"", "\\\"")
        add_defines(string.format("MASTER_SERVER_ENDPOINT=\"%s\"", master_server_endpoint))
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
        local launcher_install_dir = path.join(target:installdir(), "Multiplayer", "Launcher")
        local deploydir = path.join(target:targetdir(), "GO_Launcher")
        os.mkdir(launcher_install_dir)

        if os.isdir(deploydir) then
            os.cp(path.join(deploydir, "*"), launcher_install_dir)
        else
            os.cp(target:targetfile(), launcher_install_dir)
            os.cp(path.join(launcher_dir, "lang"), launcher_install_dir)
        end

        local pdb = path.join(path.directory(target:targetfile()), path.basename(target:targetfile()) .. ".pdb")
        if os.isfile(pdb) then
            os.cp(pdb, launcher_install_dir)
        end

        print("Installed launcher runtime → " .. launcher_install_dir)
    end)
