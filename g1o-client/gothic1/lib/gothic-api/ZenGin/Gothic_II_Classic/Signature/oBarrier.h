namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(myThunder);
	ZENGIN_REGISTER_METHOD(myThunder, &myThunder::myThunder_OnInit, 0x0065D340);

	ZENGIN_REGISTER_CLASS(oCBarrier);
	ZENGIN_REGISTER_METHOD(oCBarrier, &oCBarrier::oCBarrier_OnInit, 0x0065C630);
	ZENGIN_REGISTER_METHOD(oCBarrier, &oCBarrier::Init, 0x0065CAB0);
	ZENGIN_REGISTER_METHOD(oCBarrier, &oCBarrier::Initialise, 0x0065D260);
	ZENGIN_REGISTER_METHOD(oCBarrier, &oCBarrier::AddTremor, 0x0065D350);
	ZENGIN_REGISTER_METHOD(oCBarrier, &oCBarrier::RenderLayer, 0x0065D360);
	ZENGIN_REGISTER_METHOD(oCBarrier, &oCBarrier::Render, 0x0065D5A0);
	ZENGIN_REGISTER_METHOD(oCBarrier, &oCBarrier::InitThunder, 0x0065E030);
	ZENGIN_REGISTER_METHOD(oCBarrier, &oCBarrier::RemoveThunder, 0x0065E060);
	ZENGIN_REGISTER_METHOD(oCBarrier, &oCBarrier::AddThunderSub, 0x0065E110);
	ZENGIN_REGISTER_METHOD(oCBarrier, &oCBarrier::AddThunder, 0x0065E450);
	ZENGIN_REGISTER_METHOD(oCBarrier, &oCBarrier::RenderThunder, 0x0065EB20);
	ZENGIN_REGISTER_METHOD(oCBarrier, &oCBarrier::RenderThunderList, 0x0065EDE0);

	ZENGIN_REGISTER_CLASS(oCSkyControler_Barrier);
	ZENGIN_REGISTER_METHOD(oCSkyControler_Barrier, &oCSkyControler_Barrier::oCSkyControler_Barrier_OnInit, 0x0065EE20);
	ZENGIN_REGISTER_METHOD(oCSkyControler_Barrier, &oCSkyControler_Barrier::RenderSkyPre, 0x0065EF40);

} // namespace Gothic_II_Classic
