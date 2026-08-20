namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(zTLazyMesh);
	ZENGIN_REGISTER_METHOD(zTLazyMesh, &zTLazyMesh::zTLazyMesh_OnInit, 0x005BE240);

	ZENGIN_REGISTER_CLASS(zCProgMeshProto);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::zCProgMeshProto_OnInit, 0x005C1450);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::CalcRenderSortKey, 0x005C16C0);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::PackStaticVertexBuffers, 0x005C1780);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::CheckRayPolyIntersection, 0x005C2590);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::CheckRayPolyIntersection2Sided, 0x005C28A0);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::GetNumTri, 0x005C2D70);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::CalcLODRenderVertPerc, 0x005C2FD0);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::CalcLODRenderArgs, 0x005C31D0);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::CalcLODRenderArgsSubMesh, 0x005C33C0);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::RenderProgMesh, 0x005C3480);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::RenderStatic, 0x005C3A90);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::RenderStaticLOD, 0x005C3B80);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::SoftwareTransformVerts, 0x005C3E00);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::RenderDynamicLOD, 0x005C4180);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::CalcSubdiv, 0x005C4910);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::CalcNumSubdivEdges, 0x005C49E0);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::CalcSubdivSubMesh, 0x005C4A40);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::RenderDynamicSubdiv, 0x005C4DB0);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::RenderStaticLODShadow, 0x005C5210);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::_GetClassDef, 0x005C1590);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::Render, 0x005C3460);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::IsBBox3DLocal, 0x005C1250);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::GetBBox3D, 0x005C1260);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::GetOBBox3D, 0x005C1290);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::GetVisualName, 0x005C19C0);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::DynLightVisual, 0x005C12A0);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::GetRenderSortKey, 0x005C12B0);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::CanTraceRay, 0x005C12C0);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::TraceRay, 0x005C2B90);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::GetFileExtension, 0x005C1990);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::LoadVisualVirtual, 0x005C19B0);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::Save, 0x005C55E0);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::Load, 0x005C5A20);

	ZENGIN_REGISTER_CLASS(zCProgMeshProto::zCSubMesh);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto::zCSubMesh, &zCProgMeshProto::zCSubMesh::zCSubMesh_OnInit, 0x005C1380);

	ZENGIN_REGISTER_CLASS(zCProgMeshBuilder);
	ZENGIN_REGISTER_METHOD(zCProgMeshBuilder, &zCProgMeshBuilder::CreatePMTriPosList, 0x005BB6B0);
	ZENGIN_REGISTER_METHOD(zCProgMeshBuilder, &zCProgMeshBuilder::CalcPrelight, 0x005BBEA0);
	ZENGIN_REGISTER_METHOD(zCProgMeshBuilder, &zCProgMeshBuilder::CalcPosNormals, 0x005BC050);
	ZENGIN_REGISTER_METHOD(zCProgMeshBuilder, &zCProgMeshBuilder::CalcTriPlaneList, 0x005BC190);
	ZENGIN_REGISTER_METHOD(zCProgMeshBuilder, &zCProgMeshBuilder::CalcSubdivData, 0x005BC610);
	ZENGIN_REGISTER_METHOD(zCProgMeshBuilder, &zCProgMeshBuilder::CreateLazySubMesh, 0x005BCC50);
	ZENGIN_REGISTER_METHOD(zCProgMeshBuilder, &zCProgMeshBuilder::CopySubMeshData, 0x005BD1B0);
	ZENGIN_REGISTER_METHOD(zCProgMeshBuilder, &zCProgMeshBuilder::CreateFinalPMData, 0x005BD3C0);
	ZENGIN_REGISTER_METHOD(zCProgMeshBuilder, &zCProgMeshBuilder::Clear, 0x005BE4E0);
	ZENGIN_REGISTER_METHOD(zCProgMeshBuilder, &zCProgMeshBuilder::BuildProgMeshProto, 0x005BE6D0);

	ZENGIN_REGISTER_CLASS(zCMeshSoftSkin);
	ZENGIN_REGISTER_METHOD(zCMeshSoftSkin, &zCMeshSoftSkin::zCMeshSoftSkin_OnInit, 0x005C6270);
	ZENGIN_REGISTER_METHOD(zCMeshSoftSkin, &zCMeshSoftSkin::AllocVertWeightStream, 0x005C6410);
	ZENGIN_REGISTER_METHOD(zCMeshSoftSkin, &zCMeshSoftSkin::DeleteVertWeightStream, 0x005C6470);
	ZENGIN_REGISTER_METHOD(zCMeshSoftSkin, &zCMeshSoftSkin::AddNumWeightEntry, 0x005C64A0);
	ZENGIN_REGISTER_METHOD(zCMeshSoftSkin, &zCMeshSoftSkin::AddWeightEntry, 0x005C64C0);
	ZENGIN_REGISTER_METHOD(zCMeshSoftSkin, &zCMeshSoftSkin::ResetVertWeightIterator, 0x005C6500);
	ZENGIN_REGISTER_METHOD(zCMeshSoftSkin, &zCMeshSoftSkin::GetVertWeightStreamSize, 0x005C6510);
	ZENGIN_REGISTER_METHOD(zCMeshSoftSkin, &zCMeshSoftSkin::BuildNodeIndexList, 0x005C6560);
	ZENGIN_REGISTER_METHOD(zCMeshSoftSkin, &zCMeshSoftSkin::DeleteNodeOBBList, 0x005C6720);
	ZENGIN_REGISTER_METHOD(zCMeshSoftSkin, &zCMeshSoftSkin::BuildNodeOBBList, 0x005C6790);
	ZENGIN_REGISTER_METHOD(zCMeshSoftSkin, &zCMeshSoftSkin::RenderSoftSkin, 0x005C7580);
	ZENGIN_REGISTER_METHOD(zCMeshSoftSkin, &zCMeshSoftSkin::_GetClassDef, 0x005C12D0);
	ZENGIN_REGISTER_METHOD(zCMeshSoftSkin, &zCMeshSoftSkin::Save, 0x005C7060);
	ZENGIN_REGISTER_METHOD(zCMeshSoftSkin, &zCMeshSoftSkin::Load, 0x005C6D60);

	ZENGIN_REGISTER_CLASS(zCMeshSoftSkin::zTWeightEntry);
	ZENGIN_REGISTER_METHOD(zCMeshSoftSkin::zTWeightEntry, &zCMeshSoftSkin::zTWeightEntry::zTWeightEntry_OnInit, 0x0058CD90);

	ZENGIN_REGISTER_CLASS(zCProgMeshConvertFileHandler);
	ZENGIN_REGISTER_METHOD(zCProgMeshConvertFileHandler, &zCProgMeshConvertFileHandler::zCProgMeshConvertFileHandler_OnInit, 0x005C7C80);
	ZENGIN_REGISTER_METHOD(zCProgMeshConvertFileHandler, &zCProgMeshConvertFileHandler::HandleFile, 0x005C7D60);

} // namespace Gothic_I_Addon
