target("G1O.Server")
    set_kind("binary")
    set_basename("GO_Server")
    set_prefixdir("g1o-server", {bindir = "."})
    add_files("**.cpp")
    add_includedirs(".")
    add_deps("G1O.Shared")
    add_defines("_CONSOLE", "_CRT_SECURE_NO_WARNINGS")
    add_syslinks("ws2_32", "winmm")

    on_install(function (target)
        local source_dir = target:scriptdir()
        local server_dir = target:bindir()

        local function copy_if_missing(source_file, destination_file)
            if not os.isfile(destination_file) then
                os.mkdir(path.directory(destination_file))
                os.vcp(source_file, destination_file)
            end
        end

        os.mkdir(server_dir)
        os.vcp(target:targetfile(), server_dir)
        os.vcp(path.join(source_dir, "ReadMe.txt"), server_dir)

        copy_if_missing(path.join(source_dir, "GO_Config.server.xml"),
                        path.join(server_dir, "GO_Config.server.xml"))

        for _, script_type in ipairs({"server-scripts", "client-scripts"}) do
            local source_scripts = path.join(source_dir, "resources", script_type)
            local destination_scripts = path.join(server_dir, script_type)
            os.mkdir(destination_scripts)
            for _, script_file in ipairs(os.files(path.join(source_scripts, "*.gm"))) do
                copy_if_missing(script_file, path.join(destination_scripts, path.filename(script_file)))
            end
        end

        os.mkdir(path.join(server_dir, "download"))
    end)

    local master_server_address = get_config("master_server_address")
    if master_server_address and #master_server_address > 0 then
        master_server_address = master_server_address:gsub("\\", "\\\\"):gsub("\"", "\\\"")
        add_defines(string.format("G1O_MASTER_SERVER_ADDRESS=\"%s\"", master_server_address))
    end

    local master_server_port = tonumber(get_config("master_server_port") or "1200") or 1200
    if master_server_port < 1 or master_server_port > 65535 or master_server_port % 1 ~= 0 then
        master_server_port = 1200
    end
    add_defines(string.format("G1O_MASTER_SERVER_PORT=%d", master_server_port))
