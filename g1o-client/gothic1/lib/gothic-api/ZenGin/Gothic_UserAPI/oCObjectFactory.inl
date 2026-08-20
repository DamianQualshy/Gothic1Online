// Supported with union (c) 2018-2023 Union team

// User API for oCObjectFactory
// Add your methods here

    static oCObjectFactory* GetFactory();
    oCItem* CreateItem2( zSTRING const&, zVEC3, int );
    zCVob* CreateVob( zSTRING const&, int, zVEC3, zVEC3 );
    zCVob* CreateMob( zSTRING const&, int, zVEC3, zVEC3, unsigned long );
    zFILE* Hook_CreateZFile( zSTRING const& );

