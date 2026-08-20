#ifndef CRPCDOWNLOADER_H
#define CRPCDOWNLOADER_H

#include <QObject>

#include <DirectoryDeltaTransfer.h>
#include <FileListTransfer.h>
#include <IncrementalReadInterface.h>
#include <PacketizedTCP.h>

#include "RakNetInclude.h"
#include "CFileTransferCallback.h"

class CRPCDownloader : public QObject
{
    Q_OBJECT

signals:
    void signalConnectionFailed();
    void signalCheckingFiles();

public:
    CRPCDownloader();
    ~CRPCDownloader();

    void initialize(RakNet::PacketizedTCP &rakTCP);
    void cancelDownload(bool unfinished);
    bool downloadNextSubDir();
    void handle();

    // RakNet messages
    void connectionFailed(RakNet::SystemAddress systemAdress);
    void connectionRequest(RakNet::SystemAddress systemAdress);
    void disconnected(RakNet::SystemAddress systemAdress);

private:
    RakNet::DirectoryDeltaTransfer m_DirectoryDeltaTransfer;
    RakNet::FileListTransfer m_FileListTransfer;
    RakNet::IncrementalReadInterface m_PartTime;
    RakNet::PacketizedTCP *m_RakTCP;
    RakNet::SystemAddress m_ServerAdress;
    ushort m_SetID, m_DownloadDir;
    bool m_DownloadActive;
};

#endif // CRPCDOWNLOADER_H
