namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(zCSession);
	ZENGIN_REGISTER_METHOD(zCSession, &zCSession::zCSession_OnInit, 0x005B7230);
	ZENGIN_REGISTER_METHOD(zCSession, &zCSession::Init, 0x005B73F0);
	ZENGIN_REGISTER_METHOD(zCSession, &zCSession::Done, 0x005B7330);
	ZENGIN_REGISTER_METHOD(zCSession, &zCSession::Render, 0x005B74F0);
	ZENGIN_REGISTER_METHOD(zCSession, &zCSession::RenderBlit, 0x005B7540);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCSession, &zCSession::CamInit, void(zCSession::*)(), 0x005B7560);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCSession, &zCSession::CamInit, void(zCSession::*)(zCVob*, zCCamera*), 0x005B7720);
	ZENGIN_REGISTER_METHOD(zCSession, &zCSession::SetCamera, 0x005B7260);
	ZENGIN_REGISTER_METHOD(zCSession, &zCSession::GetCamera, 0x005B7270);
	ZENGIN_REGISTER_METHOD(zCSession, &zCSession::GetCameraAI, 0x005B7280);
	ZENGIN_REGISTER_METHOD(zCSession, &zCSession::GetCameraVob, 0x005B7290);
	ZENGIN_REGISTER_METHOD(zCSession, &zCSession::GetViewport, 0x005B72A0);
	ZENGIN_REGISTER_METHOD(zCSession, &zCSession::GetWorld, 0x005B7790);
	ZENGIN_REGISTER_METHOD(zCSession, &zCSession::SaveWorld, 0x005B77A0);
	ZENGIN_REGISTER_METHOD(zCSession, &zCSession::LoadWorld, 0x005B77B0);
	ZENGIN_REGISTER_METHOD(zCSession, &zCSession::GetCutsceneManager, 0x005B72B0);
	ZENGIN_REGISTER_METHOD(zCSession, &zCSession::SetTime, 0x005B77C0);
	ZENGIN_REGISTER_METHOD(zCSession, &zCSession::GetTime, 0x005B77D0);
	ZENGIN_REGISTER_METHOD(zCSession, &zCSession::SetWorld, 0x005B77E0);
	ZENGIN_REGISTER_METHOD(zCSession, &zCSession::DesktopInit, 0x005B7430);
	ZENGIN_REGISTER_METHOD(zCSession, &zCSession::CutsceneSystemInit, 0x005B74C0);

} // namespace Gothic_I_Classic
