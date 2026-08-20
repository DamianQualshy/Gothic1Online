-- MIT License
-- Copyright (c) 2025 Gothic Multiplayer Team
-- Adapted for Gothic 1 Online from GMPC's install_to_system_dir module.

local function find_system_dir(root)
    local lower = path.join(root, "system")
    local upper = path.join(root, "System")

    if os.isdir(lower) then
        return lower
    end
    if os.isdir(upper) then
        return upper
    end

    os.mkdir(lower)
    return lower
end

function main(target)
    if not is_plat("windows") then
        return
    end

    local targetfile = target:targetfile()
    local installdir = target:installdir()
    if not targetfile or not os.isfile(targetfile) or not installdir then
        return
    end

    local system_dir = find_system_dir(installdir)
    os.vcp(targetfile, system_dir)
    print("Installed " .. path.filename(targetfile) .. " → " .. system_dir)

    local pdb = path.join(path.directory(targetfile), path.basename(targetfile) .. ".pdb")
    if os.isfile(pdb) then
        os.vcp(pdb, system_dir)
        print("Installed " .. path.filename(pdb) .. " → " .. system_dir)
    end

    return system_dir
end
