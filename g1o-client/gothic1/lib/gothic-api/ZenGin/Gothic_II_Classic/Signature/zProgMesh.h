namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(zTLazyMesh);
	ZENGIN_REGISTER_METHOD(zTLazyMesh, &zTLazyMesh::zTLazyMesh_OnInit, 0x005BDE40);

	ZENGIN_REGISTER_CLASS(zCProgMeshProto);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::zCProgMeshProto_OnInit, 0x005C0F70);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::CalcRenderSortKey, 0x005C11F0);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::PackStaticVertexBuffers, 0x005C12B0);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::CheckRayPolyIntersection, 0x005C2030);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::CheckRayPolyIntersection2Sided, 0x005C2320);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::GetNumTri, 0x005C27C0);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::GetPolygon, 0x005C27E0);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::GetMesh, 0x005C2970);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::CalcLODRenderVertPerc, 0x005C3040);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::CalcLODRenderArgs, 0x005C31F0);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::CalcLODRenderArgsSubMesh, 0x005C3430);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::RenderProgMesh, 0x005C36D0);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::RenderStatic, 0x005C3CA0);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::RenderStaticLOD, 0x005C3E80);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::SoftwareTransformVerts, 0x005C41C0);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::RenderDynamicLOD, 0x005C4FA0);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::CalcSubdiv, 0x005C5870);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::CalcNumSubdivEdges, 0x005C5930);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::CalcSubdivSubMesh, 0x005C5990);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::RenderDynamicSubdiv, 0x005C5CB0);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::RenderStaticLODShadow, 0x005C6340);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::_GetClassDef, 0x005C10C0);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::Render, 0x005C34C0);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::IsBBox3DLocal, 0x005C0D40);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::GetBBox3D, 0x005C0D50);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::GetOBBox3D, 0x005C0D80);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::GetVisualName, 0x005C15B0);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::DynLightVisual, 0x005C0D90);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::GetRenderSortKey, 0x005C0DA0);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::CanTraceRay, 0x005C0DB0);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::TraceRay, 0x005C25E0);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::GetFileExtension, 0x005C1580);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::GetAlphaTestingEnabled, 0x005C0DC0);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::SetAlphaTestingEnabled, 0x005C0DD0);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::LoadVisualVirtual, 0x005C15A0);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::Save, 0x005C6E60);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::Load, 0x005C72C0);

	ZENGIN_REGISTER_CLASS(zCProgMeshProto::zCSubMesh);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto::zCSubMesh, &zCProgMeshProto::zCSubMesh::zCSubMesh_OnInit, 0x005C0EA0);

	ZENGIN_REGISTER_CLASS(zCProgMeshBuilder);
	ZENGIN_REGISTER_METHOD(zCProgMeshBuilder, &zCProgMeshBuilder::CreatePMTriPosList, 0x005BB3B0);
	ZENGIN_REGISTER_METHOD(zCProgMeshBuilder, &zCProgMeshBuilder::CalcPrelight, 0x005BBB40);
	ZENGIN_REGISTER_METHOD(zCProgMeshBuilder, &zCProgMeshBuilder::CalcPosNormals, 0x005BBCE0);
	ZENGIN_REGISTER_METHOD(zCProgMeshBuilder, &zCProgMeshBuilder::CalcTriPlaneList, 0x005BBE30);
	ZENGIN_REGISTER_METHOD(zCProgMeshBuilder, &zCProgMeshBuilder::CalcSubdivData, 0x005BC340);
	ZENGIN_REGISTER_METHOD(zCProgMeshBuilder, &zCProgMeshBuilder::CreateLazySubMesh, 0x005BC8E0);
	ZENGIN_REGISTER_METHOD(zCProgMeshBuilder, &zCProgMeshBuilder::CopySubMeshData, 0x005BCDD0);
	ZENGIN_REGISTER_METHOD(zCProgMeshBuilder, &zCProgMeshBuilder::CreateFinalPMData, 0x005BCFE0);
	ZENGIN_REGISTER_METHOD(zCProgMeshBuilder, &zCProgMeshBuilder::Clear, 0x005BE0E0);
	ZENGIN_REGISTER_METHOD(zCProgMeshBuilder, &zCProgMeshBuilder::BuildProgMeshProto, 0x005BE2D0);

	ZENGIN_REGISTER_CLASS(zCMeshSoftSkin);
	ZENGIN_REGISTER_METHOD(zCMeshSoftSkin, &zCMeshSoftSkin::zCMeshSoftSkin_OnInit, 0x005C7C20);
	ZENGIN_REGISTER_METHOD(zCMeshSoftSkin, &zCMeshSoftSkin::AllocVertWeightStream, 0x005C7DC0);
	ZENGIN_REGISTER_METHOD(zCMeshSoftSkin, &zCMeshSoftSkin::DeleteVertWeightStream, 0x005C7E10);
	ZENGIN_REGISTER_METHOD(zCMeshSoftSkin, &zCMeshSoftSkin::AddNumWeightEntry, 0x005C7E40);
	ZENGIN_REGISTER_METHOD(zCMeshSoftSkin, &zCMeshSoftSkin::AddWeightEntry, 0x005C7E60);
	ZENGIN_REGISTER_METHOD(zCMeshSoftSkin, &zCMeshSoftSkin::ResetVertWeightIterator, 0x005C7EA0);
	ZENGIN_REGISTER_METHOD(zCMeshSoftSkin, &zCMeshSoftSkin::GetVertWeightStreamSize, 0x005C7EB0);
	ZENGIN_REGISTER_METHOD(zCMeshSoftSkin, &zCMeshSoftSkin::BuildNodeIndexList, 0x005C7EF0);
	ZENGIN_REGISTER_METHOD(zCMeshSoftSkin, &zCMeshSoftSkin::DeleteNodeOBBList, 0x005C80A0);
	ZENGIN_REGISTER_METHOD(zCMeshSoftSkin, &zCMeshSoftSkin::BuildNodeOBBList, 0x005C8110);
	ZENGIN_REGISTER_METHOD(zCMeshSoftSkin, &zCMeshSoftSkin::RenderSoftSkin, 0x005C8EF0);
	ZENGIN_REGISTER_METHOD(zCMeshSoftSkin, &zCMeshSoftSkin::_GetClassDef, 0x005C0DE0);
	ZENGIN_REGISTER_METHOD(zCMeshSoftSkin, &zCMeshSoftSkin::Save, 0x005C8980);
	ZENGIN_REGISTER_METHOD(zCMeshSoftSkin, &zCMeshSoftSkin::Load, 0x005C86C0);

	ZENGIN_REGISTER_CLASS(zCMeshSoftSkin::zTWeightEntry);
	ZENGIN_REGISTER_METHOD(zCMeshSoftSkin::zTWeightEntry, &zCMeshSoftSkin::zTWeightEntry::zTWeightEntry_OnInit, 0x00588690);

	ZENGIN_REGISTER_CLASS(zCProgMeshConvertFileHandler);
	ZENGIN_REGISTER_METHOD(zCProgMeshConvertFileHandler, &zCProgMeshConvertFileHandler::zCProgMeshConvertFileHandler_OnInit, 0x005C9560);
	ZENGIN_REGISTER_METHOD(zCProgMeshConvertFileHandler, &zCProgMeshConvertFileHandler::HandleFile, 0x005C9640);

} // namespace Gothic_II_Classic
