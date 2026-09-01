#include "PCH.h"

CRPCInternet::CRPCInternet()
    : m_CheckingServer(false)
{
}

void CRPCInternet::handlePacket(RakNet::Packet *packet)
{
    switch (packet->data[0])
    {
    case ID_CONNECTION_ATTEMPT_FAILED:
        connectionFailed(packet);
        break;

    case ID_CONNECTION_REQUEST_ACCEPTED:
        connectionRequest(packet);
        break;

    case ID_DISCONNECTION_NOTIFICATION:
    case ID_CONNECTION_LOST:
        disconnected(packet);
        break;

    case ID_UNCONNECTED_PONG:
        serverReached(packet);
        break;

    case GO_LAUNCHER:
        serverInformation(packet);
        break;
    }
}

void CRPCInternet::connectionFailed(RakNet::Packet *packet)
{
    Q_UNUSED(packet)
    finishGettingInformation();
}

void CRPCInternet::connectionRequest(RakNet::Packet *packet)
{
    RakNet::BitStream request;
    request.Write(RAKMSG(GO_LAUNCHER));
    NETWORK.m_ptrPeer->Send(&request, HIGH_PRIORITY, RELIABLE, 0, packet->systemAddress, false);
}

void CRPCInternet::disconnected(RakNet::Packet *packet)
{
    Q_UNUSED(packet)
    finishGettingInformation();
}

void CRPCInternet::serverReached(RakNet::Packet *packet)
{
    RakNet::TimeMS time;

    RakNet::BitStream bsIn(packet->data, packet->length, false);
    bsIn.IgnoreBytes(1);
    bsIn.Read(time);

    const QString ipAddress = packet->systemAddress.ToString(false);
    const int port = packet->systemAddress.GetPort();
    emit signalServerPing(ipAddress, port, RakNet::GetTime() - time);

    m_ServerQueue.enqueue({ipAddress, port});
    getInformation();
}

void CRPCInternet::serverInformation(RakNet::Packet *packet)
{
    RakNet::RakString hostName, script, version, world, description, maxPlayers;
    uint onlinePlayers = 0;

    RakNet::BitStream response(packet->data, packet->length, false);
    response.IgnoreBytes(RAKMSG_SIZE);
    response.Read(hostName);
    response.Read(onlinePlayers);
    response.Read(maxPlayers);
    response.Read(description);
    response.Read(script);
    response.Read(version);
    response.Read(world);

    const QString ipAddress = packet->systemAddress.ToString(false);
    const QString port = TOSTRING(packet->systemAddress.GetPort());
    const int ping = NETWORK.m_ptrPeer->GetLastPing(packet->systemAddress);

    emit signalServerInformation(ipAddress, port, QString(hostName.C_String()), QString(script.C_String()),
                                 QString(version.C_String()), QString(world.C_String()), QString(description.C_String()),
                                 onlinePlayers, QString(maxPlayers.C_String()).toInt(), ping);

    NETWORK.m_ptrPeer->CloseConnection(packet->systemAddress, true);
}

void CRPCInternet::getInformation()
{
    if (m_CheckingServer || m_ServerQueue.isEmpty())
        return;

    m_CheckingServer = true;
    const Server server = m_ServerQueue.dequeue();
    const RakNet::ConnectionAttemptResult result = NETWORK.m_ptrPeer->Connect(
        server.ipAddress.toStdString().c_str(), server.port,
        NETWORK.m_ServerPassword.c_str(), NETWORK.m_ServerPassword.length());
    if (result != RakNet::CONNECTION_ATTEMPT_STARTED)
    {
        m_CheckingServer = false;
        getInformation();
    }
}

void CRPCInternet::finishGettingInformation()
{
    m_CheckingServer = false;
    getInformation();
}
