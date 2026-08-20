namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(zCMorphMeshAni);
	ZENGIN_REGISTER_METHOD(zCMorphMeshAni, &zCMorphMeshAni::zCMorphMeshAni_OnInit, 0x0059DBA0);
	ZENGIN_REGISTER_METHOD(zCMorphMeshAni, &zCMorphMeshAni::SetBlending, 0x0059DCC0);
	ZENGIN_REGISTER_METHOD(zCMorphMeshAni, &zCMorphMeshAni::Load, 0x0059DD30);
	ZENGIN_REGISTER_METHOD(zCMorphMeshAni, &zCMorphMeshAni::Save, 0x0059DE40);
	ZENGIN_REGISTER_METHOD(zCMorphMeshAni, &zCMorphMeshAni::SetFlagsByString, 0x0059FB50);

	ZENGIN_REGISTER_CLASS(zCMorphMeshProto);
	ZENGIN_REGISTER_METHOD(zCMorphMeshProto, &zCMorphMeshProto::zCMorphMeshProto_OnInit, 0x0059DF50);
	ZENGIN_REGISTER_METHOD(zCMorphMeshProto, &zCMorphMeshProto::Release, 0x0059E300);
	ZENGIN_REGISTER_METHOD(zCMorphMeshProto, &zCMorphMeshProto::SearchAni, 0x0059E580);
	ZENGIN_REGISTER_METHOD(zCMorphMeshProto, &zCMorphMeshProto::LoadMMB, 0x0059E630);
	ZENGIN_REGISTER_METHOD(zCMorphMeshProto, &zCMorphMeshProto::SaveMMB, 0x0059ED80);
	ZENGIN_REGISTER_METHOD(zCMorphMeshProto, &zCMorphMeshProto::GenerateMorphAni, 0x0059F190);
	ZENGIN_REGISTER_METHOD(zCMorphMeshProto, &zCMorphMeshProto::Load3DSMAXAsc, 0x0059F690);
	ZENGIN_REGISTER_METHOD(zCMorphMeshProto, &zCMorphMeshProto::ReadMorphRef, 0x0059F8F0);
	ZENGIN_REGISTER_METHOD(zCMorphMeshProto, &zCMorphMeshProto::ReadMorphAni, 0x0059FC00);
	ZENGIN_REGISTER_METHOD(zCMorphMeshProto, &zCMorphMeshProto::LoadMorphScript, 0x005A0460);

	ZENGIN_REGISTER_CLASS(zCMorphMesh);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::zCMorphMesh_OnInit, 0x005A09F0);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::Init, 0x005A09D0);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::SearchAni, 0x005A0D60);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::Render_novt, 0x005A0E90);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::CalcVertPositions, 0x005A0F20);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::AdvanceAnis, 0x005A12D0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMorphMesh, &zCMorphMesh::IsAniActive, int(zCMorphMesh::*)(zSTRING const&), 0x005A14E0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMorphMesh, &zCMorphMesh::IsAniActive, int(zCMorphMesh::*)(zCMorphMeshAni*), 0x005A15C0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMorphMesh, &zCMorphMesh::StopAni, void(zCMorphMesh::*)(zSTRING const&), 0x005A1600);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMorphMesh, &zCMorphMesh::StopAni, void(zCMorphMesh::*)(zCMorphMeshAni*), 0x005A1720);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMorphMesh, &zCMorphMesh::FadeOutAni, void(zCMorphMesh::*)(zSTRING const&), 0x005A17A0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMorphMesh, &zCMorphMesh::FadeOutAni, void(zCMorphMesh::*)(zCMorphMeshAni*), 0x005A1890);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMorphMesh, &zCMorphMesh::StartAni, void(zCMorphMesh::*)(zSTRING const&, float, float), 0x005A1900);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMorphMesh, &zCMorphMesh::StartAni, void(zCMorphMesh::*)(zCMorphMeshAni*, float, float), 0x005A19D0);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::RemoveRandAni, 0x005A1B90);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::AddRandAni, 0x005A1C00);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::ProcessRandAnis, 0x005A1D70);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::SetTextureVar, 0x005A1E80);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::PrintStatus, 0x005A1EB0);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::_GetClassDef, 0x0059D840);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::Render, 0x005A0E10);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::IsBBox3DLocal, 0x0059D850);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::GetBBox3D, 0x005A0CF0);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::GetOBBox3D, 0x0059D860);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::GetVisualName, 0x005A0D30);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::GetRenderSortKey, 0x0059D870);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::CanTraceRay, 0x0059D8A0);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::TraceRay, 0x005A1E90);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::GetFileExtension, 0x005A0C80);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::GetAlphaTestingEnabled, 0x0059D880);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::SetAlphaTestingEnabled, 0x0059D890);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::LoadVisualVirtual, 0x005A0CE0);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::StartAnimation, 0x0059D8B0);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::StopAnimation, 0x0059D970);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::IsAnimationActive, 0x0059DA90);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::GetAnyAnimation, 0x005A18E0);

	ZENGIN_REGISTER_CLASS(zCMorphMeshConvertFileHandler);
	ZENGIN_REGISTER_METHOD(zCMorphMeshConvertFileHandler, &zCMorphMeshConvertFileHandler::zCMorphMeshConvertFileHandler_OnInit, 0x005A2600);
	ZENGIN_REGISTER_METHOD(zCMorphMeshConvertFileHandler, &zCMorphMeshConvertFileHandler::HandleFile, 0x005A26E0);

} // namespace Gothic_II_Classic
