namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(zCViewDraw);
	ZENGIN_REGISTER_METHOD(zCViewDraw, &zCViewDraw::zCViewDraw_OnInit, 0x00753250);
	ZENGIN_REGISTER_METHOD(zCViewDraw, &zCViewDraw::RemoveChild, 0x00753390);
	ZENGIN_REGISTER_METHOD(zCViewDraw, &zCViewDraw::SetTextureAlphaBlendFunc, 0x00753480);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewDraw, &zCViewDraw::SetTexture, void(__fastcall zCViewDraw::*)(zSTRING const&), 0x00753490);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewDraw, &zCViewDraw::SetTexture, void(__fastcall zCViewDraw::*)(zCTexture*), 0x00753570);
	ZENGIN_REGISTER_METHOD(zCViewDraw, &zCViewDraw::SetTextureColor, 0x007535B0);
	ZENGIN_REGISTER_METHOD(zCViewDraw, &zCViewDraw::SetTextureAlpha, 0x007535C0);
	ZENGIN_REGISTER_METHOD(zCViewDraw, &zCViewDraw::Render, 0x007535D0);
	ZENGIN_REGISTER_METHOD(zCViewDraw, &zCViewDraw::Draw, 0x007536D0);
	ZENGIN_REGISTER_METHOD(zCViewDraw, &zCViewDraw::DrawChildren, 0x007537D0);
	ZENGIN_REGISTER_METHOD(zCViewDraw, &zCViewDraw::_GetClassDef, 0x00753240);
	ZENGIN_REGISTER_METHOD(zCViewDraw, &zCViewDraw::EvaluateTexturePosition, 0x007539E0);
	ZENGIN_REGISTER_METHOD(zCViewDraw, &zCViewDraw::BlitTexture, 0x00753950);
	ZENGIN_REGISTER_METHOD(zCViewDraw, &zCViewDraw::Blit, 0x007538F0);

} // namespace Gothic_I_Classic
