namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(zCViewDraw);
	ZENGIN_REGISTER_METHOD(zCViewDraw, &zCViewDraw::zCViewDraw_OnInit, 0x0068FD20);
	ZENGIN_REGISTER_METHOD(zCViewDraw, &zCViewDraw::RemoveChild, 0x0068FE60);
	ZENGIN_REGISTER_METHOD(zCViewDraw, &zCViewDraw::SetTextureAlphaBlendFunc, 0x0068FF50);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewDraw, &zCViewDraw::SetTexture, void(__fastcall zCViewDraw::*)(zSTRING const&), 0x0068FF60);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewDraw, &zCViewDraw::SetTexture, void(__fastcall zCViewDraw::*)(zCTexture*), 0x00690040);
	ZENGIN_REGISTER_METHOD(zCViewDraw, &zCViewDraw::SetTextureColor, 0x00690080);
	ZENGIN_REGISTER_METHOD(zCViewDraw, &zCViewDraw::SetTextureAlpha, 0x00690090);
	ZENGIN_REGISTER_METHOD(zCViewDraw, &zCViewDraw::TextureCacheIn, 0x006900A0);
	ZENGIN_REGISTER_METHOD(zCViewDraw, &zCViewDraw::Render, 0x006900E0);
	ZENGIN_REGISTER_METHOD(zCViewDraw, &zCViewDraw::Draw, 0x006901F0);
	ZENGIN_REGISTER_METHOD(zCViewDraw, &zCViewDraw::DrawChildren, 0x00690300);
	ZENGIN_REGISTER_METHOD(zCViewDraw, &zCViewDraw::_GetClassDef, 0x0068FD10);
	ZENGIN_REGISTER_METHOD(zCViewDraw, &zCViewDraw::EvaluateTexturePosition, 0x00690540);
	ZENGIN_REGISTER_METHOD(zCViewDraw, &zCViewDraw::BlitTexture, 0x00690490);
	ZENGIN_REGISTER_METHOD(zCViewDraw, &zCViewDraw::Blit, 0x00690430);

} // namespace Gothic_II_Addon
