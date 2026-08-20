namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(zCCollisionReport);
	ZENGIN_REGISTER_METHOD(zCCollisionReport, &zCCollisionReport::zCCollisionReport_OnInit, 0x0054C550);

	ZENGIN_REGISTER_CLASS(zCCollisionDetector);
	ZENGIN_REGISTER_METHOD(zCCollisionDetector, &zCCollisionDetector::zCCollisionDetector_OnInit, 0x0054C5E0);
	ZENGIN_REGISTER_METHOD(zCCollisionDetector, &zCCollisionDetector::GetTestFuncIndex, 0x0054C6C0);
	ZENGIN_REGISTER_METHOD(zCCollisionDetector, &zCCollisionDetector::DoDynamicIntersectionTests, 0x0054C8B0);
	ZENGIN_REGISTER_METHOD(zCCollisionDetector, &zCCollisionDetector::DoStaticIntersectionTests, 0x0054CAA0);
	ZENGIN_REGISTER_METHOD(zCCollisionDetector, &zCCollisionDetector::DetectCollisions, 0x0054CE50);
	ZENGIN_REGISTER_METHOD(zCCollisionDetector, &zCCollisionDetector::RegisterStaticIntersectionTest, 0x0054C720);
	ZENGIN_REGISTER_METHOD(zCCollisionDetector, &zCCollisionDetector::RegisterDynamicIntersectionTest, 0x0054C750);
	ZENGIN_REGISTER_METHOD(zCCollisionDetector, &zCCollisionDetector::CanCollide, 0x0054C780);

} // namespace Gothic_II_Addon
