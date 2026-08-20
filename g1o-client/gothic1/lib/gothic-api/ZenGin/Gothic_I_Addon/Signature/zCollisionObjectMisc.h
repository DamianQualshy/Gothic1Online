namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(zCCollObjectBase);
	ZENGIN_REGISTER_METHOD(zCCollObjectBase, &zCCollObjectBase::GetLargestBBox3DLocal, 0x005519A0);

	ZENGIN_REGISTER_CLASS(zCCollObjectUndef);
	ZENGIN_REGISTER_METHOD(zCCollObjectUndef, &zCCollObjectUndef::GetCollObjClass, 0x00550420);

	ZENGIN_REGISTER_CLASS(zCCollObjectPoint);
	ZENGIN_REGISTER_METHOD(zCCollObjectPoint, &zCCollObjectPoint::GetCenterOffsetLocal, 0x00550C90);
	ZENGIN_REGISTER_METHOD(zCCollObjectPoint, &zCCollObjectPoint::GetCenterOffsetNew, 0x00550D20);
	ZENGIN_REGISTER_METHOD(zCCollObjectPoint, &zCCollObjectPoint::SetUpVectorNew, 0x00550F50);
	ZENGIN_REGISTER_METHOD(zCCollObjectPoint, &zCCollObjectPoint::GetCollObjClass, 0x005506C0);
	ZENGIN_REGISTER_METHOD(zCCollObjectPoint, &zCCollObjectPoint::DetectCollisionsSelf, 0x00550FE0);
	ZENGIN_REGISTER_METHOD(zCCollObjectPoint, &zCCollObjectPoint::CollisionResponse, 0x00550AC0);
	ZENGIN_REGISTER_METHOD(zCCollObjectPoint, &zCCollObjectPoint::GetLargestBBox3DLocal, 0x00550A10);

	ZENGIN_REGISTER_CLASS(zCCollObjectProjectile);
	ZENGIN_REGISTER_METHOD(zCCollObjectProjectile, &zCCollObjectProjectile::GetCollObjClass, 0x00550780);

	ZENGIN_REGISTER_CLASS(zCCollObjectComplex);
	ZENGIN_REGISTER_METHOD(zCCollObjectComplex, &zCCollObjectComplex::GetCollObjClass, 0x00550840);
	ZENGIN_REGISTER_METHOD(zCCollObjectComplex, &zCCollObjectComplex::CollisionResponse, 0x00551080);
	ZENGIN_REGISTER_METHOD(zCCollObjectComplex, &zCCollObjectComplex::GetAdaptiveStepSize, 0x00550FF0);

	ZENGIN_REGISTER_CLASS(zCCollObjectLevelPolys);
	ZENGIN_REGISTER_METHOD(zCCollObjectLevelPolys, &zCCollObjectLevelPolys::zCCollObjectLevelPolys_OnInit, 0x00612560);
	ZENGIN_REGISTER_METHOD(zCCollObjectLevelPolys, &zCCollObjectLevelPolys::GetCollObjClass, 0x005504F0);

	ZENGIN_REGISTER_CLASS(zCCollObjectBoxPassThrough);
	ZENGIN_REGISTER_METHOD(zCCollObjectBoxPassThrough, &zCCollObjectBoxPassThrough::GetCollObjClass, 0x005509C0);
	ZENGIN_REGISTER_METHOD(zCCollObjectBoxPassThrough, &zCCollObjectBoxPassThrough::SuppressCollisionResponse, 0x005509D0);

	ZENGIN_REGISTER_CLASS(zCCollObjectBoxBlocker);
	ZENGIN_REGISTER_METHOD(zCCollObjectBoxBlocker, &zCCollObjectBoxBlocker::GetCollObjClass, 0x00550900);

	ZENGIN_REGISTER_CLASS(zCCollObjectCharacter);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::zCCollObjectCharacter_OnInit, 0x005525D0);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::IsMoveInvalid, 0x00514CB0);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::GetFallbackTrafoCC, 0x005529A0);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::GetCollisionPoleYDims, 0x005538D0);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::CalcSlideVector, 0x00553900);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::DoWallSlidingLatentRotation, 0x00553E40);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::FindFloorWaterCeiling, 0x00553F10);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::MarkSpatialStateAsUninited, 0x005541F0);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::TestHardCollisions, 0x00554250);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::GetSurfaceAlignScanOrigin, 0x005550B0);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::TestSoftCollisions, 0x005552E0);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::PrintDebugInfos, 0x00556EE0);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::GetCollObjClass, 0x00552780);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::DetectCollisionsSelf, 0x005564D0);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::CollisionResponse, 0x00556920);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::GetAdaptiveStepSize, 0x00556EA0);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::GetLargestBBox3DLocal, 0x00556E80);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::GetPrimitiveCC, 0x005528B0);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::IsDead, 0x00552790);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::DontLetHimComeNearer, 0x005527A0);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::TurnSpeed, 0x005527B0);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::PushAround, 0x005527C0);

} // namespace Gothic_I_Addon
