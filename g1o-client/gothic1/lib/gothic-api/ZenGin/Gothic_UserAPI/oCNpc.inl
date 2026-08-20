// Supported with union (c) 2018-2023 Union team

// User API for oCNpc
// Add your methods here

    static oCNpc* GetHero();

    zCModelAni* GetCurrentAni();
    zSTRING GetAnimationName();
    int GetAnimationID();
    void SetSkillWeapon( int, unsigned );
    int GetSkillWeapon( int );
    void SetProtection( int, int );
    int GetProtection( int );
    void ClearInventory();
    void ForceStandUp();
    oCItem* CreateItem( zSTRING const&, int );
    void DestroyNpc();
    void SetHeading( float );
    float GetHeading();

    void SetLevel( int value ) { level = value; }
    int GetLevel() const { return level; }
    void SetExperience( int value ) { experience_points = value; }
    int GetExperience() const { return experience_points; }
    void SetExperienceNextLevel( int value ) { experience_points_next_level = value; }
    int GetExperienceNextLevel() const { return experience_points_next_level; }
    void SetLearnPoints( int value ) { learn_points = value; }
    int GetLearnPoints() const { return learn_points; }
    void SetOpenLock( int skill, int value ) { SetTalentSkill( oCNpcTalent::NPC_TAL_PICKLOCK, skill ); SetTalentValue( oCNpcTalent::NPC_TAL_PICKLOCK, value ); }
    void SetPickPocket( int skill, int value ) { SetTalentSkill( oCNpcTalent::NPC_TAL_PICKPOCKET, skill ); SetTalentValue( oCNpcTalent::NPC_TAL_PICKPOCKET, value ); }
    void SetMagicLvl( unsigned value ) { SetTalentSkill( oCNpcTalent::NPC_TAL_MAGE, value > 6 ? 6 : value ); }
    int GetMagicLvl() { return GetTalentSkill( oCNpcTalent::NPC_TAL_MAGE ); }
    void SetAcrobatic( bool value ) { SetTalentSkill( oCNpcTalent::NPC_TAL_ACROBAT, value ); }
    bool GetAcrobatic() { return GetTalentSkill( oCNpcTalent::NPC_TAL_ACROBAT ) != 0; }
    void SetSneak( bool value ) { SetTalentSkill( oCNpcTalent::NPC_TAL_SNEAK, value ); }
    bool GetSneak() { return GetTalentSkill( oCNpcTalent::NPC_TAL_SNEAK ) != 0; }
    int IsInvOpen() { return inventory2.IsOpen(); }

    int Hook_DoDropVob( zCVob* );
    int Hook_DoTakeVob( zCVob* );
    void Hook_SetMovLock( int );
    void Hook_OpenInventory();
    void Hook_CloseInventory();
    int Hook_ApplyOverlay( zSTRING const& );
    void Hook_RemoveOverlay( zSTRING const& );
    int Hook_ApplyTimedOverlayMds( zSTRING const&, float );
    void Hook_DropUnconscious( float, oCNpc* );
    int Hook_DoShootArrow( int );
    void Hook_OnDamage_Anim( oSDamageDescriptor& );
    void Hook_OnDamage_Script( oSDamageDescriptor& );
    void Fake_DropAllInHand();
    void Fake_Disable();

    void _SetMovLock( int );
    int _DoDropVob( zCVob* );
    int _DoTakeVob( zCVob* );
    void _OpenInventory();
    void _CloseInventory();
    int _ApplyOverlay( zSTRING const& );
    void _RemoveOverlay( zSTRING const& );

