// Supported with union (c) 2018-2023 Union team

// User API for CGameManager
// Add your methods here

    static CGameManager* GetGameManager();
    int Fake_PlayVideo( zSTRING, int ) { return 1; }
    void Hook_Menu( int );
    void Hook_Done();

