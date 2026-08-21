#ifndef GLOBALDEFINES
#define GLOBALDEFINES

#define APP_NAME                    "Gothic Online"

#define DATA_PATH                   "../../Data/"
#define CONFIG_PATH                 "../G1O_Config.xml"
#define LEGACY_FAVORITE_PATH        "../favorite.bin"
#define LEGACY_SETTINGS_PATH        "../go_conf.ini"
#define CLIENT_VERSIONS_PATH        "../versions"
#define CLIENT_LOG_PATH             "../logs"

#define UPLOAD_FILE_PATH            "download"
#define UPLOAD_SCRIPT_PATH          "client-scripts"
#define DOWNLOAD_FILE_PATH          "../../Data"
#define DOWNLOAD_SCRIPT_PATH        "../Script"

#define INJECT_APP_NAME             "../../System/GothicMod.exe"

#define FILE_URL_MASTER_LIST        0
#define FILE_URL_VERSION            1

#define RAKNET_PASSWORD             "TEMPORARY_PASSWORD"
#ifndef G1O_VERSION
#define G1O_VERSION                 "0.5.0"
#endif
#define VERSION_NAME                G1O_VERSION

#ifndef G1O_MASTER_SERVER_LIST_URL
#define G1O_MASTER_SERVER_LIST_URL  "http://gothic-online.com.pl/list/list.txt"
#endif

#ifndef G1O_LAUNCHER_VERSION_URL
#define G1O_LAUNCHER_VERSION_URL    "http://gothic-online.com.pl/list/version.txt"
#endif

#define DEFAULT_PORT 28970
#define LIST_TIMEOUT 2500

#define INDEX_INTERNET 0
#define INDEX_FAVORITE 1

#endif // GLOBALDEFINES

