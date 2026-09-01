#include "PCH.h"

CUrlDownloader::CUrlDownloader(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CUrlDownloader)
{
#ifdef DEBUG_MODE
    SPDLOG_TRACE("{}", __FUNCTION__);
#endif
    ui->setupUi(this);

    connect(&m_NetworkManager, SIGNAL(finished(QNetworkReply*)),
            this, SLOT(onDownloadFinished(QNetworkReply*)));
}

CUrlDownloader::~CUrlDownloader()
{
#ifdef DEBUG_MODE
    SPDLOG_TRACE("{}", __FUNCTION__);
#endif
    delete ui;
}

void CUrlDownloader::downloadFile(const QString& url, int requestIndex)
{
    QNetworkRequest networkRequest{QUrl(url)};
    networkRequest.setAttribute(QNetworkRequest::RedirectPolicyAttribute,
                                QNetworkRequest::NoLessSafeRedirectPolicy);
    networkRequest.setAttribute(QNetworkRequest::CacheLoadControlAttribute,
                                QNetworkRequest::AlwaysNetwork);
    QNetworkReply* reply = m_NetworkManager.get(networkRequest);
    reply->setProperty("g1o_request_index", requestIndex);
}

void CUrlDownloader::onDownloadFinished(QNetworkReply *data)
{
    const int requestIndex = data->property("g1o_request_index").toInt();
    if (data->error() != QNetworkReply::NoError)
    {
        SPDLOG_ERROR("HTTP request to {} failed: {}",
                     data->url().toString().toStdString(), data->errorString().toStdString());
        emit signalError(requestIndex);
    }
    else
        emit signalDownloadCompleteCache(QString::fromUtf8(data->readAll()), requestIndex);

    data->deleteLater();
}
