namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(zCPolyStrip);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::zCPolyStrip_OnInit, 0x0059B610);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::CalcBBox3D, 0x0059B9A0);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::EmptyEffect, 0x0059BB20);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::AllocateResources, 0x0059BB50);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::SetVisibleSegments, 0x0059BE80);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCPolyStrip, &zCPolyStrip::AddSegment, void(zCPolyStrip::*)(zVEC3 const&, zVEC3 const&), 0x0059C460);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCPolyStrip, &zCPolyStrip::AddSegment, void(zCPolyStrip::*)(zVEC3 const&), 0x0059C5C0);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::AddSegmentSmart, 0x0059C680);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::UpdateSegment, 0x0059C8E0);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::UpdateSegmentAlpha, 0x0059C960);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::AlignToCamera, 0x0059C980);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::ProjectToSphere, 0x0059CE00);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::Lightning0Subdivide, 0x0059CF10);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::GenerateCPLightning0, 0x0059D0A0);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::GenerateCircle, 0x0059D1E0);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::_GetClassDef, 0x004C0DC0);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::Render, 0x0059BF50);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::IsBBox3DLocal, 0x0059B870);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::GetBBox3D, 0x0059B880);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::GetVisualName, 0x004C0DD0);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::SetVisualUsedBy, 0x0059BB00);
	ZENGIN_REGISTER_METHOD(zCPolyStrip, &zCPolyStrip::FreeResources, 0x0059BDE0);

	ZENGIN_REGISTER_CLASS(zCLightning);
	ZENGIN_REGISTER_METHOD(zCLightning, &zCLightning::SetProjectionSphere, 0x0059D4D0);
	ZENGIN_REGISTER_METHOD(zCLightning, &zCLightning::Generate, 0x0059D500);

	ZENGIN_REGISTER_CLASS(zCLightning::zCBolt);
	ZENGIN_REGISTER_METHOD(zCLightning::zCBolt, &zCLightning::zCBolt::Generate_R, 0x0059D560);
	ZENGIN_REGISTER_METHOD(zCLightning::zCBolt, &zCLightning::zCBolt::Render, 0x0059DBF0);
	ZENGIN_REGISTER_METHOD(zCLightning::zCBolt, &zCLightning::zCBolt::FreeResources, 0x0059DB20);

	ZENGIN_REGISTER_CLASS(zCQuadMark);
	ZENGIN_REGISTER_METHOD(zCQuadMark, &zCQuadMark::zCQuadMark_OnInit, 0x005AB810);
	ZENGIN_REGISTER_METHOD(zCQuadMark, &zCQuadMark::ClipQuadPolyToPlane, 0x005ABC80);
	ZENGIN_REGISTER_METHOD(zCQuadMark, &zCQuadMark::ClipQuadPolyToWorldPoly, 0x005ABEC0);
	ZENGIN_REGISTER_METHOD(zCQuadMark, &zCQuadMark::CalcQuadAxis, 0x005AC120);
	ZENGIN_REGISTER_METHOD(zCQuadMark, &zCQuadMark::InitFirstQuadPoly, 0x005AC2D0);
	ZENGIN_REGISTER_METHOD(zCQuadMark, &zCQuadMark::InitQuadPoly, 0x005AC7A0);
	ZENGIN_REGISTER_METHOD(zCQuadMark, &zCQuadMark::ProjectQuadPolyToPlane, 0x005AC820);
	ZENGIN_REGISTER_METHOD(zCQuadMark, &zCQuadMark::AddQuadPolyToQuadMesh, 0x005AC900);
	ZENGIN_REGISTER_METHOD(zCQuadMark, &zCQuadMark::GetNextWorldPoly, 0x005ACA80);
	ZENGIN_REGISTER_METHOD(zCQuadMark, &zCQuadMark::ProcessWorldPoly, 0x005ACB10);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCQuadMark, &zCQuadMark::CreateQuadMark, void(zCQuadMark::*)(zVEC3 const&, zVEC3 const&, zVEC2 const&, zSTRING&, zCQuadMark::zTEffectParams*), 0x005ACCD0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCQuadMark, &zCQuadMark::CreateQuadMark, void(zCQuadMark::*)(zVEC3 const&, zVEC3 const&, zVEC2 const&, zCMaterial*, zCQuadMark::zTEffectParams*), 0x005ACE30);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCQuadMark, &zCQuadMark::CreateQuadMark, void(zCQuadMark::*)(zVEC3 const&, zVEC3 const&, zVEC2 const&, zCQuadMark::zTEffectParams*), 0x005ACEC0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCQuadMark, &zCQuadMark::CreateQuadMark, void(zCQuadMark::*)(zCPolygon*, zVEC3 const&, zVEC2 const&, zCQuadMark::zTEffectParams*), 0x005ACF20);
	ZENGIN_REGISTER_METHOD(zCQuadMark, &zCQuadMark::GetNumActive, 0x005AD4B0);
	ZENGIN_REGISTER_METHOD(zCQuadMark, &zCQuadMark::ProcessAniTracker, 0x005AD4D0);
	ZENGIN_REGISTER_METHOD(zCQuadMark, &zCQuadMark::_GetClassDef, 0x005AB960);
	ZENGIN_REGISTER_METHOD(zCQuadMark, &zCQuadMark::Render, 0x005ABBD0);
	ZENGIN_REGISTER_METHOD(zCQuadMark, &zCQuadMark::IsBBox3DLocal, 0x005AB970);
	ZENGIN_REGISTER_METHOD(zCQuadMark, &zCQuadMark::GetBBox3D, 0x005ABBB0);
	ZENGIN_REGISTER_METHOD(zCQuadMark, &zCQuadMark::GetVisualName, 0x005AB980);
	ZENGIN_REGISTER_METHOD(zCQuadMark, &zCQuadMark::SetVisualUsedBy, 0x005ABB80);

} // namespace Gothic_I_Classic
