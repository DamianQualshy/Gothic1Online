namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(zCMorphMeshAni);
	ZENGIN_REGISTER_METHOD(zCMorphMeshAni, &zCMorphMeshAni::zCMorphMeshAni_OnInit, 0x005A3100);
	ZENGIN_REGISTER_METHOD(zCMorphMeshAni, &zCMorphMeshAni::SetBlending, 0x005A3220);
	ZENGIN_REGISTER_METHOD(zCMorphMeshAni, &zCMorphMeshAni::Load, 0x005A3290);
	ZENGIN_REGISTER_METHOD(zCMorphMeshAni, &zCMorphMeshAni::Save, 0x005A33A0);
	ZENGIN_REGISTER_METHOD(zCMorphMeshAni, &zCMorphMeshAni::SetFlagsByString, 0x005A50B0);

	ZENGIN_REGISTER_CLASS(zCMorphMeshProto);
	ZENGIN_REGISTER_METHOD(zCMorphMeshProto, &zCMorphMeshProto::zCMorphMeshProto_OnInit, 0x005A34B0);
	ZENGIN_REGISTER_METHOD(zCMorphMeshProto, &zCMorphMeshProto::Release, 0x005A3860);
	ZENGIN_REGISTER_METHOD(zCMorphMeshProto, &zCMorphMeshProto::SearchAni, 0x005A3AE0);
	ZENGIN_REGISTER_METHOD(zCMorphMeshProto, &zCMorphMeshProto::LoadMMB, 0x005A3B90);
	ZENGIN_REGISTER_METHOD(zCMorphMeshProto, &zCMorphMeshProto::SaveMMB, 0x005A42E0);
	ZENGIN_REGISTER_METHOD(zCMorphMeshProto, &zCMorphMeshProto::GenerateMorphAni, 0x005A46F0);
	ZENGIN_REGISTER_METHOD(zCMorphMeshProto, &zCMorphMeshProto::Load3DSMAXAsc, 0x005A4BF0);
	ZENGIN_REGISTER_METHOD(zCMorphMeshProto, &zCMorphMeshProto::ReadMorphRef, 0x005A4E50);
	ZENGIN_REGISTER_METHOD(zCMorphMeshProto, &zCMorphMeshProto::ReadMorphAni, 0x005A5160);
	ZENGIN_REGISTER_METHOD(zCMorphMeshProto, &zCMorphMeshProto::LoadMorphScript, 0x005A59C0);

	ZENGIN_REGISTER_CLASS(zCMorphMesh);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::zCMorphMesh_OnInit, 0x005A5F50);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::Init, 0x005A5F30);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::SearchAni, 0x005A62C0);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::Render_novt, 0x005A63F0);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::CalcVertPositions, 0x005A6480);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::AdvanceAnis, 0x005A6830);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMorphMesh, &zCMorphMesh::IsAniActive, int(zCMorphMesh::*)(zSTRING const&), 0x005A6A40);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMorphMesh, &zCMorphMesh::IsAniActive, int(zCMorphMesh::*)(zCMorphMeshAni*), 0x005A6B20);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMorphMesh, &zCMorphMesh::StopAni, void(zCMorphMesh::*)(zSTRING const&), 0x005A6B60);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMorphMesh, &zCMorphMesh::StopAni, void(zCMorphMesh::*)(zCMorphMeshAni*), 0x005A6C80);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMorphMesh, &zCMorphMesh::FadeOutAni, void(zCMorphMesh::*)(zSTRING const&), 0x005A6D00);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMorphMesh, &zCMorphMesh::FadeOutAni, void(zCMorphMesh::*)(zCMorphMeshAni*), 0x005A6DF0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMorphMesh, &zCMorphMesh::StartAni, void(zCMorphMesh::*)(zSTRING const&, float, float), 0x005A6E60);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMorphMesh, &zCMorphMesh::StartAni, void(zCMorphMesh::*)(zCMorphMeshAni*, float, float), 0x005A6F30);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::RemoveRandAni, 0x005A70F0);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::AddRandAni, 0x005A7160);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::ProcessRandAnis, 0x005A72D0);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::SetTextureVar, 0x005A73E0);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::PrintStatus, 0x005A7410);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::_GetClassDef, 0x005A2DA0);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::Render, 0x005A6370);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::IsBBox3DLocal, 0x005A2DB0);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::GetBBox3D, 0x005A6250);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::GetOBBox3D, 0x005A2DC0);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::GetVisualName, 0x005A6290);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::GetRenderSortKey, 0x005A2DD0);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::CanTraceRay, 0x005A2E00);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::TraceRay, 0x005A73F0);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::GetFileExtension, 0x005A61E0);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::GetAlphaTestingEnabled, 0x005A2DE0);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::SetAlphaTestingEnabled, 0x005A2DF0);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::LoadVisualVirtual, 0x005A6240);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::StartAnimation, 0x005A2E10);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::StopAnimation, 0x005A2ED0);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::IsAnimationActive, 0x005A2FF0);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::GetAnyAnimation, 0x005A6E40);

	ZENGIN_REGISTER_CLASS(zCMorphMeshConvertFileHandler);
	ZENGIN_REGISTER_METHOD(zCMorphMeshConvertFileHandler, &zCMorphMeshConvertFileHandler::zCMorphMeshConvertFileHandler_OnInit, 0x005A7B60);
	ZENGIN_REGISTER_METHOD(zCMorphMeshConvertFileHandler, &zCMorphMeshConvertFileHandler::HandleFile, 0x005A7C40);

} // namespace Gothic_II_Addon
