namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(zCMorphMeshAni);
	ZENGIN_REGISTER_METHOD(zCMorphMeshAni, &zCMorphMeshAni::zCMorphMeshAni_OnInit, 0x00583630);
	ZENGIN_REGISTER_METHOD(zCMorphMeshAni, &zCMorphMeshAni::SetBlending, 0x00583750);
	ZENGIN_REGISTER_METHOD(zCMorphMeshAni, &zCMorphMeshAni::Load, 0x005837C0);
	ZENGIN_REGISTER_METHOD(zCMorphMeshAni, &zCMorphMeshAni::Save, 0x005838F0);
	ZENGIN_REGISTER_METHOD(zCMorphMeshAni, &zCMorphMeshAni::SetFlagsByString, 0x00585740);

	ZENGIN_REGISTER_CLASS(zCMorphMeshProto);
	ZENGIN_REGISTER_METHOD(zCMorphMeshProto, &zCMorphMeshProto::zCMorphMeshProto_OnInit, 0x00583A00);
	ZENGIN_REGISTER_METHOD(zCMorphMeshProto, &zCMorphMeshProto::Release, 0x00583E10);
	ZENGIN_REGISTER_METHOD(zCMorphMeshProto, &zCMorphMeshProto::SearchAni, 0x00584180);
	ZENGIN_REGISTER_METHOD(zCMorphMeshProto, &zCMorphMeshProto::LoadMMB, 0x00584230);
	ZENGIN_REGISTER_METHOD(zCMorphMeshProto, &zCMorphMeshProto::SaveMMB, 0x00584980);
	ZENGIN_REGISTER_METHOD(zCMorphMeshProto, &zCMorphMeshProto::GenerateMorphAni, 0x00584D90);
	ZENGIN_REGISTER_METHOD(zCMorphMeshProto, &zCMorphMeshProto::Load3DSMAXAsc, 0x005852F0);
	ZENGIN_REGISTER_METHOD(zCMorphMeshProto, &zCMorphMeshProto::ReadMorphRef, 0x005854B0);
	ZENGIN_REGISTER_METHOD(zCMorphMeshProto, &zCMorphMeshProto::ReadMorphAni, 0x005857F0);
	ZENGIN_REGISTER_METHOD(zCMorphMeshProto, &zCMorphMeshProto::LoadMorphScript, 0x00586020);

	ZENGIN_REGISTER_CLASS(zCMorphMesh);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::zCMorphMesh_OnInit, 0x005865A0);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::Init, 0x00586590);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::SearchAni, 0x00586920);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::Render_novt, 0x00586A50);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::CalcVertPositions, 0x00586AE0);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::AdvanceAnis, 0x00586E90);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMorphMesh, &zCMorphMesh::IsAniActive, int(zCMorphMesh::*)(zSTRING const&), 0x005870A0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMorphMesh, &zCMorphMesh::IsAniActive, int(zCMorphMesh::*)(zCMorphMeshAni*), 0x00587180);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMorphMesh, &zCMorphMesh::StopAni, void(zCMorphMesh::*)(zSTRING const&), 0x005871C0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMorphMesh, &zCMorphMesh::StopAni, void(zCMorphMesh::*)(zCMorphMeshAni*), 0x005872E0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMorphMesh, &zCMorphMesh::FadeOutAni, void(zCMorphMesh::*)(zSTRING const&), 0x00587360);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMorphMesh, &zCMorphMesh::FadeOutAni, void(zCMorphMesh::*)(zCMorphMeshAni*), 0x00587450);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMorphMesh, &zCMorphMesh::StartAni, void(zCMorphMesh::*)(zSTRING const&, float, float), 0x005874C0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMorphMesh, &zCMorphMesh::StartAni, void(zCMorphMesh::*)(zCMorphMeshAni*, float, float), 0x00587590);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::RemoveRandAni, 0x00587770);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::AddRandAni, 0x005877E0);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::ProcessRandAnis, 0x00587960);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::SetTextureVar, 0x00587A70);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::PrintStatus, 0x00587AA0);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::_GetClassDef, 0x005832F0);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::Render, 0x005869D0);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::IsBBox3DLocal, 0x00583300);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::GetBBox3D, 0x005868B0);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::GetOBBox3D, 0x00583310);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::GetVisualName, 0x005868F0);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::GetRenderSortKey, 0x00583320);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::CanTraceRay, 0x00583330);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::TraceRay, 0x00587A80);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::GetFileExtension, 0x00586840);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::LoadVisualVirtual, 0x005868A0);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::StartAnimation, 0x00583340);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::StopAnimation, 0x00583400);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::IsAnimationActive, 0x00583520);
	ZENGIN_REGISTER_METHOD(zCMorphMesh, &zCMorphMesh::GetAnyAnimation, 0x005874A0);

	ZENGIN_REGISTER_CLASS(zCMorphMeshConvertFileHandler);
	ZENGIN_REGISTER_METHOD(zCMorphMeshConvertFileHandler, &zCMorphMeshConvertFileHandler::zCMorphMeshConvertFileHandler_OnInit, 0x005880C0);
	ZENGIN_REGISTER_METHOD(zCMorphMeshConvertFileHandler, &zCMorphMeshConvertFileHandler::HandleFile, 0x005881A0);

} // namespace Gothic_I_Classic
