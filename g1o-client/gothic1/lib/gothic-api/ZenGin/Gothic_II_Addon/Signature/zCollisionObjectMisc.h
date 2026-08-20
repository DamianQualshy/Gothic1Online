namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(zCCollObjectBase);
	ZENGIN_REGISTER_METHOD(zCCollObjectBase, &zCCollObjectBase::GetLargestBBox3DLocal, 0x0054EBD0);

	ZENGIN_REGISTER_CLASS(zCCollObjectUndef);
	ZENGIN_REGISTER_METHOD(zCCollObjectUndef, &zCCollObjectUndef::GetCollObjClass, 0x0054D640);

	ZENGIN_REGISTER_CLASS(zCCollObjectPoint);
	ZENGIN_REGISTER_METHOD(zCCollObjectPoint, &zCCollObjectPoint::GetCenterOffsetLocal, 0x0054DE90);
	ZENGIN_REGISTER_METHOD(zCCollObjectPoint, &zCCollObjectPoint::GetCenterOffsetNew, 0x0054DF10);
	ZENGIN_REGISTER_METHOD(zCCollObjectPoint, &zCCollObjectPoint::SetUpVectorNew, 0x0054E070);
	ZENGIN_REGISTER_METHOD(zCCollObjectPoint, &zCCollObjectPoint::GetCollObjClass, 0x0054D8D0);
	ZENGIN_REGISTER_METHOD(zCCollObjectPoint, &zCCollObjectPoint::DetectCollisionsSelf, 0x0054E290);
	ZENGIN_REGISTER_METHOD(zCCollObjectPoint, &zCCollObjectPoint::CollisionResponse, 0x0054DCC0);
	ZENGIN_REGISTER_METHOD(zCCollObjectPoint, &zCCollObjectPoint::GetLargestBBox3DLocal, 0x0054DC20);

	ZENGIN_REGISTER_CLASS(zCCollObjectProjectile);
	ZENGIN_REGISTER_METHOD(zCCollObjectProjectile, &zCCollObjectProjectile::GetCollObjClass, 0x0054D990);

	ZENGIN_REGISTER_CLASS(zCCollObjectComplex);
	ZENGIN_REGISTER_METHOD(zCCollObjectComplex, &zCCollObjectComplex::GetCollObjClass, 0x0054DA50);
	ZENGIN_REGISTER_METHOD(zCCollObjectComplex, &zCCollObjectComplex::CollisionResponse, 0x0054E320);
	ZENGIN_REGISTER_METHOD(zCCollObjectComplex, &zCCollObjectComplex::GetAdaptiveStepSize, 0x0054E2A0);

	ZENGIN_REGISTER_CLASS(zCCollObjectLevelPolys);
	ZENGIN_REGISTER_METHOD(zCCollObjectLevelPolys, &zCCollObjectLevelPolys::zCCollObjectLevelPolys_OnInit, 0x0061ED80);
	ZENGIN_REGISTER_METHOD(zCCollObjectLevelPolys, &zCCollObjectLevelPolys::GetCollObjClass, 0x0054D710);

	ZENGIN_REGISTER_CLASS(zCCollObjectBoxPassThrough);
	ZENGIN_REGISTER_METHOD(zCCollObjectBoxPassThrough, &zCCollObjectBoxPassThrough::GetCollObjClass, 0x0054DBD0);
	ZENGIN_REGISTER_METHOD(zCCollObjectBoxPassThrough, &zCCollObjectBoxPassThrough::SuppressCollisionResponse, 0x0054DBE0);

	ZENGIN_REGISTER_CLASS(zCCollObjectBoxBlocker);
	ZENGIN_REGISTER_METHOD(zCCollObjectBoxBlocker, &zCCollObjectBoxBlocker::GetCollObjClass, 0x0054DB10);

	ZENGIN_REGISTER_CLASS(zCCollObjectCharacter);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::zCCollObjectCharacter_OnInit, 0x0054F730);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::IsMoveInvalid, 0x00511060);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::GetFallbackTrafoCC, 0x0054FAF0);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::GetCollisionPoleYDims, 0x00550840);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::CalcSlideVector, 0x00550870);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::DoWallSlidingLatentRotation, 0x00550D50);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::FindFloorWaterCeiling, 0x00550E20);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::MarkSpatialStateAsUninited, 0x00551100);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::TestHardCollisions, 0x00551150);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::GetSurfaceAlignScanOrigin, 0x00552060);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::TestSoftCollisions, 0x00552180);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::PrintDebugInfos, 0x00553C60);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::GetCollObjClass, 0x0054F8E0);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::DetectCollisionsSelf, 0x00553230);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::CollisionResponse, 0x005537A0);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::GetAdaptiveStepSize, 0x00553C20);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::GetLargestBBox3DLocal, 0x00553C00);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::GetPrimitiveCC, 0x0054FA10);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::IsDead, 0x0054F8F0);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::DontLetHimComeNearer, 0x0054F900);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::TurnSpeed, 0x0054F910);
	ZENGIN_REGISTER_METHOD(zCCollObjectCharacter, &zCCollObjectCharacter::PushAround, 0x0054F920);

} // namespace Gothic_II_Addon
