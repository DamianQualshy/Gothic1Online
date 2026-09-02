// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once
//#define DEBUG_MODE

#include <iostream>
#include <map>
#include <queue>
#include <fstream>

//Defines
//#define DEV_MODE
#define BAN_LIST "banlist"
#ifndef G1O_VERSION
#define G1O_VERSION "0.5.0"
#endif
#define versionString G1O_VERSION

#include "Logging/Logging.h"

//Gothic Online headers
#include "../Shared/GO_SharedIncludes.h"
#include "../Shared/Scripting/NativeApi.h"
#include "../Shared/Scripting/ScriptEngine.h"

using namespace std;
//Managery
#include "CPlayerManager.h"
#include "CItemManager.h"
#include "CBotManager.h"
//Headery samego multiplayera
#include "CMaster.h" //Master server
#include "CMultiplayer.h"
#include "CConfig.h"
#include "CReceiver.h"
#include "CNetwork.h"
#include "CScriptDownload.h"
#include "CStreamer.h"
#include "CAdmin.h"
#include "CBan.h"
#include "CServer.h" //Główny header serwera
//obiekty
#include "CCreature.h"
#include "CNpc.h"
#include "CPlayer.h"
#include "CItem.h"
//RPC
#include "RPC/ConnectionRPC.h"
#include "RPC/ChatRPC.h"
#include "RPC/PlayerRPC.h"
#include "RPC/ItemRPC.h"
#include "RPC/LauncherRPC.h"
#include "RPC/ScriptRPC.h"
//Skrypty
#include "Script/SVariable.h"
#include "Script/SEvent.h"
#include "Script/SFunction.h"
#include "Script/CScript.h"
