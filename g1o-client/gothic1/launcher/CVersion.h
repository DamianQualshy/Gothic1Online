#ifndef CVERSION_H
#define CVERSION_H

#include <QObject>
#include <QStringList>

class CVersion : public QObject
{

    Q_OBJECT

public:
    CVersion();

    static bool isValidClientVersion(const QString &version);
    static QString expectedClientDllPath(const QString &version);
    static QString findClientDll(const QString &version);

    void checkUpdates();
    void updateVersionInfo(QString version);

public slots:
    void checkVersion();

private:
    QString m_VersionUrl;
    QStringList m_VersionInfo;
    bool m_Showed;
};

#endif // CVERSION_H
