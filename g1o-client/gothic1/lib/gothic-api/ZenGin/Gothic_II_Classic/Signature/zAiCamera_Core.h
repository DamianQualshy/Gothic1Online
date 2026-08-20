namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(zSEvasionSearchDesc);
	ZENGIN_REGISTER_METHOD(zSEvasionSearchDesc, &zSEvasionSearchDesc::zSEvasionSearchDesc_OnInit, 0x004A69D0);

	ZENGIN_REGISTER_CLASS(zSEvasionSearchDesc::zSEvasionSearchOptions);
	ZENGIN_REGISTER_METHOD(zSEvasionSearchDesc::zSEvasionSearchOptions, &zSEvasionSearchDesc::zSEvasionSearchOptions::zSEvasionSearchOptions_OnInit, 0x004A8B30);

	ZENGIN_REGISTER_CLASS(zSPathSearchResult);
	ZENGIN_REGISTER_METHOD(zSPathSearchResult, &zSPathSearchResult::zSPathSearchResult_OnInit, 0x004A4830);

	ZENGIN_REGISTER_CLASS(zSPathSearchState_Internal);
	ZENGIN_REGISTER_METHOD(zSPathSearchState_Internal, &zSPathSearchState_Internal::zSPathSearchState_Internal_OnInit, 0x004A4500);

	ZENGIN_REGISTER_CLASS(zCSphereCoordsCache);
	ZENGIN_REGISTER_METHOD(zCSphereCoordsCache, &zCSphereCoordsCache::zCSphereCoordsCache_OnInit, 0x004A4660);
	ZENGIN_REGISTER_METHOD(zCSphereCoordsCache, &zCSphereCoordsCache::GetSphereCoordLazy, 0x004A3760);
	ZENGIN_REGISTER_METHOD(zCSphereCoordsCache, &zCSphereCoordsCache::GetBestScoredSearch, 0x004A4510);
	ZENGIN_REGISTER_METHOD(zCSphereCoordsCache, &zCSphereCoordsCache::DeleteList, 0x004A46E0);

	ZENGIN_REGISTER_CLASS(zCPathSearch);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::zCPathSearch_OnInit, 0x004A3380);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::CamVobChanged, 0x004A3630);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::TargetChanged, 0x004A3730);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::SetAICamera, 0x004A3750);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::SphereSearch, 0x004A4A30);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::SwitchSearch, 0x004A5090);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::ShoulderSearch, 0x004A50A0);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::PanicSearch, 0x004A5480);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::CalcStateScores, 0x004A5990);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCPathSearch, &zCPathSearch::GetBestLerpMode, zTPathLerpMode(zCPathSearch::*)(zSPathSearchState const&), 0x004A5CB0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCPathSearch, &zCPathSearch::GetBestLerpMode, zTPathLerpMode(zCPathSearch::*)(zVEC3 const&, zVEC3 const&), 0x004A5E20);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::DoSlerpRotQuat, 0x004A5F00);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::FindBestEvasion, 0x004A6140);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::CanEvadeTo, 0x004A6610);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::FindEvasionSequence, 0x004A6670);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::FES_PlayerInvisible_Moved, 0x004A6AA0);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::FES_PlayerInvisible_Moved_BW, 0x004A8B70);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::FES_PlayerInvisible_Moved_FW, 0x004A94B0);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::FES_IdealCone, 0x004A9E10);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::FES_PlayerInvisible_Standing, 0x004ABCD0);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::FES_PlayerInvisible_Rotated, 0x004ABD20);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::FES_PlayerTargetInvisible, 0x004AC5A0);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::FES_CamHitWall, 0x004AC5E0);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::FES_NoEvasionFound, 0x004AC5F0);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::EvasionPossible, 0x004AC7C0);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::IsPointValid, 0x004AC7D0);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::IsPointNearWall, 0x004AD0A0);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::LineOfSight, 0x004AD2C0);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::CorrectPosForNearClip, 0x004AD350);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::AdjustCenterSphere, 0x004AD740);
	ZENGIN_REGISTER_METHOD(zCPathSearch, &zCPathSearch::GetPolyNearestPoint, 0x004AD9F0);

} // namespace Gothic_II_Classic
