#include "PCH.h"

void CRPCInternet::serverReached(const QString& ipAddress, int port, int ping)
{
    emit signalServerPing(ipAddress, port, ping);
}

void CRPCInternet::serverInformation(const QString& ipAddress, int port, int ping, PacketReader& packet)
{
    std::string hostName;
    std::string description;
    std::string version;
    std::string world;
    std::uint32_t onlinePlayers = 0;
    std::uint32_t maxPlayers = 0;
    if (!packet.Read(hostName, 256) || !packet.Read(onlinePlayers) || !packet.Read(maxPlayers) ||
        !packet.Read(description, 4096) || !packet.Read(version, 64) || !packet.Read(world, 1024) || !packet.Empty())
        return;

    emit signalServerInformation(ipAddress, QString::number(port), QString::fromUtf8(hostName.c_str()), {},
                                 QString::fromUtf8(version.c_str()), QString::fromUtf8(world.c_str()),
                                 QString::fromUtf8(description.c_str()), static_cast<int>(onlinePlayers),
                                 static_cast<int>(maxPlayers), ping);
}
