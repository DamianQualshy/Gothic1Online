namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(zSEvasionSearchDesc);
	ZENGIN_REGISTER_METHOD(zSEvasionSearchDesc, &zSEvasionSearchDesc::zSEvasionSearchDesc_OnInit, 0x004A8F00);

	ZENGIN_REGISTER_CLASS(zSEvasionSearchDesc::zSEvasionSearchOptions);
	ZENGIN_REGISTER_METHOD(zSEvasionSearchDesc::zSEvasionSearchOptions, &zSEvasionSearchDesc::zSEvasionSearchOptions::zSEvasionSearchOptions_OnInit, 0x004AB060);

	ZENGIN_REGISTER_CLASS(zSPathSearchResult);
	ZENGIN_REGISTER_METHOD(zSPathSearchResult, &zSPathSearchResult::zSPathSearchResult_OnInit, 0x004A6D60);

	ZENGIN_REGISTER_CLASS(zSPathSearchState_Internal);
	ZENGIN_REGISTER_METHOD(zSPathSearchState_Internal, &zSPathSearchState_Internal::zSPathSearchState_Internal_OnInit, 0x004A6A30);

	ZENGIN_REGISTER_CLASS(zCSphereCoordsCache);
	ZENGIN_REGISTER_METHOD(zCSphereCoordsCache, &zCSphereCoordsCache::zCSphereCoordsCache_OnInit, 0x004A6B90);
	ZENGIN_REGISTER_METHOD(zCSphereCoordsCache, &zCSphereCoordsCache::GetSphereCoordLazy, 0x004A5C70);
	ZENGIN_REGISTER_METHOD(zCSphereCoordsCache, &zCSphereCoordsCache::GetBestScoredSearch, 0x004A6A40);
	ZENGIN_REGISTER_METHOD(zCSphereCoordsCache, &zCSphereCoordsCache::DeleteList, 0x004A6C10);

	ZENGIN_REGISTER_CLASS(zCPathSearch);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::zCPathSearch_OnInit, 0x004A5890);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::CamVobChanged, 0x004A5B40);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::TargetChanged, 0x004A5C40);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::SetAICamera, 0x004A5C60);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::SphereSearch, 0x004A6F60);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::SwitchSearch, 0x004A75C0);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::ShoulderSearch, 0x004A75D0);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::PanicSearch, 0x004A79B0);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::CalcStateScores, 0x004A7EC0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCPathSearch, &zCPathSearch::GetBestLerpMode, zTPathLerpMode(zCPathSearch::*)(zSPathSearchState const&), 0x004A81E0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCPathSearch, &zCPathSearch::GetBestLerpMode, zTPathLerpMode(zCPathSearch::*)(zVEC3 const&, zVEC3 const&), 0x004A8350);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::DoSlerpRotQuat, 0x004A8430);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::FindBestEvasion, 0x004A8670);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::CanEvadeTo, 0x004A8B40);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::FindEvasionSequence, 0x004A8BA0);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::FES_PlayerInvisible_Moved, 0x004A8FD0);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::FES_PlayerInvisible_Moved_BW, 0x004AB0A0);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::FES_PlayerInvisible_Moved_FW, 0x004AB9E0);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::FES_IdealCone, 0x004AC340);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::FES_PlayerInvisible_Standing, 0x004AE200);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::FES_PlayerInvisible_Rotated, 0x004AE250);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::FES_PlayerTargetInvisible, 0x004AEAD0);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::FES_CamHitWall, 0x004AEB10);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::FES_NoEvasionFound, 0x004AEB20);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::EvasionPossible, 0x004AECF0);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::IsPointValid, 0x004AED00);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::IsPointNearWall, 0x004AF5D0);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::LineOfSight, 0x004AF7F0);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::CorrectPosForNearClip, 0x004AF880);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::AdjustCenterSphere, 0x004AFC70);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::GetPolyNearestPoint, 0x004AFF20);

} // namespace Gothic_II_Addon
