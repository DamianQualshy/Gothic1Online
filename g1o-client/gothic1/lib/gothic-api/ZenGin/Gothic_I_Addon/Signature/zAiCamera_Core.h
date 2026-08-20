namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(zSEvasionSearchDesc);
	ZENGIN_REGISTER_METHOD(zSEvasionSearchDesc, &zSEvasionSearchDesc::zSEvasionSearchDesc_OnInit, 0x004AEF30);

	ZENGIN_REGISTER_CLASS(zSEvasionSearchDesc::zSEvasionSearchOptions);
	ZENGIN_REGISTER_METHOD(zSEvasionSearchDesc::zSEvasionSearchOptions, &zSEvasionSearchDesc::zSEvasionSearchOptions::zSEvasionSearchOptions_OnInit, 0x004B1030);

	ZENGIN_REGISTER_CLASS(zSPathSearchResult);
	ZENGIN_REGISTER_METHOD(zSPathSearchResult, &zSPathSearchResult::zSPathSearchResult_OnInit, 0x004ACC80);

	ZENGIN_REGISTER_CLASS(zSPathSearchState_Internal);
	ZENGIN_REGISTER_METHOD(zSPathSearchState_Internal, &zSPathSearchState_Internal::zSPathSearchState_Internal_OnInit, 0x004AC930);

	ZENGIN_REGISTER_CLASS(zCSphereCoordsCache);
	ZENGIN_REGISTER_METHOD(zCSphereCoordsCache, &zCSphereCoordsCache::zCSphereCoordsCache_OnInit, 0x004ACA90);
	ZENGIN_REGISTER_METHOD(zCSphereCoordsCache, &zCSphereCoordsCache::GetSphereCoordLazy, 0x004ABB70);
	ZENGIN_REGISTER_METHOD(zCSphereCoordsCache, &zCSphereCoordsCache::GetBestScoredSearch, 0x004AC940);
	ZENGIN_REGISTER_METHOD(zCSphereCoordsCache, &zCSphereCoordsCache::DeleteList, 0x004ACB10);

	ZENGIN_REGISTER_CLASS(zCPathSearch);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::zCPathSearch_OnInit, 0x004AB780);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::CamVobChanged, 0x004ABA40);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::TargetChanged, 0x004ABB40);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::SetAICamera, 0x004ABB60);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::SphereSearch, 0x004ACE90);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::SwitchSearch, 0x004AD570);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::ShoulderSearch, 0x004AD580);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::PanicSearch, 0x004AD960);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::CalcStateScores, 0x004ADE80);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCPathSearch, &zCPathSearch::GetBestLerpMode, zTPathLerpMode(zCPathSearch::*)(zSPathSearchState const&), 0x004AE200);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCPathSearch, &zCPathSearch::GetBestLerpMode, zTPathLerpMode(zCPathSearch::*)(zVEC3 const&, zVEC3 const&), 0x004AE3B0);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::DoSlerpRotQuat, 0x004AE470);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::FindBestEvasion, 0x004AE6B0);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::CanEvadeTo, 0x004AEB60);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::FindEvasionSequence, 0x004AEBC0);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::FES_PlayerInvisible_Moved, 0x004AF000);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::FES_PlayerInvisible_Moved_BW, 0x004B1070);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::FES_PlayerInvisible_Moved_FW, 0x004B19B0);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::FES_IdealCone, 0x004B2300);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::FES_PlayerInvisible_Standing, 0x004B41F0);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::FES_PlayerInvisible_Rotated, 0x004B4240);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::FES_PlayerTargetInvisible, 0x004B4AC0);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::FES_CamHitWall, 0x004B4B00);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::FES_NoEvasionFound, 0x004B4B10);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::EvasionPossible, 0x004B4CF0);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::IsPointValid, 0x004B4D00);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::IsPointNearWall, 0x004B57A0);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::LineOfSight, 0x004B59E0);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::AdjustCenterSphere, 0x004B5A50);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::GetPolyNearestPoint, 0x004B5D10);

	ZENGIN_REGISTER_CLASS(zCPathSearch::zSPathSearchOptions);
	ZENGIN_REGISTER_METHOD(zCPathSearch::zSPathSearchOptions, &zCPathSearch::zSPathSearchOptions::SetDefaults, 0x004AB320);

} // namespace Gothic_I_Addon
