namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(zCSession);
	ZENGIN_REGISTER_METHOD(zCSession, &zCSession::zCSession_OnInit, 0x005D4BA0);
	ZENGIN_REGISTER_METHOD(zCSession, &zCSession::Init, 0x005D4D70);
	ZENGIN_REGISTER_METHOD(zCSession, &zCSession::Done, 0x005D4CA0);
	ZENGIN_REGISTER_METHOD(zCSession, &zCSession::Render, 0x005D4E70);
	ZENGIN_REGISTER_METHOD(zCSession, &zCSession::RenderBlit, 0x005D4EC0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCSession, &zCSession::CamInit, void(zCSession::*)(), 0x005D4EE0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCSession, &zCSession::CamInit, void(zCSession::*)(zCVob*, zCCamera*), 0x005D50A0);
	ZENGIN_REGISTER_METHOD(zCSession, &zCSession::SetCamera, 0x005D4BD0);
	ZENGIN_REGISTER_METHOD(zCSession, &zCSession::GetCamera, 0x005D4BE0);
	ZENGIN_REGISTER_METHOD(zCSession, &zCSession::GetCameraAI, 0x005D4BF0);
	ZENGIN_REGISTER_METHOD(zCSession, &zCSession::GetCameraVob, 0x005D4C00);
	ZENGIN_REGISTER_METHOD(zCSession, &zCSession::GetViewport, 0x005D4C10);
	ZENGIN_REGISTER_METHOD(zCSession, &zCSession::GetWorld, 0x005D5110);
	ZENGIN_REGISTER_METHOD(zCSession, &zCSession::SaveWorld, 0x005D5120);
	ZENGIN_REGISTER_METHOD(zCSession, &zCSession::LoadWorld, 0x005D5130);
	ZENGIN_REGISTER_METHOD(zCSession, &zCSession::GetCutsceneManager, 0x005D4C20);
	ZENGIN_REGISTER_METHOD(zCSession, &zCSession::SetTime, 0x005D5140);
	ZENGIN_REGISTER_METHOD(zCSession, &zCSession::GetTime, 0x005D5150);
	ZENGIN_REGISTER_METHOD(zCSession, &zCSession::SetWorld, 0x005D5160);
	ZENGIN_REGISTER_METHOD(zCSession, &zCSession::DesktopInit, 0x005D4DB0);
	ZENGIN_REGISTER_METHOD(zCSession, &zCSession::CutsceneSystemInit, 0x005D4E40);

} // namespace Gothic_I_Addon
