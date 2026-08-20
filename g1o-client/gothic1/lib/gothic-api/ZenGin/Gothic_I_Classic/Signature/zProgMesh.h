namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(zTLazyMesh);
	ZENGIN_REGISTER_METHOD(zTLazyMesh, &zTLazyMesh::zTLazyMesh_OnInit, 0x005A1B00);

	ZENGIN_REGISTER_CLASS(zCProgMeshProto);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::zCProgMeshProto_OnInit, 0x005A4CB0);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::CalcRenderSortKey, 0x005A4F20);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::PackStaticVertexBuffers, 0x005A4FE0);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::CheckRayPolyIntersection, 0x005A5CE0);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::CheckRayPolyIntersection2Sided, 0x005A5FD0);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::GetNumTri, 0x005A6470);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::CalcLODRenderVertPerc, 0x005A66C0);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::CalcLODRenderArgs, 0x005A6870);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::CalcLODRenderArgsSubMesh, 0x005A6A90);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::RenderProgMesh, 0x005A6B40);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::RenderStatic, 0x005A7110);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::RenderStaticLOD, 0x005A7200);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::SoftwareTransformVerts, 0x005A7470);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::RenderDynamicLOD, 0x005A7780);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::CalcSubdiv, 0x005A7E30);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::CalcNumSubdivEdges, 0x005A7EF0);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::CalcSubdivSubMesh, 0x005A7F50);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::RenderDynamicSubdiv, 0x005A8270);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::RenderStaticLODShadow, 0x005A86F0);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::_GetClassDef, 0x005A4DF0);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::Render, 0x005A6B20);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::IsBBox3DLocal, 0x005A4AB0);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::GetBBox3D, 0x005A4AC0);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::GetOBBox3D, 0x005A4AF0);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::GetVisualName, 0x005A5230);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::DynLightVisual, 0x005A4B00);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::GetRenderSortKey, 0x005A4B10);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::CanTraceRay, 0x005A4B20);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::TraceRay, 0x005A6290);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::GetFileExtension, 0x005A5200);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::LoadVisualVirtual, 0x005A5220);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::Save, 0x005A8AB0);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::Load, 0x005A8F20);

	ZENGIN_REGISTER_CLASS(zCProgMeshProto::zCSubMesh);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto::zCSubMesh, &zCProgMeshProto::zCSubMesh::zCSubMesh_OnInit, 0x005A4BE0);

	ZENGIN_REGISTER_CLASS(zCProgMeshBuilder);
	ZENGIN_REGISTER_METHOD(zCProgMeshBuilder, &zCProgMeshBuilder::CreatePMTriPosList, 0x0059F080);
	ZENGIN_REGISTER_METHOD(zCProgMeshBuilder, &zCProgMeshBuilder::CalcPrelight, 0x0059F820);
	ZENGIN_REGISTER_METHOD(zCProgMeshBuilder, &zCProgMeshBuilder::CalcPosNormals, 0x0059F9B0);
	ZENGIN_REGISTER_METHOD(zCProgMeshBuilder, &zCProgMeshBuilder::CalcTriPlaneList, 0x0059FB00);
	ZENGIN_REGISTER_METHOD(zCProgMeshBuilder, &zCProgMeshBuilder::CalcSubdivData, 0x0059FF90);
	ZENGIN_REGISTER_METHOD(zCProgMeshBuilder, &zCProgMeshBuilder::CreateLazySubMesh, 0x005A0550);
	ZENGIN_REGISTER_METHOD(zCProgMeshBuilder, &zCProgMeshBuilder::CopySubMeshData, 0x005A0A60);
	ZENGIN_REGISTER_METHOD(zCProgMeshBuilder, &zCProgMeshBuilder::CreateFinalPMData, 0x005A0C70);
	ZENGIN_REGISTER_METHOD(zCProgMeshBuilder, &zCProgMeshBuilder::Clear, 0x005A1DA0);
	ZENGIN_REGISTER_METHOD(zCProgMeshBuilder, &zCProgMeshBuilder::BuildProgMeshProto, 0x005A1F90);

	ZENGIN_REGISTER_CLASS(zCMeshSoftSkin);
	ZENGIN_REGISTER_METHOD(zCMeshSoftSkin, &zCMeshSoftSkin::zCMeshSoftSkin_OnInit, 0x005A9750);
	ZENGIN_REGISTER_METHOD(zCMeshSoftSkin, &zCMeshSoftSkin::AllocVertWeightStream, 0x005A98F0);
	ZENGIN_REGISTER_METHOD(zCMeshSoftSkin, &zCMeshSoftSkin::DeleteVertWeightStream, 0x005A9950);
	ZENGIN_REGISTER_METHOD(zCMeshSoftSkin, &zCMeshSoftSkin::AddNumWeightEntry, 0x005A9980);
	ZENGIN_REGISTER_METHOD(zCMeshSoftSkin, &zCMeshSoftSkin::AddWeightEntry, 0x005A99A0);
	ZENGIN_REGISTER_METHOD(zCMeshSoftSkin, &zCMeshSoftSkin::ResetVertWeightIterator, 0x005A99E0);
	ZENGIN_REGISTER_METHOD(zCMeshSoftSkin, &zCMeshSoftSkin::GetVertWeightStreamSize, 0x005A99F0);
	ZENGIN_REGISTER_METHOD(zCMeshSoftSkin, &zCMeshSoftSkin::BuildNodeIndexList, 0x005A9A30);
	ZENGIN_REGISTER_METHOD(zCMeshSoftSkin, &zCMeshSoftSkin::DeleteNodeOBBList, 0x005A9C00);
	ZENGIN_REGISTER_METHOD(zCMeshSoftSkin, &zCMeshSoftSkin::BuildNodeOBBList, 0x005A9C70);
	ZENGIN_REGISTER_METHOD(zCMeshSoftSkin, &zCMeshSoftSkin::RenderSoftSkin, 0x005AA9F0);
	ZENGIN_REGISTER_METHOD(zCMeshSoftSkin, &zCMeshSoftSkin::_GetClassDef, 0x005A4B30);
	ZENGIN_REGISTER_METHOD(zCMeshSoftSkin, &zCMeshSoftSkin::Save, 0x005AA500);
	ZENGIN_REGISTER_METHOD(zCMeshSoftSkin, &zCMeshSoftSkin::Load, 0x005AA220);

	ZENGIN_REGISTER_CLASS(zCMeshSoftSkin::zTWeightEntry);
	ZENGIN_REGISTER_METHOD(zCMeshSoftSkin::zTWeightEntry, &zCMeshSoftSkin::zTWeightEntry::zTWeightEntry_OnInit, 0x00573470);

	ZENGIN_REGISTER_CLASS(zCProgMeshConvertFileHandler);
	ZENGIN_REGISTER_METHOD(zCProgMeshConvertFileHandler, &zCProgMeshConvertFileHandler::zCProgMeshConvertFileHandler_OnInit, 0x005AB060);
	ZENGIN_REGISTER_METHOD(zCProgMeshConvertFileHandler, &zCProgMeshConvertFileHandler::HandleFile, 0x005AB140);

} // namespace Gothic_I_Classic
