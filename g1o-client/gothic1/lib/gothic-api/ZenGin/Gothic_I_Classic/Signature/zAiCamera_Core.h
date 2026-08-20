namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(zSEvasionSearchDesc);
	ZENGIN_REGISTER_METHOD(zSEvasionSearchDesc, &zSEvasionSearchDesc::zSEvasionSearchDesc_OnInit, 0x004A13E0);

	ZENGIN_REGISTER_CLASS(zSEvasionSearchDesc::zSEvasionSearchOptions);
	ZENGIN_REGISTER_METHOD(zSEvasionSearchDesc::zSEvasionSearchOptions, &zSEvasionSearchDesc::zSEvasionSearchOptions::zSEvasionSearchOptions_OnInit, 0x004A9350);

	ZENGIN_REGISTER_CLASS(zSPathSearchResult);
	ZENGIN_REGISTER_METHOD(zSPathSearchResult, &zSPathSearchResult::zSPathSearchResult_OnInit, 0x0049F3E0);

	ZENGIN_REGISTER_CLASS(zSPathSearchState_Internal);
	ZENGIN_REGISTER_METHOD(zSPathSearchState_Internal, &zSPathSearchState_Internal::zSPathSearchState_Internal_OnInit, 0x0049F0B0);

	ZENGIN_REGISTER_CLASS(zCSphereCoordsCache);
	ZENGIN_REGISTER_METHOD(zCSphereCoordsCache, &zCSphereCoordsCache::zCSphereCoordsCache_OnInit, 0x0049F210);
	ZENGIN_REGISTER_METHOD(zCSphereCoordsCache, &zCSphereCoordsCache::GetSphereCoordLazy, 0x0049E370);
	ZENGIN_REGISTER_METHOD(zCSphereCoordsCache, &zCSphereCoordsCache::GetBestScoredSearch, 0x0049F0C0);
	ZENGIN_REGISTER_METHOD(zCSphereCoordsCache, &zCSphereCoordsCache::DeleteList, 0x0049F290);

	ZENGIN_REGISTER_CLASS(zCPathSearch);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::zCPathSearch_OnInit, 0x0049DF90);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::CamVobChanged, 0x0049E240);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::TargetChanged, 0x0049E340);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::SetAICamera, 0x0049E360);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::SphereSearch, 0x0049F5E0);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::SwitchSearch, 0x0049FC40);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::ShoulderSearch, 0x0049FC50);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::PanicSearch, 0x0049FFC0);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::CalcStateScores, 0x004A0460);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCPathSearch, &zCPathSearch::GetBestLerpMode, zTPathLerpMode(zCPathSearch::*)(zSPathSearchState const&), 0x004A07B0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCPathSearch, &zCPathSearch::GetBestLerpMode, zTPathLerpMode(zCPathSearch::*)(zVEC3 const&, zVEC3 const&), 0x004A08F0);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::DoSlerpRotQuat, 0x004A09A0);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::FindBestEvasion, 0x004A0B50);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::CanEvadeTo, 0x004A1020);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::FindEvasionSequence, 0x004A1080);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::FES_PlayerInvisible_Moved, 0x004A14B0);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::FES_PlayerInvisible_Moved_BW, 0x004A34C0);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::FES_PlayerInvisible_Moved_FW, 0x004A3E00);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::FES_IdealCone, 0x004A4760);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::FES_PlayerInvisible_Standing, 0x004A6620);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::FES_PlayerInvisible_Rotated, 0x004A6670);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::FES_PlayerTargetInvisible, 0x004A6EF0);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::FES_CamHitWall, 0x004A6F30);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::FES_NoEvasionFound, 0x004A6F40);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::EvasionPossible, 0x004A7120);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::IsPointValid, 0x004A7130);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::IsPointNearWall, 0x004A7A00);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::LineOfSight, 0x004A7BF0);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::AdjustCenterSphere, 0x004A7C50);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::GetPolyNearestPoint, 0x004A7ED0);

	ZENGIN_REGISTER_CLASS(zCPathSearch::zSPathSearchOptions);
	ZENGIN_REGISTER_METHOD(zCPathSearch::zSPathSearchOptions, &zCPathSearch::zSPathSearchOptions::SetDefaults, 0x0049DB50);

} // namespace Gothic_I_Classic
