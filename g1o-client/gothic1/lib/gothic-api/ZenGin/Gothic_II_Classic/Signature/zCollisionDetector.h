namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(zCCollisionReport);
	ZENGIN_REGISTER_METHOD(zCCollisionReport, &zCCollisionReport::zCCollisionReport_OnInit, 0x00547330);

	ZENGIN_REGISTER_CLASS(zCCollisionDetector);
	ZENGIN_REGISTER_METHOD(zCCollisionDetector, &zCCollisionDetector::zCCollisionDetector_OnInit, 0x005473C0);
	ZENGIN_REGISTER_METHOD(zCCollisionDetector, &zCCollisionDetector::GetTestFuncIndex, 0x005474A0);
	ZENGIN_REGISTER_METHOD(zCCollisionDetector, &zCCollisionDetector::DoDynamicIntersectionTests, 0x00547690);
	ZENGIN_REGISTER_METHOD(zCCollisionDetector, &zCCollisionDetector::DoStaticIntersectionTests, 0x00547880);
	ZENGIN_REGISTER_METHOD(zCCollisionDetector, &zCCollisionDetector::DetectCollisions, 0x00547C30);
	ZENGIN_REGISTER_METHOD(zCCollisionDetector, &zCCollisionDetector::RegisterStaticIntersectionTest, 0x00547500);
	ZENGIN_REGISTER_METHOD(zCCollisionDetector, &zCCollisionDetector::RegisterDynamicIntersectionTest, 0x00547530);
	ZENGIN_REGISTER_METHOD(zCCollisionDetector, &zCCollisionDetector::CanCollide, 0x00547560);

} // namespace Gothic_II_Classic
