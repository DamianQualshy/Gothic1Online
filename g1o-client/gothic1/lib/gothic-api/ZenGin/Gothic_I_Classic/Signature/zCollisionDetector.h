namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(zCCollisionReport);
	ZENGIN_REGISTER_METHOD(zCCollisionReport, &zCCollisionReport::zCCollisionReport_OnInit, 0x00537FD0);

	ZENGIN_REGISTER_CLASS(zCCollisionDetector);
	ZENGIN_REGISTER_METHOD(zCCollisionDetector, &zCCollisionDetector::zCCollisionDetector_OnInit, 0x00538060);
	ZENGIN_REGISTER_METHOD(zCCollisionDetector, &zCCollisionDetector::GetTestFuncIndex, 0x00538160);
	ZENGIN_REGISTER_METHOD(zCCollisionDetector, &zCCollisionDetector::DoDynamicIntersectionTests, 0x00538350);
	ZENGIN_REGISTER_METHOD(zCCollisionDetector, &zCCollisionDetector::DoStaticIntersectionTests, 0x00538500);
	ZENGIN_REGISTER_METHOD(zCCollisionDetector, &zCCollisionDetector::DetectCollisions, 0x005388C0);
	ZENGIN_REGISTER_METHOD(zCCollisionDetector, &zCCollisionDetector::RegisterStaticIntersectionTest, 0x005381C0);
	ZENGIN_REGISTER_METHOD(zCCollisionDetector, &zCCollisionDetector::RegisterDynamicIntersectionTest, 0x005381F0);
	ZENGIN_REGISTER_METHOD(zCCollisionDetector, &zCCollisionDetector::CanCollide, 0x00538220);

} // namespace Gothic_I_Classic
