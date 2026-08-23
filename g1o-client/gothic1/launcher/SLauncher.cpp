#include <QFile>
#include <QTimer>
#include <QMessageBox>
#include <QSplashScreen>

#include "PCH.h"

#pragma comment(lib, "Advapi32.lib")

SLauncher::SLauncher(QWidget *parent) :
    CCustomWindow(QString(":/img/go_background.png"), parent),
    m_SplashScreen(QPixmap(":/img/go_splash.png")),
    m_AddonWidget(new CAddons),
    m_OptionWidget(new COptions),
    m_VersionName(VERSION_NAME),
    m_VersionLabel(this),
    ui(new Ui::SLauncher)
{
#ifdef DEBUG_MODE
    SPDLOG_TRACE("{}", __FUNCTION__);
#endif

    SPDLOG_INFO("Opening Launcher");

    initWidgets();
    initConnections();
    initMetaType();
}

SLauncher::~SLauncher()
{
#ifdef DEBUG_MODE
    SPDLOG_TRACE("{}", __FUNCTION__);
#endif

    SPDLOG_INFO("Closing Launcher");

    // Save setting
    m_Settings.saveLauncherSettings();

    CMessageBox::clearData();

    delete m_ServerInternet;
    delete m_ServerFavorite;
    delete m_AddonWidget;
    delete m_OptionWidget;

    delete ui;

    SPDLOG_INFO("Allocated memory has been removed");
}

//-------------------------------------------------------------------------------------------------------------------------------
//  Public method
//-------------------------------------------------------------------------------------------------------------------------------

SLauncher& SLauncher::getInstance()
{
    static SLauncher instance;
    return instance;
}

void SLauncher::init()
{
    // Enable debug privileges (injection on some systems)
    HANDLE hToken = NULL;
    if (OpenProcessToken(GetCurrentProcess(), TOKEN_ADJUST_PRIVILEGES | TOKEN_QUERY, &hToken))
    {
        LUID sedebugnameValue;
        if (LookupPrivilegeValue(NULL, SE_DEBUG_NAME, &sedebugnameValue))
        {
            TOKEN_PRIVILEGES tkp = {};
            tkp.PrivilegeCount = 1;
            tkp.Privileges[0].Luid = sedebugnameValue;
            tkp.Privileges[0].Attributes = SE_PRIVILEGE_ENABLED;
            AdjustTokenPrivileges(hToken, FALSE, &tkp, sizeof(tkp), NULL, NULL);
        }
        CloseHandle(hToken);
    }

    // Check update
    m_Version.checkUpdates();

    // Splash screen
    m_SplashScreen.show();

    QTimer::singleShot(2000, &m_SplashScreen, SLOT(close()));
    QTimer::singleShot(2000, this, SLOT(show()));
    QTimer::singleShot(2000, &m_Version, SLOT(checkVersion()));

    // Init data
    m_ServerInternet = new CServerManager(ui->treeInternet);
    m_ServerFavorite = new CServerManager(ui->treeFavorite);

    m_Settings.loadLauncherSettings();
    m_FavoriteManager.loadFavoriteList();

    m_Language.init();
    translate();

    loadCSS(":/go.css");

    onRefresh();
}

void SLauncher::setStatus(const QString status) const
{
    ui->labelStatus->setText(status);
}

QString SLauncher::getVersion()
{
    return m_VersionName;
}

void SLauncher::enable()
{
    ui->buttonRefresh->setEnabled(true);
    ui->gboxInfo->setEnabled(true);
    ui->tabServerList->setEnabled(true);
}

void SLauncher::disable()
{
    ui->buttonRefresh->setEnabled(false);
    ui->gboxInfo->setEnabled(false);
    ui->tabServerList->setEnabled(false);
}

