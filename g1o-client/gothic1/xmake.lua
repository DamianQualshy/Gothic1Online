includes("lib")
includes("launcher")

target("G1O.Client")
    set_kind("shared")
    set_basename("GO")

    add_files("src/**.cpp")
    add_files("src/resource.rc")

    add_includedirs("src")
    add_deps("G1O.Shared", "gothic_api")
    add_packages("asmjit", "fmt", "nlohmann_json", "polyhook2", "spdlog")
    add_defines(
        "WIN32_LEAN_AND_MEAN",
        "NOMINMAX",
        "_CRT_SECURE_NO_WARNINGS",
        "SPDLOG_FMT_EXTERNAL",
        "SPDLOG_ACTIVE_LEVEL=SPDLOG_LEVEL_TRACE")
    add_syslinks("user32", "gdi32", "shell32", "ws2_32", "winmm", "advapi32")

    on_install(function (target)
        local multiplayer_dir = path.join(target:installdir(), "Multiplayer")
        local versions_dir = path.join(multiplayer_dir, "versions")
        os.mkdir(multiplayer_dir)
        os.mkdir(versions_dir)

        local resources_dir = path.join(target:scriptdir(), "resources", "Multiplayer")
        for _, resource_file in ipairs(os.files(path.join(resources_dir, "*"))) do
            local destination_file = path.join(multiplayer_dir, path.filename(resource_file))
            local legacy_config = path.join(multiplayer_dir, "G1O_Config.xml")
            if path.filename(resource_file) ~= "G1O_Config.json" or
               (not os.isfile(destination_file) and not os.isfile(legacy_config)) then
                os.cp(resource_file, destination_file)
            end
        end
        for _, resource_directory in ipairs(os.dirs(path.join(resources_dir, "*"))) do
            os.cp(resource_directory, multiplayer_dir)
        end
        print("Installed client resources → " .. multiplayer_dir)

        local client_version = tostring(target:version())
        local versioned_dll = path.join(versions_dir, client_version .. ".dll")
        os.vcp(target:targetfile(), versioned_dll)
        print("Installed " .. path.filename(target:targetfile()) .. " → " .. versioned_dll)

        local pdb = path.join(path.directory(target:targetfile()), path.basename(target:targetfile()) .. ".pdb")
        if os.isfile(pdb) then
            os.vcp(pdb, path.join(versions_dir, client_version .. ".pdb"))
        end

    end)
