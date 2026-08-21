// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
#endif
// Windows Header Files:
#include <windows.h>
#include <mmreg.h>
#include <map>
#include <vector>
#include <queue>

//Gothic Online definicja dewelopera
//#define DEV_MODE
#define COOP
#ifndef G1O_VERSION
#define G1O_VERSION "0.5.0"
#endif
#define versionString "v" G1O_VERSION
#define PING_SYNC_LIMIT 800

//Gothic Online headers
#include "zengin\\ZenginIncludes.h" //ZenGin (silnik gothica)
#include <GO_SharedIncludes.h> //RakNet, TinyXML, goMath
#include <hashlib/hashlibpp.h>
#include <Scripting/NativeApi.h>
#include <Scripting/ScriptEngine.h>
#include <Resource/ClientResource.h>
#include "MemLib\\MemLib.h" //MemLib
#include "Log\\CLog.h" //Logi

// Keep the standard namespace out of the Windows and ZenGin headers. Their
// legacy global `byte` type otherwise collides with C++17's std::byte.
using namespace std;
//Externy
extern MemLib* pMemLib;
extern CLog* pLog;
//Splash screen
#include "CSplashScreen.h"
//Managery
#include "CPlayerManager.h"
#include "CItemManager.h"
#include "CVobManager.h"
//Headery samego multiplayera
#include "CSpell.h"
#include "CAnimation.h"
#include "CMultiplayer.h"
#include "CReceiver.h"
#include "CNetwork.h"
#include "CConfig.h"
#include "CLanguage.h"
#include "CGothicWindow.h"
#include "CGothicGame.h"
#include "CRender.h"
#include "CChat.h"
#include "CKeyboard.h"
#include "CClient.h" //Główny header clienta
//Obiekty
#include "CCreature.h"
#include "CNpc.h"
#include "CPlayer.h"
#include "CItem.h"
#include "CVob.h"
//Local player
#include "CLocalPlayer.h"
//RPC
#include "RPC\\ConnectionRPC.h"
#include "RPC\\ChatRPC.h"
#include "RPC\\PlayerRPC.h"
#include "RPC\\ItemRPC.h"
#include "RPC\\ScriptRPC.h"
//Interfejsy
#include "Interface\\CNetInterface.h"
#include "Interface\\COptionsMenu.h"
#include "Interface\\CPlayerList.h"
//Skrypty
#include "Script\\CAnticheat.h"
#include "Script\\CDraw.h"
#include "Script\\CTexture.h"
#include "Script\\CVariable.h"
#include "Script\\CEvent.h"
#include "Script\\CFunction.h"
#include "Script\\CScriptState.h"
#include "Script\\CKey.h"
#include "Script\\CScript.h"
