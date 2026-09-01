#ifndef CURLDOWNLOADER_H
#define CURLDOWNLOADER_H

#include <QWidget>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QTime>

/*
 *  NOTE!
 *  This class isn't finished yet, but for now is enought.
 */

namespace Ui {
    class CUrlDownloader;
}

class CUrlDownloader : public QWidget
{
    Q_OBJECT

signals:
    void signalDownloadCompleteCache(QString cache, int requestIndex);
    void signalError(int requestIndex);

public:
    explicit CUrlDownloader(QWidget *parent = 0);
    ~CUrlDownloader();

    void downloadFile(const QString& url, int requestIndex);

private:
    Ui::CUrlDownloader *ui;

    QNetworkAccessManager m_NetworkManager;

private slots:
    void onDownloadFinished(QNetworkReply *data);
};

#endif // CURLDOWNLOADER_H
