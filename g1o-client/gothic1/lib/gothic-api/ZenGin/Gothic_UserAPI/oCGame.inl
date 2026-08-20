// Supported with union (c) 2018-2023 Union team

// User API for oCGame
// Add your methods here

    static oCGame* GetGame();
    oCNpc* CreateNPC( zSTRING const&, float, float, float );
    void EnableTestmode( int enabled ) { game_testmode = enabled; }
    int IsTestmodeEnabled() const { return game_testmode; }

    void Hook_Render();
    int Hook_HandleEvent( int );
    void Hook_ChangeLevel( zSTRING const&, zSTRING const& );
    void Hook_EnterWorld( oCNpc*, int, zSTRING const& );
    void Fake_LoadSavegame( int, int );
    void Fake_WriteSavegame( int, int );

