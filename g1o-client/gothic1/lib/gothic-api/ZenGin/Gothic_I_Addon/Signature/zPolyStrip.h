namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(zCPolyStrip);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::zCPolyStrip_OnInit, 0x005B79A0);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::CalcBBox3D, 0x005B7D90);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::EmptyEffect, 0x005B7F20);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::AllocateResources, 0x005B7F50);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::SetVisibleSegments, 0x005B82A0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCPolyStrip, &zCPolyStrip::AddSegment, void(zCPolyStrip::*)(zVEC3 const&, zVEC3 const&), 0x005B8930);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCPolyStrip, &zCPolyStrip::AddSegment, void(zCPolyStrip::*)(zVEC3 const&), 0x005B8AA0);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::AddSegmentSmart, 0x005B8B60);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::UpdateSegment, 0x005B8E20);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::UpdateSegmentAlpha, 0x005B8EA0);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::AlignToCamera, 0x005B8EC0);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::ProjectToSphere, 0x005B9390);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::Lightning0Subdivide, 0x005B94C0);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::GenerateCPLightning0, 0x005B9650);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::GenerateCircle, 0x005B9790);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::_GetClassDef, 0x004D06F0);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::Render, 0x005B8360);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::IsBBox3DLocal, 0x005B7C20);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::GetBBox3D, 0x005B7C30);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::GetVisualName, 0x004D0700);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::SetVisualUsedBy, 0x005B7F00);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::FreeResources, 0x005B8200);

	ZENGIN_REGISTER_CLASS(zCLightning);
	ZENGIN_REGISTER_METHOD(zCLightning, &zCLightning::SetProjectionSphere, 0x005B9AA0);
	ZENGIN_REGISTER_METHOD(zCLightning, &zCLightning::Generate, 0x005B9AD0);

	ZENGIN_REGISTER_CLASS(zCLightning::zCBolt);
	ZENGIN_REGISTER_METHOD(zCLightning::zCBolt, &zCLightning::zCBolt::Generate_R, 0x005B9B30);
	ZENGIN_REGISTER_METHOD(zCLightning::zCBolt, &zCLightning::zCBolt::Render, 0x005BA1F0);
	ZENGIN_REGISTER_METHOD(zCLightning::zCBolt, &zCLightning::zCBolt::FreeResources, 0x005BA120);

	ZENGIN_REGISTER_CLASS(zCQuadMark);
	ZENGIN_REGISTER_METHOD(zCQuadMark, &zCQuadMark::zCQuadMark_OnInit, 0x005C8490);
	ZENGIN_REGISTER_METHOD(zCQuadMark, &zCQuadMark::ClipQuadPolyToPlane, 0x005C8930);
	ZENGIN_REGISTER_METHOD(zCQuadMark, &zCQuadMark::ClipQuadPolyToWorldPoly, 0x005C8C20);
	ZENGIN_REGISTER_METHOD(zCQuadMark, &zCQuadMark::CalcQuadAxis, 0x005C8EC0);
	ZENGIN_REGISTER_METHOD(zCQuadMark, &zCQuadMark::InitFirstQuadPoly, 0x005C90C0);
	ZENGIN_REGISTER_METHOD(zCQuadMark, &zCQuadMark::InitQuadPoly, 0x005C95D0);
	ZENGIN_REGISTER_METHOD(zCQuadMark, &zCQuadMark::ProjectQuadPolyToPlane, 0x005C9650);
	ZENGIN_REGISTER_METHOD(zCQuadMark, &zCQuadMark::AddQuadPolyToQuadMesh, 0x005C9740);
	ZENGIN_REGISTER_METHOD(zCQuadMark, &zCQuadMark::GetNextWorldPoly, 0x005C9900);
	ZENGIN_REGISTER_METHOD(zCQuadMark, &zCQuadMark::ProcessWorldPoly, 0x005C9990);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCQuadMark, &zCQuadMark::CreateQuadMark, void(zCQuadMark::*)(zVEC3 const&, zVEC3 const&, zVEC2 const&, zSTRING&, zCQuadMark::zTEffectParams*), 0x005C9B60);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCQuadMark, &zCQuadMark::CreateQuadMark, void(zCQuadMark::*)(zVEC3 const&, zVEC3 const&, zVEC2 const&, zCMaterial*, zCQuadMark::zTEffectParams*), 0x005C9CC0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCQuadMark, &zCQuadMark::CreateQuadMark, void(zCQuadMark::*)(zVEC3 const&, zVEC3 const&, zVEC2 const&, zCQuadMark::zTEffectParams*), 0x005C9D50);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCQuadMark, &zCQuadMark::CreateQuadMark, void(zCQuadMark::*)(zCPolygon*, zVEC3 const&, zVEC2 const&, zCQuadMark::zTEffectParams*), 0x005C9DB0);
	ZENGIN_REGISTER_METHOD(zCQuadMark, &zCQuadMark::GetNumActive, 0x005CA3F0);
	ZENGIN_REGISTER_METHOD(zCQuadMark, &zCQuadMark::ProcessAniTracker, 0x005CA410);
	ZENGIN_REGISTER_METHOD(zCQuadMark, &zCQuadMark::_GetClassDef, 0x005C85E0);
	ZENGIN_REGISTER_METHOD(zCQuadMark, &zCQuadMark::Render, 0x005C8880);
	ZENGIN_REGISTER_METHOD(zCQuadMark, &zCQuadMark::IsBBox3DLocal, 0x005C85F0);
	ZENGIN_REGISTER_METHOD(zCQuadMark, &zCQuadMark::GetBBox3D, 0x005C8840);
	ZENGIN_REGISTER_METHOD(zCQuadMark, &zCQuadMark::GetVisualName, 0x005C8600);
	ZENGIN_REGISTER_METHOD(zCQuadMark, &zCQuadMark::SetVisualUsedBy, 0x005C8810);

} // namespace Gothic_I_Addon
