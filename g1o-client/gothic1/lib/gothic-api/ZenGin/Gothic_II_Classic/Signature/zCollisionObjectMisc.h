namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(zCCollObjectBase);
	ZENGIN_REGISTER_METHOD(zCCollObjectBase, &zCCollObjectBase::GetLargestBBox3DLocal, 0x005499B0);

	ZENGIN_REGISTER_CLASS(zCCollObjectUndef);
	ZENGIN_REGISTER_METHOD(zCCollObjectUndef, &zCCollObjectUndef::GetCollObjClass, 0x00548420);

	ZENGIN_REGISTER_CLASS(zCCollObjectPoint);
	ZENGIN_REGISTER_METHOD(zCCollObjectPoint, &zCCollObjectPoint::GetCenterOffsetLocal, 0x00548C70);
	ZENGIN_REGISTER_METHOD(zCCollObjectPoint, &zCCollObjectPoint::GetCenterOffsetNew, 0x00548CF0);
	ZENGIN_REGISTER_METHOD(zCCollObjectPoint, &zCCollObjectPoint::SetUpVectorNew, 0x00548E50);
	ZENGIN_REGISTER_METHOD(zCCollObjectPoint, &zCCollObjectPoint::GetCollObjClass, 0x005486B0);
	ZENGIN_REGISTER_METHOD(zCCollObjectPoint, &zCCollObjectPoint::DetectCollisionsSelf, 0x00549070);
	ZENGIN_REGISTER_METHOD(zCCollObjectPoint, &zCCollObjectPoint::CollisionResponse, 0x00548AA0);
	ZENGIN_REGISTER_METHOD(zCCollObjectPoint, &zCCollObjectPoint::GetLargestBBox3DLocal, 0x00548A00);

	ZENGIN_REGISTER_CLASS(zCCollObjectProjectile);
	ZENGIN_REGISTER_METHOD(zCCollObjectProjectile, &zCCollObjectProjectile::GetCollObjClass, 0x00548770);

	ZENGIN_REGISTER_CLASS(zCCollObjectComplex);
	ZENGIN_REGISTER_METHOD(zCCollObjectComplex, &zCCollObjectComplex::GetCollObjClass, 0x00548830);
	ZENGIN_REGISTER_METHOD(zCCollObjectComplex, &zCCollObjectComplex::CollisionResponse, 0x00549100);
	ZENGIN_REGISTER_METHOD(zCCollObjectComplex, &zCCollObjectComplex::GetAdaptiveStepSize, 0x00549080);

	ZENGIN_REGISTER_CLASS(zCCollObjectLevelPolys);
	ZENGIN_REGISTER_METHOD(zCCollObjectLevelPolys, &zCCollObjectLevelPolys::zCCollObjectLevelPolys_OnInit, 0x00617630);
	ZENGIN_REGISTER_METHOD(zCCollObjectLevelPolys, &zCCollObjectLevelPolys::GetCollObjClass, 0x005484F0);

	ZENGIN_REGISTER_CLASS(zCCollObjectBoxPassThrough);
	ZENGIN_REGISTER_METHOD(zCCollObjectBoxPassThrough, &zCCollObjectBoxPassThrough::GetCollObjClass, 0x005489B0);
	ZENGIN_REGISTER_METHOD(zCCollObjectBoxPassThrough, &zCCollObjectBoxPassThrough::SuppressCollisionResponse, 0x005489C0);

	ZENGIN_REGISTER_CLASS(zCCollObjectBoxBlocker);
	ZENGIN_REGISTER_METHOD(zCCollObjectBoxBlocker, &zCCollObjectBoxBlocker::GetCollObjClass, 0x005488F0);

	ZENGIN_REGISTER_CLASS(zCCollObjectCharacter);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::zCCollObjectCharacter_OnInit, 0x0054A510);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::IsMoveInvalid, 0x0050E290);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::GetFallbackTrafoCC, 0x0054A8D0);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::GetCollisionPoleYDims, 0x0054B620);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::CalcSlideVector, 0x0054B650);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::DoWallSlidingLatentRotation, 0x0054BB30);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::FindFloorWaterCeiling, 0x0054BC00);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::MarkSpatialStateAsUninited, 0x0054BEE0);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::TestHardCollisions, 0x0054BF30);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::GetSurfaceAlignScanOrigin, 0x0054CE40);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::TestSoftCollisions, 0x0054CF60);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::PrintDebugInfos, 0x0054EA40);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::GetCollObjClass, 0x0054A6C0);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::DetectCollisionsSelf, 0x0054E010);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::CollisionResponse, 0x0054E580);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::GetAdaptiveStepSize, 0x0054EA00);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::GetLargestBBox3DLocal, 0x0054E9E0);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::GetPrimitiveCC, 0x0054A7F0);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::IsDead, 0x0054A6D0);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::DontLetHimComeNearer, 0x0054A6E0);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::TurnSpeed, 0x0054A6F0);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::PushAround, 0x0054A700);

} // namespace Gothic_II_Classic
