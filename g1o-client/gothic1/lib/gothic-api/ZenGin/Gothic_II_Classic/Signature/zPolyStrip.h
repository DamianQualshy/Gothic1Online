namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(zCPolyStrip);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::zCPolyStrip_OnInit, 0x005B7790);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::CalcBBox3D, 0x005B7B50);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::EmptyEffect, 0x005B7CF0);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::AllocateResources, 0x005B7D20);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::SetVisibleSegments, 0x005B8020);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCPolyStrip, &zCPolyStrip::AddSegment, void(zCPolyStrip::*)(zVEC3 const&, zVEC3 const&), 0x005B8740);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCPolyStrip, &zCPolyStrip::AddSegment, void(zCPolyStrip::*)(zVEC3 const&), 0x005B88C0);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::AddSegmentSmart, 0x005B8990);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::UpdateSegment, 0x005B8BF0);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::UpdateSegmentAlpha, 0x005B8C70);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::AlignToCamera, 0x005B8C90);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::ProjectToSphere, 0x005B9120);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::Lightning0Subdivide, 0x005B9240);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::GenerateCPLightning0, 0x005B93D0);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::GenerateCircle, 0x005B9520);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::_GetClassDef, 0x004C7B90);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::Render, 0x005B8100);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::IsBBox3DLocal, 0x005B7A20);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::GetBBox3D, 0x005B7A30);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::GetVisualName, 0x004C7BA0);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::SetVisualUsedBy, 0x005B7CD0);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::FreeResources, 0x005B7F70);

	ZENGIN_REGISTER_CLASS(zCLightning);
	ZENGIN_REGISTER_METHOD(zCLightning, &zCLightning::SetProjectionSphere, 0x005B9830);
	ZENGIN_REGISTER_METHOD(zCLightning, &zCLightning::Generate, 0x005B9860);

	ZENGIN_REGISTER_CLASS(zCLightning::zCBolt);
	ZENGIN_REGISTER_METHOD(zCLightning::zCBolt, &zCLightning::zCBolt::Generate_R, 0x005B98C0);
	ZENGIN_REGISTER_METHOD(zCLightning::zCBolt, &zCLightning::zCBolt::Render, 0x005B9F50);
	ZENGIN_REGISTER_METHOD(zCLightning::zCBolt, &zCLightning::zCBolt::FreeResources, 0x005B9E80);

	ZENGIN_REGISTER_CLASS(zCQuadMark);
	ZENGIN_REGISTER_METHOD(zCQuadMark, &zCQuadMark::zCQuadMark_OnInit, 0x005C9DD0);
	ZENGIN_REGISTER_METHOD(zCQuadMark, &zCQuadMark::ClipQuadPolyToPlane, 0x005CA210);
	ZENGIN_REGISTER_METHOD(zCQuadMark, &zCQuadMark::ClipQuadPolyToWorldPoly, 0x005CA450);
	ZENGIN_REGISTER_METHOD(zCQuadMark, &zCQuadMark::CalcQuadAxis, 0x005CA6B0);
	ZENGIN_REGISTER_METHOD(zCQuadMark, &zCQuadMark::InitFirstQuadPoly, 0x005CA860);
	ZENGIN_REGISTER_METHOD(zCQuadMark, &zCQuadMark::InitQuadPoly, 0x005CAD30);
	ZENGIN_REGISTER_METHOD(zCQuadMark, &zCQuadMark::ProjectQuadPolyToPlane, 0x005CADB0);
	ZENGIN_REGISTER_METHOD(zCQuadMark, &zCQuadMark::AddQuadPolyToQuadMesh, 0x005CAE90);
	ZENGIN_REGISTER_METHOD(zCQuadMark, &zCQuadMark::GetNextWorldPoly, 0x005CB010);
	ZENGIN_REGISTER_METHOD(zCQuadMark, &zCQuadMark::ProcessWorldPoly, 0x005CB0A0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCQuadMark, &zCQuadMark::CreateQuadMark, void(zCQuadMark::*)(zVEC3 const&, zVEC3 const&, zVEC2 const&, zSTRING&, zCQuadMark::zTEffectParams*), 0x005CB260);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCQuadMark, &zCQuadMark::CreateQuadMark, void(zCQuadMark::*)(zVEC3 const&, zVEC3 const&, zVEC2 const&, zCMaterial*, zCQuadMark::zTEffectParams*), 0x005CB3A0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCQuadMark, &zCQuadMark::CreateQuadMark, void(zCQuadMark::*)(zVEC3 const&, zVEC3 const&, zVEC2 const&, zCQuadMark::zTEffectParams*), 0x005CB430);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCQuadMark, &zCQuadMark::CreateQuadMark, void(zCQuadMark::*)(zCPolygon*, zVEC3 const&, zVEC2 const&, zCQuadMark::zTEffectParams*), 0x005CB490);
	ZENGIN_REGISTER_METHOD(zCQuadMark, &zCQuadMark::GetNumActive, 0x005CBA70);
	ZENGIN_REGISTER_METHOD(zCQuadMark, &zCQuadMark::ProcessAniTracker, 0x005CBA90);
	ZENGIN_REGISTER_METHOD(zCQuadMark, &zCQuadMark::_GetClassDef, 0x005C9EF0);
	ZENGIN_REGISTER_METHOD(zCQuadMark, &zCQuadMark::Render, 0x005CA160);
	ZENGIN_REGISTER_METHOD(zCQuadMark, &zCQuadMark::IsBBox3DLocal, 0x005C9F00);
	ZENGIN_REGISTER_METHOD(zCQuadMark, &zCQuadMark::GetBBox3D, 0x005CA140);
	ZENGIN_REGISTER_METHOD(zCQuadMark, &zCQuadMark::GetVisualName, 0x005C9F10);
	ZENGIN_REGISTER_METHOD(zCQuadMark, &zCQuadMark::SetVisualUsedBy, 0x005CA110);

} // namespace Gothic_II_Classic
