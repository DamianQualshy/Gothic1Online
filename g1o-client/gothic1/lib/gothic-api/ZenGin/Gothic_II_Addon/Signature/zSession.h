namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(zCSession);
	ZENGIN_REGISTER_METHOD(zCSession, &zCSession::zCSession_OnInit, 0x005DE750);
	ZENGIN_REGISTER_METHOD(zCSession, &zCSession::Init, 0x005DE910);
	ZENGIN_REGISTER_METHOD(zCSession, &zCSession::Done, 0x005DE850);
	ZENGIN_REGISTER_METHOD(zCSession, &zCSession::Render, 0x005DEA10);
	ZENGIN_REGISTER_METHOD(zCSession, &zCSession::RenderBlit, 0x005DEA60);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCSession, &zCSession::CamInit, void(zCSession::*)(), 0x005DEA80);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCSession, &zCSession::CamInit, void(zCSession::*)(zCVob*, zCCamera*), 0x005DEC80);
	ZENGIN_REGISTER_METHOD(zCSession, &zCSession::SetCamera, 0x005DE780);
	ZENGIN_REGISTER_METHOD(zCSession, &zCSession::GetCamera, 0x005DE790);
	ZENGIN_REGISTER_METHOD(zCSession, &zCSession::GetCameraAI, 0x005DE7A0);
	ZENGIN_REGISTER_METHOD(zCSession, &zCSession::GetCameraVob, 0x005DE7B0);
	ZENGIN_REGISTER_METHOD(zCSession, &zCSession::GetViewport, 0x005DE7C0);
	ZENGIN_REGISTER_METHOD(zCSession, &zCSession::GetWorld, 0x005DECF0);
	ZENGIN_REGISTER_METHOD(zCSession, &zCSession::SaveWorld, 0x005DED00);
	ZENGIN_REGISTER_METHOD(zCSession, &zCSession::LoadWorld, 0x005DED10);
	ZENGIN_REGISTER_METHOD(zCSession, &zCSession::GetCutsceneManager, 0x005DE7D0);
	ZENGIN_REGISTER_METHOD(zCSession, &zCSession::SetTime, 0x005DED20);
	ZENGIN_REGISTER_METHOD(zCSession, &zCSession::GetTime, 0x005DED30);
	ZENGIN_REGISTER_METHOD(zCSession, &zCSession::SetWorld, 0x005DED40);
	ZENGIN_REGISTER_METHOD(zCSession, &zCSession::DesktopInit, 0x005DE950);
	ZENGIN_REGISTER_METHOD(zCSession, &zCSession::CutsceneSystemInit, 0x005DE9E0);

} // namespace Gothic_II_Addon
