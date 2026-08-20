namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(zCSession);
	ZENGIN_REGISTER_METHOD(zCSession, &zCSession::zCSession_OnInit, 0x005D7990);
	ZENGIN_REGISTER_METHOD(zCSession, &zCSession::Init, 0x005D7B50);
	ZENGIN_REGISTER_METHOD(zCSession, &zCSession::Done, 0x005D7A90);
	ZENGIN_REGISTER_METHOD(zCSession, &zCSession::Render, 0x005D7C50);
	ZENGIN_REGISTER_METHOD(zCSession, &zCSession::RenderBlit, 0x005D7CA0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCSession, &zCSession::CamInit, void(zCSession::*)(), 0x005D7CC0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCSession, &zCSession::CamInit, void(zCSession::*)(zCVob*, zCCamera*), 0x005D7EC0);
	ZENGIN_REGISTER_METHOD(zCSession, &zCSession::SetCamera, 0x005D79C0);
	ZENGIN_REGISTER_METHOD(zCSession, &zCSession::GetCamera, 0x005D79D0);
	ZENGIN_REGISTER_METHOD(zCSession, &zCSession::GetCameraAI, 0x005D79E0);
	ZENGIN_REGISTER_METHOD(zCSession, &zCSession::GetCameraVob, 0x005D79F0);
	ZENGIN_REGISTER_METHOD(zCSession, &zCSession::GetViewport, 0x005D7A00);
	ZENGIN_REGISTER_METHOD(zCSession, &zCSession::GetWorld, 0x005D7F30);
	ZENGIN_REGISTER_METHOD(zCSession, &zCSession::SaveWorld, 0x005D7F40);
	ZENGIN_REGISTER_METHOD(zCSession, &zCSession::LoadWorld, 0x005D7F50);
	ZENGIN_REGISTER_METHOD(zCSession, &zCSession::GetCutsceneManager, 0x005D7A10);
	ZENGIN_REGISTER_METHOD(zCSession, &zCSession::SetTime, 0x005D7F60);
	ZENGIN_REGISTER_METHOD(zCSession, &zCSession::GetTime, 0x005D7F70);
	ZENGIN_REGISTER_METHOD(zCSession, &zCSession::SetWorld, 0x005D7F80);
	ZENGIN_REGISTER_METHOD(zCSession, &zCSession::DesktopInit, 0x005D7B90);
	ZENGIN_REGISTER_METHOD(zCSession, &zCSession::CutsceneSystemInit, 0x005D7C20);

} // namespace Gothic_II_Classic
