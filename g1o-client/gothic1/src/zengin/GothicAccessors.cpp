#include "../stdafx.h"

CGameManager* CGameManager::GetGameManager() {
    return Gothic_I_Classic::gameMan;
}

oCGame* oCGame::GetGame() {
    return Gothic_I_Classic::ogame;
}

oCNpc* oCNpc::GetHero() {
    return Gothic_I_Classic::player;
}

oCObjectFactory* oCObjectFactory::GetFactory() {
    return Gothic_I_Classic::zfactory;
}

zCInput* zCInput::GetInput() {
    return Gothic_I_Classic::zinput;
}

zCView* zCView::GetScreen() {
    return Gothic_I_Classic::screen;
}

void zCAICamera::SetMovementEnabled(bool enabled) {
    if (!camVob)
        return;

    camVob->SetAI(enabled ? static_cast<zCAIBase*>(this) : nullptr);
    camVob->SetSleeping(!enabled);
}
