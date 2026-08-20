namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(zTLazyMesh);
	ZENGIN_REGISTER_METHOD(zTLazyMesh, &zTLazyMesh::zTLazyMesh_OnInit, 0x005C39B0);

	ZENGIN_REGISTER_CLASS(zCProgMeshProto);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::zCProgMeshProto_OnInit, 0x005C6AF0);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::CalcRenderSortKey, 0x005C6D70);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::PackStaticVertexBuffers, 0x005C6E30);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::CheckRayPolyIntersection, 0x005C7BF0);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::CheckRayPolyIntersection2Sided, 0x005C7EE0);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::GetNumTri, 0x005C8380);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::GetPolygon, 0x005C83A0);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::GetMesh, 0x005C8530);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::GetLowestLODNumPolys, 0x005C89B0);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::GetLowestLODPoly, 0x005C89D0);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::CalcLODRenderVertPerc, 0x005C8DF0);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::CalcLODRenderArgs, 0x005C8FA0);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::CalcLODRenderArgsMin, 0x005C91E0);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::CalcLODRenderArgsSubMesh, 0x005C93E0);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::RenderProgMesh, 0x005C9680);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::RenderStatic, 0x005C9C50);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::RenderStaticLOD, 0x005C9E30);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::SoftwareTransformVerts, 0x005CA170);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::RenderDynamicLOD, 0x005CAF50);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::CalcSubdiv, 0x005CB820);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::CalcNumSubdivEdges, 0x005CB8E0);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::CalcSubdivSubMesh, 0x005CB940);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::RenderDynamicSubdiv, 0x005CBC60);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::RenderStaticLODShadow, 0x005CC2F0);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::_GetClassDef, 0x005C6C40);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::Render, 0x005C9470);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::IsBBox3DLocal, 0x005C68B0);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::GetBBox3D, 0x005C68C0);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::GetOBBox3D, 0x005C68F0);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::GetVisualName, 0x005C7130);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::DynLightVisual, 0x005C6900);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::GetRenderSortKey, 0x005C6910);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::CanTraceRay, 0x005C6920);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::TraceRay, 0x005C81A0);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::GetFileExtension, 0x005C7100);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::GetAlphaTestingEnabled, 0x005C6930);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::SetAlphaTestingEnabled, 0x005C6940);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::LoadVisualVirtual, 0x005C7120);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::Load, 0x005CD270);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto, &zCProgMeshProto::Save, 0x005CCE10);

	ZENGIN_REGISTER_CLASS(zCProgMeshProto::zCSubMesh);
	ZENGIN_REGISTER_METHOD(zCProgMeshProto::zCSubMesh, &zCProgMeshProto::zCSubMesh::zCSubMesh_OnInit, 0x005C6A20);

	ZENGIN_REGISTER_CLASS(zCProgMeshBuilder);
	ZENGIN_REGISTER_METHOD(zCProgMeshBuilder, &zCProgMeshBuilder::CreatePMTriPosList, 0x005C0F20);
	ZENGIN_REGISTER_METHOD(zCProgMeshBuilder, &zCProgMeshBuilder::CalcPrelight, 0x005C16B0);
	ZENGIN_REGISTER_METHOD(zCProgMeshBuilder, &zCProgMeshBuilder::CalcPosNormals, 0x005C1850);
	ZENGIN_REGISTER_METHOD(zCProgMeshBuilder, &zCProgMeshBuilder::CalcTriPlaneList, 0x005C19A0);
	ZENGIN_REGISTER_METHOD(zCProgMeshBuilder, &zCProgMeshBuilder::CalcSubdivData, 0x005C1EB0);
	ZENGIN_REGISTER_METHOD(zCProgMeshBuilder, &zCProgMeshBuilder::CreateLazySubMesh, 0x005C2450);
	ZENGIN_REGISTER_METHOD(zCProgMeshBuilder, &zCProgMeshBuilder::CopySubMeshData, 0x005C2940);
	ZENGIN_REGISTER_METHOD(zCProgMeshBuilder, &zCProgMeshBuilder::CreateFinalPMData, 0x005C2B50);
	ZENGIN_REGISTER_METHOD(zCProgMeshBuilder, &zCProgMeshBuilder::Clear, 0x005C3C50);
	ZENGIN_REGISTER_METHOD(zCProgMeshBuilder, &zCProgMeshBuilder::BuildProgMeshProto, 0x005C3E40);

	ZENGIN_REGISTER_CLASS(zCMeshSoftSkin);
	ZENGIN_REGISTER_METHOD(zCMeshSoftSkin, &zCMeshSoftSkin::zCMeshSoftSkin_OnInit, 0x005CDBD0);
	ZENGIN_REGISTER_METHOD(zCMeshSoftSkin, &zCMeshSoftSkin::AllocVertWeightStream, 0x005CDD70);
	ZENGIN_REGISTER_METHOD(zCMeshSoftSkin, &zCMeshSoftSkin::DeleteVertWeightStream, 0x005CDDC0);
	ZENGIN_REGISTER_METHOD(zCMeshSoftSkin, &zCMeshSoftSkin::AddNumWeightEntry, 0x005CDDF0);
	ZENGIN_REGISTER_METHOD(zCMeshSoftSkin, &zCMeshSoftSkin::AddWeightEntry, 0x005CDE10);
	ZENGIN_REGISTER_METHOD(zCMeshSoftSkin, &zCMeshSoftSkin::ResetVertWeightIterator, 0x005CDE50);
	ZENGIN_REGISTER_METHOD(zCMeshSoftSkin, &zCMeshSoftSkin::GetVertWeightStreamSize, 0x005CDE60);
	ZENGIN_REGISTER_METHOD(zCMeshSoftSkin, &zCMeshSoftSkin::BuildNodeIndexList, 0x005CDEA0);
	ZENGIN_REGISTER_METHOD(zCMeshSoftSkin, &zCMeshSoftSkin::DeleteNodeOBBList, 0x005CE050);
	ZENGIN_REGISTER_METHOD(zCMeshSoftSkin, &zCMeshSoftSkin::BuildNodeOBBList, 0x005CE0C0);
	ZENGIN_REGISTER_METHOD(zCMeshSoftSkin, &zCMeshSoftSkin::RenderSoftSkin, 0x005CEEA0);
	ZENGIN_REGISTER_METHOD(zCMeshSoftSkin, &zCMeshSoftSkin::SetupLowestLOD, 0x005CF530);
	ZENGIN_REGISTER_METHOD(zCMeshSoftSkin, &zCMeshSoftSkin::GetLowestLODNumPolys, 0x005CFFC0);
	ZENGIN_REGISTER_METHOD(zCMeshSoftSkin, &zCMeshSoftSkin::GetLowestLODPoly, 0x005CFFD0);
	ZENGIN_REGISTER_METHOD(zCMeshSoftSkin, &zCMeshSoftSkin::_GetClassDef, 0x005C6950);
	ZENGIN_REGISTER_METHOD(zCMeshSoftSkin, &zCMeshSoftSkin::Load, 0x005CE670);
	ZENGIN_REGISTER_METHOD(zCMeshSoftSkin, &zCMeshSoftSkin::Save, 0x005CE930);

	ZENGIN_REGISTER_CLASS(zCMeshSoftSkin::zTWeightEntry);
	ZENGIN_REGISTER_METHOD(zCMeshSoftSkin::zTWeightEntry, &zCMeshSoftSkin::zTWeightEntry::zTWeightEntry_OnInit, 0x0058DBF0);

	ZENGIN_REGISTER_CLASS(zCProgMeshConvertFileHandler);
	ZENGIN_REGISTER_METHOD(zCProgMeshConvertFileHandler, &zCProgMeshConvertFileHandler::zCProgMeshConvertFileHandler_OnInit, 0x005D0100);
	ZENGIN_REGISTER_METHOD(zCProgMeshConvertFileHandler, &zCProgMeshConvertFileHandler::HandleFile, 0x005D01E0);

} // namespace Gothic_II_Addon
