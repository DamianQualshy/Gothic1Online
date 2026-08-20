// Supported with union (c) 2018-2023 Union team

// User API for oCMobInter
// Add your methods here

    void Hook_OnTrigger( zCVob*, zCVob* );
    void Hook_OnUntrigger( zCVob*, zCVob* );
    void SetState( bool state1, bool state2 ) { state_target = state1; state = state2; }
    int GetS1() const { return state_target; }
    int GetS2() const { return state; }

