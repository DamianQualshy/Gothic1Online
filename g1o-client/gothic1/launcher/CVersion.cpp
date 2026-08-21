#include "PCH.h"

#include <QDir>
#include <QFileInfo>
#include <QRegExp>

CVersion::CVersion()
    : m_VersionUrl(G1O_LAUNCHER_VERSION_URL),
      m_Showed(false)
{
#ifdef DEBUG_MODE
    LOG(__FUNCTION__)
#endif
}

bool CVersion::isValidClientVersion(const QString &version)
{
    // Server-provided values become file names. Keep the accepted syntax
    // deliberately narrow so a master-list entry cannot escape versions/.
    QRegExp pattern("^[0-9]+\\.[0-9]+\\.[0-9]+$");
    return pattern.exactMatch(version);
}

QString CVersion::expectedClientDllPath(const QString &version)
{
    if (!isValidClientVersion(version))
        return QString();

    return QDir::cleanPath(QDir(CLIENT_VERSIONS_PATH).filePath(version + ".dll"));
}

QString CVersion::findClientDll(const QString &version)
{
    const QString versionedPath = expectedClientDllPath(version);
    if (QFileInfo(versionedPath).isFile())
        return versionedPath;

    return QString();
}

//-------------------------------------------------------------------------------------------------------------------------------
//  Public method
//-------------------------------------------------------------------------------------------------------------------------------

void CVersion::checkUpdates()
{
    LAUNCHER.getNetwork().downloadFileFromUrl(m_VersionUrl, FILE_URL_VERSION);
}

void CVersion::updateVersionInfo(QString version)
{
    m_VersionInfo = version.split(QRegExp("[\r\n]"), QString::SkipEmptyParts);

    if (m_Showed)
        checkVersion();
}

//-------------------------------------------------------------------------------------------------------------------------------
//  Public slots
//-------------------------------------------------------------------------------------------------------------------------------

void CVersion::checkVersion()
{
    if (m_VersionInfo.size() > 0)
    {
        // id 0 = version | id 1 = link | id 2 = author's message
        if (LAUNCHER.getVersion() != m_VersionInfo.at(0))
        {
            QString message = TRANSLATE("V_NEW_AVAILABLE").arg(m_VersionInfo.at(0)).arg(m_VersionInfo.at(1));

            if (m_VersionInfo.size() > 2)
                message.append("<br><br>" + TRANSLATE("V_INFORMATION") + "<br>" + m_VersionInfo.at(2));

            CMessageBox::warrning(APP_NAME, message);
        }
    }
    else
        m_Showed = true;
}
