namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(myThunder);
	ZENGIN_REGISTER_METHOD(myThunder, &myThunder::myThunder_OnInit, 0x00655E80);

	ZENGIN_REGISTER_CLASS(oCBarrier);
	ZENGIN_REGISTER_METHOD(oCBarrier, &oCBarrier::oCBarrier_OnInit, 0x006550D0);
	ZENGIN_REGISTER_METHOD(oCBarrier, &oCBarrier::Initialise, 0x00655D90);
	ZENGIN_REGISTER_METHOD(oCBarrier, &oCBarrier::AddTremor, 0x00655E90);
	ZENGIN_REGISTER_METHOD(oCBarrier, &oCBarrier::RenderLayer, 0x00655EA0);
	ZENGIN_REGISTER_METHOD(oCBarrier, &oCBarrier::Render, 0x006560E0);
	ZENGIN_REGISTER_METHOD(oCBarrier, &oCBarrier::InitThunder, 0x00656B70);
	ZENGIN_REGISTER_METHOD(oCBarrier, &oCBarrier::RemoveThunder, 0x00656BA0);
	ZENGIN_REGISTER_METHOD(oCBarrier, &oCBarrier::AddThunderSub, 0x00656C50);
	ZENGIN_REGISTER_METHOD(oCBarrier, &oCBarrier::AddThunder, 0x00656FE0);
	ZENGIN_REGISTER_METHOD(oCBarrier, &oCBarrier::RenderThunder, 0x00657820);
	ZENGIN_REGISTER_METHOD(oCBarrier, &oCBarrier::RenderThunderList, 0x00657AF0);

	ZENGIN_REGISTER_CLASS(oCSkyControler_Barrier);
	ZENGIN_REGISTER_METHOD(oCSkyControler_Barrier, &oCSkyControler_Barrier::oCSkyControler_Barrier_OnInit, 0x00657B30);
	ZENGIN_REGISTER_METHOD(oCSkyControler_Barrier, &oCSkyControler_Barrier::RenderSkyPre, 0x00657C60);

} // namespace Gothic_I_Addon
