namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(myThunder);
	ZENGIN_REGISTER_METHOD(myThunder, &myThunder::myThunder_OnInit, 0x006B9CD0);

	ZENGIN_REGISTER_CLASS(oCBarrier);
	ZENGIN_REGISTER_METHOD(oCBarrier, &oCBarrier::oCBarrier_OnInit, 0x006B8FC0);
	ZENGIN_REGISTER_METHOD(oCBarrier, &oCBarrier::Init, 0x006B9440);
	ZENGIN_REGISTER_METHOD(oCBarrier, &oCBarrier::Initialise, 0x006B9BF0);
	ZENGIN_REGISTER_METHOD(oCBarrier, &oCBarrier::AddTremor, 0x006B9CE0);
	ZENGIN_REGISTER_METHOD(oCBarrier, &oCBarrier::RenderLayer, 0x006B9CF0);
	ZENGIN_REGISTER_METHOD(oCBarrier, &oCBarrier::Render, 0x006B9F30);
	ZENGIN_REGISTER_METHOD(oCBarrier, &oCBarrier::InitThunder, 0x006BA9C0);
	ZENGIN_REGISTER_METHOD(oCBarrier, &oCBarrier::RemoveThunder, 0x006BA9F0);
	ZENGIN_REGISTER_METHOD(oCBarrier, &oCBarrier::AddThunderSub, 0x006BAAA0);
	ZENGIN_REGISTER_METHOD(oCBarrier, &oCBarrier::AddThunder, 0x006BADE0);
	ZENGIN_REGISTER_METHOD(oCBarrier, &oCBarrier::RenderThunder, 0x006BB4B0);
	ZENGIN_REGISTER_METHOD(oCBarrier, &oCBarrier::RenderThunderList, 0x006BB770);

	ZENGIN_REGISTER_CLASS(oCSkyControler_Barrier);
	ZENGIN_REGISTER_METHOD(oCSkyControler_Barrier, &oCSkyControler_Barrier::oCSkyControler_Barrier_OnInit, 0x006BB7B0);
	ZENGIN_REGISTER_METHOD(oCSkyControler_Barrier, &oCSkyControler_Barrier::RenderSkyPre, 0x006BB8D0);

} // namespace Gothic_II_Addon
