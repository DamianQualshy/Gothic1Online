// Supported with union (c) 2018-2023 Union team

// User API for zCVob
// Add your methods here

    zVEC3 GetPosition() const { return GetPositionWorld(); }
    void SetPosition( float x, float y, float z ) { SetPositionWorld( zVEC3( x, y, z ) ); }
    void SetRotation( float x, float y, float z ) { zVEC3 value( x, y, z ); SetRotation( value ); }
    void SetRotation( zVEC3 const& value ) {
      ResetRotationsWorld();
      RotateWorldX( value[0] );
      RotateWorldY( value[1] );
      RotateWorldZ( value[2] );
    }