void SLauncher::translate()
{
    SPDLOG_INFO("Translate to {}", m_Language.getCurrentLang().toStdString().c_str());

    ui->tabServerList->setTabText(0, TRANSLATE("L_INTERNET"));
    ui->tabServerList->setTabText(1, TRANSLATE("L_FAVORITE"));

    ui->buttonAddons->setText(TRANSLATE("L_ADDONS"));
    ui->buttonOptions->setText(TRANSLATE("L_OPTIONS"));
    ui->buttonRefresh->setText(TRANSLATE("L_REFRESH"));

    ui->labelNickname->setText(TRANSLATE("L_NICKNAME"));
    ui->gboxInfo->setTitle(TRANSLATE("L_INFORMATION"));

    ui->buttonAdd->setText(TRANSLATE("F_ADD"));
    ui->buttonEdit->setText(TRANSLATE("F_EDIT"));
    ui->buttonRemove->setText(TRANSLATE("F_REMOVE"));

    ui->treeInternet->setHeaderLabels(QStringList() << TRANSLATE("L_HOSTNAME") << TRANSLATE("L_IP") << TRANSLATE("L_PORT") << TRANSLATE("L_VERSION") << TRANSLATE("L_PLAYERS") << TRANSLATE("L_PING"));
    ui->treeFavorite->setHeaderLabels(QStringList() << TRANSLATE("L_HOSTNAME") << TRANSLATE("L_IP") << TRANSLATE("L_PORT") << TRANSLATE("L_VERSION") << TRANSLATE("L_PLAYERS") << TRANSLATE("L_PING"));

    setStatus(TRANSLATE("SB_READY"));

    // Other
    m_AddonWidget->translate();
    m_OptionWidget->translate();

    m_FavoriteManager.translate();
    m_InternetManager.translate();

    CServerManager::fillServerInfo();

    SPDLOG_INFO("Translate DONE");
}

//-------------------------------------------------------------------------------------------------------------------------------
//  Private method
//-------------------------------------------------------------------------------------------------------------------------------

void SLauncher::initWidgets()
{
    ui->setupUi(this);

    QWidget::setWindowTitle(QString("%1 %2").arg(APP_NAME).arg(getVersion()));

    m_VersionLabel.setStyleSheet("color: white; font-family: Sans; font-size: 12px");
    m_VersionLabel.setText(VERSION_NAME);
    m_VersionLabel.move(width() - 297, height() - 27);

    ui->labelLogo->setOpenExternalLinks(true);

    ui->tabInternet->layout()->setMargin(0);
    ui->tabFavorite->layout()->setMargin(0);

    ui->treeInternet->setColumnCount(6);
    ui->treeFavorite->setColumnCount(6);

    ui->treeInternet->header()->resizeSection(0, 200);
    ui->treeFavorite->header()->resizeSection(0, 200);
    ui->treeInternet->header()->resizeSection(1, 100);
    ui->treeFavorite->header()->resizeSection(1, 100);
    ui->treeInternet->header()->resizeSection(2, 50);
    ui->treeFavorite->header()->resizeSection(2, 50);
    ui->treeInternet->header()->resizeSection(3, 50);
    ui->treeFavorite->header()->resizeSection(3, 50);
    ui->treeInternet->header()->resizeSection(4, 50);
    ui->treeFavorite->header()->resizeSection(4, 50);

    ui->treeInternet->header()->setSectionsClickable(true);
    ui->treeFavorite->header()->setSectionsClickable(true);
}

void SLauncher::initConnections()
{
    connect(this, SIGNAL(Style_quit()),
            this, SLOT(onQuit()));

    connect(ui->buttonRefresh, SIGNAL(released()),
            this, SLOT(onRefresh()));

    connect(ui->buttonAddons, SIGNAL(released()),
            m_AddonWidget, SLOT(show()));

    connect(ui->buttonOptions, SIGNAL(released()),
            m_OptionWidget, SLOT(customShow()));

    connect(ui->buttonAdd, SIGNAL(released()),
            &m_FavoriteManager, SLOT(onButtonAddClicked()));

    connect(ui->buttonEdit, SIGNAL(released()),
            &m_FavoriteManager, SLOT(onButtonEditClicked()));

    connect(ui->buttonRemove, SIGNAL(released()),
            &m_FavoriteManager, SLOT(onButtonRemoveClicked()));

    connect(ui->tabServerList, SIGNAL(currentChanged(int)),
            &m_Network, SLOT(onTabIndexChanged(int)));
}

void SLauncher::initMetaType()
{
    qRegisterMetaType<CServerInfo>("CServerInfo");
}

void SLauncher::loadCSS(QString filename)
{
    QFile fileCSS(filename);
    if (!fileCSS.open(QFile::ReadOnly))
        return;

    QString styleSheet = QLatin1String(fileCSS.readAll());
    fileCSS.close();

    qApp->setStyleSheet(styleSheet);
}

//-------------------------------------------------------------------------------------------------------------------------------
//  Private slots
//-------------------------------------------------------------------------------------------------------------------------------

void SLauncher::onQuit()
{
    qApp->closeAllWindows();
    qApp->quit();
}

void SLauncher::onRefresh()
{
    switch (ui->tabServerList->currentIndex())
    {
    case INDEX_INTERNET:
        m_InternetManager.serverList();
        break;

    case INDEX_FAVORITE:
        m_InternetManager.clear();
        m_FavoriteManager.serverList();
        break;
    }
}
