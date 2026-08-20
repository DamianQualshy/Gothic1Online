namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(zCCollisionReport);
	ZENGIN_REGISTER_METHOD(zCCollisionReport, &zCCollisionReport::zCCollisionReport_OnInit, 0x0054F1A0);

	ZENGIN_REGISTER_CLASS(zCCollisionDetector);
	ZENGIN_REGISTER_METHOD(zCCollisionDetector, &zCCollisionDetector::zCCollisionDetector_OnInit, 0x0054F230);
	ZENGIN_REGISTER_METHOD(zCCollisionDetector, &zCCollisionDetector::GetTestFuncIndex, 0x0054F330);
	ZENGIN_REGISTER_METHOD(zCCollisionDetector, &zCCollisionDetector::DoDynamicIntersectionTests, 0x0054F530);
	ZENGIN_REGISTER_METHOD(zCCollisionDetector, &zCCollisionDetector::DoStaticIntersectionTests, 0x0054F6F0);
	ZENGIN_REGISTER_METHOD(zCCollisionDetector, &zCCollisionDetector::DetectCollisions, 0x0054FB10);
	ZENGIN_REGISTER_METHOD(zCCollisionDetector, &zCCollisionDetector::RegisterStaticIntersectionTest, 0x0054F390);
	ZENGIN_REGISTER_METHOD(zCCollisionDetector, &zCCollisionDetector::RegisterDynamicIntersectionTest, 0x0054F3C0);
	ZENGIN_REGISTER_METHOD(zCCollisionDetector, &zCCollisionDetector::CanCollide, 0x0054F3F0);

} // namespace Gothic_I_Addon
