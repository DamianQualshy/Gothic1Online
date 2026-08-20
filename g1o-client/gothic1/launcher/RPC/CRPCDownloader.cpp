#include "PCH.h"

CRPCDownloader::CRPCDownloader() :
    m_RakTCP(NULL),
    m_SetID(-1),
    m_DownloadDir(0),
    m_DownloadActive(false)
{
}

CRPCDownloader::~CRPCDownloader()
{
    if (m_RakTCP)
    {
        m_RakTCP->DetachPlugin(&m_DirectoryDeltaTransfer);
        m_RakTCP->DetachPlugin(&m_FileListTransfer);
    }
}

//-------------------------------------------------------------------------------------------------------------------------------
//  Public method
//-------------------------------------------------------------------------------------------------------------------------------

void CRPCDownloader::initialize(RakNet::PacketizedTCP &rakTCP)
{
    m_RakTCP = &rakTCP;

    m_DirectoryDeltaTransfer.SetDownloadRequestIncrementalReadInterface(&m_PartTime, 10000);

    m_RakTCP->AttachPlugin(&m_DirectoryDeltaTransfer);
    m_RakTCP->AttachPlugin(&m_FileListTransfer);

    m_DirectoryDeltaTransfer.SetFileListTransferPlugin(&m_FileListTransfer);
}

void CRPCDownloader::cancelDownload(bool unfinished)
{
	m_DownloadActive = false;
    if (unfinished) m_FileListTransfer.CancelReceive(m_SetID);
    m_FileListTransfer.RemoveReceiver(NETWORK.m_serverAdress);
    m_FileListTransfer.ClearCallbacks();

    NETWORK.getFileTransferCallback()->restart(true);
}

bool CRPCDownloader::downloadNextSubDir()
{
    ushort id;

    switch (++m_DownloadDir)
    {
    case 1:
        id = m_DirectoryDeltaTransfer.DownloadFromSubdirectory(UPLOAD_SCRIPT_PATH, DOWNLOAD_SCRIPT_PATH, true, NETWORK.m_serverAdress, NETWORK.getFileTransferCallback(), HIGH_PRIORITY, 0, 0);
        if (id == -1)
		{
			m_DownloadActive = false;
            emit signalConnectionFailed();
			NETWORK.disconnectFromCurrent(true);
		}
        else
            m_SetID = id;

        return true;

    case 2:
        id = m_DirectoryDeltaTransfer.DownloadFromSubdirectory(UPLOAD_FILE_PATH, DOWNLOAD_FILE_PATH, true, NETWORK.m_serverAdress, NETWORK.getFileTransferCallback(), HIGH_PRIORITY, 0, 0);
        if (id == -1)
		{
			m_DownloadActive = false;
            emit signalConnectionFailed();
			NETWORK.disconnectFromCurrent(true);
		}
        else
            m_SetID = id;

        return true;

    default:
		m_DownloadActive = false;
        return false;
    }
}

void CRPCDownloader::handle()
{
    RakNet::SystemAddress systemAdress;

    if ((systemAdress = NETWORK.m_RakTCP.HasFailedConnectionAttempt()) != RakNet::UNASSIGNED_SYSTEM_ADDRESS)
        connectionFailed(systemAdress);
    else if ((systemAdress = NETWORK.m_RakTCP.HasCompletedConnectionAttempt()) != RakNet::UNASSIGNED_SYSTEM_ADDRESS)
        connectionRequest(systemAdress);
    else if ((systemAdress = NETWORK.m_RakTCP.HasLostConnection()) != RakNet::UNASSIGNED_SYSTEM_ADDRESS)
        disconnected(systemAdress);
}

void CRPCDownloader::connectionFailed(RakNet::SystemAddress systemAdress)
{
    Q_UNUSED(systemAdress)
	m_DownloadActive = false;
    emit signalConnectionFailed();
}

void CRPCDownloader::connectionRequest(RakNet::SystemAddress systemAdress)
{
    emit signalCheckingFiles();

    NETWORK.m_serverAdress = systemAdress;
    m_DownloadDir = 0;
	m_DownloadActive = true;
    NETWORK.getFileTransferCallback()->restart();

    if (!downloadNextSubDir())
    {
        cancelDownload(false);
        NETWORK.m_RakTCP.CloseConnection(systemAdress);
    }
}

void CRPCDownloader::disconnected(RakNet::SystemAddress systemAdress)
{
    Q_UNUSED(systemAdress)
	if (m_DownloadActive)
	{
		m_DownloadActive = false;
		emit signalConnectionFailed();
	}
}

