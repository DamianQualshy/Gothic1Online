namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(zCMorphMeshAni);
	ZENGIN_REGISTER_METHOD(zCMorphMeshAni, &zCMorphMeshAni::zCMorphMeshAni_OnInit, 0x0059E170);
	ZENGIN_REGISTER_METHOD(zCMorphMeshAni, &zCMorphMeshAni::SetBlending, 0x0059E2B0);
	ZENGIN_REGISTER_METHOD(zCMorphMeshAni, &zCMorphMeshAni::Load, 0x0059E320);
	ZENGIN_REGISTER_METHOD(zCMorphMeshAni, &zCMorphMeshAni::Save, 0x0059E460);
	ZENGIN_REGISTER_METHOD(zCMorphMeshAni, &zCMorphMeshAni::SetFlagsByString, 0x005A0440);

	ZENGIN_REGISTER_CLASS(zCMorphMeshProto);
	ZENGIN_REGISTER_METHOD(zCMorphMeshProto, &zCMorphMeshProto::zCMorphMeshProto_OnInit, 0x0059E570);
	ZENGIN_REGISTER_METHOD(zCMorphMeshProto, &zCMorphMeshProto::Release, 0x0059E9A0);
	ZENGIN_REGISTER_METHOD(zCMorphMeshProto, &zCMorphMeshProto::SearchAni, 0x0059ED20);
	ZENGIN_REGISTER_METHOD(zCMorphMeshProto, &zCMorphMeshProto::LoadMMB, 0x0059EDD0);
	ZENGIN_REGISTER_METHOD(zCMorphMeshProto, &zCMorphMeshProto::SaveMMB, 0x0059F5A0);
	ZENGIN_REGISTER_METHOD(zCMorphMeshProto, &zCMorphMeshProto::GenerateMorphAni, 0x0059F9C0);
	ZENGIN_REGISTER_METHOD(zCMorphMeshProto, &zCMorphMeshProto::Load3DSMAXAsc, 0x0059FF90);
	ZENGIN_REGISTER_METHOD(zCMorphMeshProto, &zCMorphMeshProto::ReadMorphRef, 0x005A0180);
	ZENGIN_REGISTER_METHOD(zCMorphMeshProto, &zCMorphMeshProto::ReadMorphAni, 0x005A04F0);
	ZENGIN_REGISTER_METHOD(zCMorphMeshProto, &zCMorphMeshProto::LoadMorphScript, 0x005A0E60);

	ZENGIN_REGISTER_CLASS(zCMorphMesh);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::zCMorphMesh_OnInit, 0x005A1470);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::Init, 0x005A1460);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::SearchAni, 0x005A1820);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::Render_novt, 0x005A1950);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::CalcVertPositions, 0x005A19E0);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::AdvanceAnis, 0x005A1E90);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMorphMesh, &zCMorphMesh::IsAniActive, int(zCMorphMesh::*)(zSTRING const&), 0x005A2090);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMorphMesh, &zCMorphMesh::IsAniActive, int(zCMorphMesh::*)(zCMorphMeshAni*), 0x005A2170);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMorphMesh, &zCMorphMesh::StopAni, void(zCMorphMesh::*)(zSTRING const&), 0x005A21B0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMorphMesh, &zCMorphMesh::StopAni, void(zCMorphMesh::*)(zCMorphMeshAni*), 0x005A22C0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMorphMesh, &zCMorphMesh::FadeOutAni, void(zCMorphMesh::*)(zSTRING const&), 0x005A2330);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMorphMesh, &zCMorphMesh::FadeOutAni, void(zCMorphMesh::*)(zCMorphMeshAni*), 0x005A2420);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMorphMesh, &zCMorphMesh::StartAni, void(zCMorphMesh::*)(zSTRING const&, float, float), 0x005A2480);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMorphMesh, &zCMorphMesh::StartAni, void(zCMorphMesh::*)(zCMorphMeshAni*, float, float), 0x005A2540);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::RemoveRandAni, 0x005A2730);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::AddRandAni, 0x005A27A0);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::ProcessRandAnis, 0x005A2940);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::SetTextureVar, 0x005A2A60);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::PrintStatus, 0x005A2AB0);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::_GetClassDef, 0x0059DE40);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::Render, 0x005A18D0);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::IsBBox3DLocal, 0x0059DE50);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::GetBBox3D, 0x005A1790);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::GetOBBox3D, 0x0059DE60);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::GetVisualName, 0x005A17F0);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::GetRenderSortKey, 0x0059DE70);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::CanTraceRay, 0x0059DE80);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::TraceRay, 0x005A2A80);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::GetFileExtension, 0x005A1720);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::LoadVisualVirtual, 0x005A1780);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::StartAnimation, 0x0059DE90);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::StopAnimation, 0x0059DF50);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::IsAnimationActive, 0x0059E060);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::GetAnyAnimation, 0x005A2460);

	ZENGIN_REGISTER_CLASS(zCMorphMeshConvertFileHandler);
	ZENGIN_REGISTER_METHOD(zCMorphMeshConvertFileHandler, &zCMorphMeshConvertFileHandler::zCMorphMeshConvertFileHandler_OnInit, 0x005A31B0);
	ZENGIN_REGISTER_METHOD(zCMorphMeshConvertFileHandler, &zCMorphMeshConvertFileHandler::HandleFile, 0x005A3290);

} // namespace Gothic_I_Addon
