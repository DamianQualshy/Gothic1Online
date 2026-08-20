namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(zCCollObjectBase);
	ZENGIN_REGISTER_METHOD(zCCollObjectBase, &zCCollObjectBase::GetLargestBBox3DLocal, 0x0053A6D0);

	ZENGIN_REGISTER_CLASS(zCCollObjectUndef);
	ZENGIN_REGISTER_METHOD(zCCollObjectUndef, &zCCollObjectUndef::GetCollObjClass, 0x00539180);

	ZENGIN_REGISTER_CLASS(zCCollObjectPoint);
	ZENGIN_REGISTER_METHOD(zCCollObjectPoint, &zCCollObjectPoint::GetCenterOffsetLocal, 0x005399E0);
	ZENGIN_REGISTER_METHOD(zCCollObjectPoint, &zCCollObjectPoint::GetCenterOffsetNew, 0x00539A60);
	ZENGIN_REGISTER_METHOD(zCCollObjectPoint, &zCCollObjectPoint::SetUpVectorNew, 0x00539BC0);
	ZENGIN_REGISTER_METHOD(zCCollObjectPoint, &zCCollObjectPoint::GetCollObjClass, 0x00539420);
	ZENGIN_REGISTER_METHOD(zCCollObjectPoint, &zCCollObjectPoint::DetectCollisionsSelf, 0x00539DE0);
	ZENGIN_REGISTER_METHOD(zCCollObjectPoint, &zCCollObjectPoint::CollisionResponse, 0x00539810);
	ZENGIN_REGISTER_METHOD(zCCollObjectPoint, &zCCollObjectPoint::GetLargestBBox3DLocal, 0x00539770);

	ZENGIN_REGISTER_CLASS(zCCollObjectProjectile);
	ZENGIN_REGISTER_METHOD(zCCollObjectProjectile, &zCCollObjectProjectile::GetCollObjClass, 0x005394E0);

	ZENGIN_REGISTER_CLASS(zCCollObjectComplex);
	ZENGIN_REGISTER_METHOD(zCCollObjectComplex, &zCCollObjectComplex::GetCollObjClass, 0x005395A0);
	ZENGIN_REGISTER_METHOD(zCCollObjectComplex, &zCCollObjectComplex::CollisionResponse, 0x00539E70);
	ZENGIN_REGISTER_METHOD(zCCollObjectComplex, &zCCollObjectComplex::GetAdaptiveStepSize, 0x00539DF0);

	ZENGIN_REGISTER_CLASS(zCCollObjectLevelPolys);
	ZENGIN_REGISTER_METHOD(zCCollObjectLevelPolys, &zCCollObjectLevelPolys::zCCollObjectLevelPolys_OnInit, 0x005F1800);
	ZENGIN_REGISTER_METHOD(zCCollObjectLevelPolys, &zCCollObjectLevelPolys::GetCollObjClass, 0x00539250);

	ZENGIN_REGISTER_CLASS(zCCollObjectBoxPassThrough);
	ZENGIN_REGISTER_METHOD(zCCollObjectBoxPassThrough, &zCCollObjectBoxPassThrough::GetCollObjClass, 0x00539720);
	ZENGIN_REGISTER_METHOD(zCCollObjectBoxPassThrough, &zCCollObjectBoxPassThrough::SuppressCollisionResponse, 0x00539730);

	ZENGIN_REGISTER_CLASS(zCCollObjectBoxBlocker);
	ZENGIN_REGISTER_METHOD(zCCollObjectBoxBlocker, &zCCollObjectBoxBlocker::GetCollObjClass, 0x00539660);

	ZENGIN_REGISTER_CLASS(zCCollObjectCharacter);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::zCCollObjectCharacter_OnInit, 0x0053B230);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::IsMoveInvalid, 0x00501500);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::GetFallbackTrafoCC, 0x0053B600);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::GetCollisionPoleYDims, 0x0053C350);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::CalcSlideVector, 0x0053C380);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::DoWallSlidingLatentRotation, 0x0053C860);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::FindFloorWaterCeiling, 0x0053C930);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::MarkSpatialStateAsUninited, 0x0053CC10);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::TestHardCollisions, 0x0053CC60);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::GetSurfaceAlignScanOrigin, 0x0053D940);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::TestSoftCollisions, 0x0053DA60);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::PrintDebugInfos, 0x0053F510);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::GetCollObjClass, 0x0053B3E0);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::DetectCollisionsSelf, 0x0053EB00);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::CollisionResponse, 0x0053F060);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::GetAdaptiveStepSize, 0x0053F4D0);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::GetLargestBBox3DLocal, 0x0053F4B0);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::GetPrimitiveCC, 0x0053B510);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::IsDead, 0x0053B3F0);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::DontLetHimComeNearer, 0x0053B400);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::TurnSpeed, 0x0053B410);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::PushAround, 0x0053B420);

} // namespace Gothic_I_Classic
