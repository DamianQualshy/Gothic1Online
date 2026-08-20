namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(zCPolyStrip);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::zCPolyStrip_OnInit, 0x005BD300);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::CalcBBox3D, 0x005BD6C0);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::EmptyEffect, 0x005BD860);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::AllocateResources, 0x005BD890);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::SetVisibleSegments, 0x005BDB90);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCPolyStrip, &zCPolyStrip::AddSegment, void(zCPolyStrip::*)(zVEC3 const&, zVEC3 const&), 0x005BE2B0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCPolyStrip, &zCPolyStrip::AddSegment, void(zCPolyStrip::*)(zVEC3 const&), 0x005BE430);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::AddSegmentSmart, 0x005BE500);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::UpdateSegment, 0x005BE760);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::UpdateSegmentAlpha, 0x005BE7E0);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::AlignToCamera, 0x005BE800);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::ProjectToSphere, 0x005BEC90);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::Lightning0Subdivide, 0x005BEDB0);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::GenerateCPLightning0, 0x005BEF40);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::GenerateCircle, 0x005BF090);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::_GetClassDef, 0x004CA100);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::Render, 0x005BDC70);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::IsBBox3DLocal, 0x005BD590);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::GetBBox3D, 0x005BD5A0);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::GetVisualName, 0x004CA110);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::SetVisualUsedBy, 0x005BD840);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::FreeResources, 0x005BDAE0);

	ZENGIN_REGISTER_CLASS(zCLightning);
	ZENGIN_REGISTER_METHOD(zCLightning, &zCLightning::SetProjectionSphere, 0x005BF3A0);
	ZENGIN_REGISTER_METHOD(zCLightning, &zCLightning::Generate, 0x005BF3D0);

	ZENGIN_REGISTER_CLASS(zCLightning::zCBolt);
	ZENGIN_REGISTER_METHOD(zCLightning::zCBolt, &zCLightning::zCBolt::Generate_R, 0x005BF430);
	ZENGIN_REGISTER_METHOD(zCLightning::zCBolt, &zCLightning::zCBolt::Render, 0x005BFAC0);
	ZENGIN_REGISTER_METHOD(zCLightning::zCBolt, &zCLightning::zCBolt::FreeResources, 0x005BF9F0);

	ZENGIN_REGISTER_CLASS(zCQuadMark);
	ZENGIN_REGISTER_METHOD(zCQuadMark, &zCQuadMark::zCQuadMark_OnInit, 0x005D0970);
	ZENGIN_REGISTER_METHOD(zCQuadMark, &zCQuadMark::ClipQuadPolyToPlane, 0x005D0DB0);
	ZENGIN_REGISTER_METHOD(zCQuadMark, &zCQuadMark::ClipQuadPolyToWorldPoly, 0x005D0FF0);
	ZENGIN_REGISTER_METHOD(zCQuadMark, &zCQuadMark::CalcQuadAxis, 0x005D1250);
	ZENGIN_REGISTER_METHOD(zCQuadMark, &zCQuadMark::InitFirstQuadPoly, 0x005D1400);
	ZENGIN_REGISTER_METHOD(zCQuadMark, &zCQuadMark::InitQuadPoly, 0x005D18D0);
	ZENGIN_REGISTER_METHOD(zCQuadMark, &zCQuadMark::ProjectQuadPolyToPlane, 0x005D1950);
	ZENGIN_REGISTER_METHOD(zCQuadMark, &zCQuadMark::AddQuadPolyToQuadMesh, 0x005D1A30);
	ZENGIN_REGISTER_METHOD(zCQuadMark, &zCQuadMark::GetNextWorldPoly, 0x005D1BB0);
	ZENGIN_REGISTER_METHOD(zCQuadMark, &zCQuadMark::ProcessWorldPoly, 0x005D1C40);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCQuadMark, &zCQuadMark::CreateQuadMark, void(zCQuadMark::*)(zVEC3 const&, zVEC3 const&, zVEC2 const&, zSTRING&, zCQuadMark::zTEffectParams*), 0x005D1E00);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCQuadMark, &zCQuadMark::CreateQuadMark, void(zCQuadMark::*)(zVEC3 const&, zVEC3 const&, zVEC2 const&, zCMaterial*, zCQuadMark::zTEffectParams*), 0x005D1F40);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCQuadMark, &zCQuadMark::CreateQuadMark, void(zCQuadMark::*)(zVEC3 const&, zVEC3 const&, zVEC2 const&, zCQuadMark::zTEffectParams*), 0x005D1FD0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCQuadMark, &zCQuadMark::CreateQuadMark, void(zCQuadMark::*)(zCPolygon*, zVEC3 const&, zVEC2 const&, zCQuadMark::zTEffectParams*), 0x005D2030);
	ZENGIN_REGISTER_METHOD(zCQuadMark, &zCQuadMark::GetNumActive, 0x005D2620);
	ZENGIN_REGISTER_METHOD(zCQuadMark, &zCQuadMark::ProcessAniTracker, 0x005D2640);
	ZENGIN_REGISTER_METHOD(zCQuadMark, &zCQuadMark::_GetClassDef, 0x005D0A90);
	ZENGIN_REGISTER_METHOD(zCQuadMark, &zCQuadMark::Render, 0x005D0D00);
	ZENGIN_REGISTER_METHOD(zCQuadMark, &zCQuadMark::IsBBox3DLocal, 0x005D0AA0);
	ZENGIN_REGISTER_METHOD(zCQuadMark, &zCQuadMark::GetBBox3D, 0x005D0CE0);
	ZENGIN_REGISTER_METHOD(zCQuadMark, &zCQuadMark::GetVisualName, 0x005D0AB0);
	ZENGIN_REGISTER_METHOD(zCQuadMark, &zCQuadMark::SetVisualUsedBy, 0x005D0CB0);

} // namespace Gothic_II_Addon
