namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(myThunder);
	ZENGIN_REGISTER_METHOD(myThunder, &myThunder::myThunder_OnInit, 0x00630560);

	ZENGIN_REGISTER_CLASS(oCBarrier);
	ZENGIN_REGISTER_METHOD(oCBarrier, &oCBarrier::oCBarrier_OnInit, 0x0062F7E0);
	ZENGIN_REGISTER_METHOD(oCBarrier, &oCBarrier::Initialise, 0x00630470);
	ZENGIN_REGISTER_METHOD(oCBarrier, &oCBarrier::AddTremor, 0x00630570);
	ZENGIN_REGISTER_METHOD(oCBarrier, &oCBarrier::RenderLayer, 0x00630580);
	ZENGIN_REGISTER_METHOD(oCBarrier, &oCBarrier::Render, 0x006307C0);
	ZENGIN_REGISTER_METHOD(oCBarrier, &oCBarrier::InitThunder, 0x006311F0);
	ZENGIN_REGISTER_METHOD(oCBarrier, &oCBarrier::RemoveThunder, 0x00631220);
	ZENGIN_REGISTER_METHOD(oCBarrier, &oCBarrier::AddThunderSub, 0x006312D0);
	ZENGIN_REGISTER_METHOD(oCBarrier, &oCBarrier::AddThunder, 0x00631620);
	ZENGIN_REGISTER_METHOD(oCBarrier, &oCBarrier::RenderThunder, 0x00631D10);
	ZENGIN_REGISTER_METHOD(oCBarrier, &oCBarrier::RenderThunderList, 0x00631FD0);

	ZENGIN_REGISTER_CLASS(oCSkyControler_Barrier);
	ZENGIN_REGISTER_METHOD(oCSkyControler_Barrier, &oCSkyControler_Barrier::oCSkyControler_Barrier_OnInit, 0x00632010);
	ZENGIN_REGISTER_METHOD(oCSkyControler_Barrier, &oCSkyControler_Barrier::RenderSkyPre, 0x00632140);

} // namespace Gothic_I_Classic
