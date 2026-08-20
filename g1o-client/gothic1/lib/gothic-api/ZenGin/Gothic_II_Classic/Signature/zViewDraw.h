namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(zCViewDraw);
	ZENGIN_REGISTER_METHOD(zCViewDraw, &zCViewDraw::zCViewDraw_OnInit, 0x0079FF70);
	ZENGIN_REGISTER_METHOD(zCViewDraw, &zCViewDraw::RemoveChild, 0x007A00B0);
	ZENGIN_REGISTER_METHOD(zCViewDraw, &zCViewDraw::SetTextureAlphaBlendFunc, 0x007A01A0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewDraw, &zCViewDraw::SetTexture, void(__fastcall zCViewDraw::*)(zSTRING const&), 0x007A01B0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewDraw, &zCViewDraw::SetTexture, void(__fastcall zCViewDraw::*)(zCTexture*), 0x007A0290);
	ZENGIN_REGISTER_METHOD(zCViewDraw, &zCViewDraw::SetTextureColor, 0x007A02D0);
	ZENGIN_REGISTER_METHOD(zCViewDraw, &zCViewDraw::SetTextureAlpha, 0x007A02E0);
	ZENGIN_REGISTER_METHOD(zCViewDraw, &zCViewDraw::TextureCacheIn, 0x007A02F0);
	ZENGIN_REGISTER_METHOD(zCViewDraw, &zCViewDraw::Render, 0x007A0330);
	ZENGIN_REGISTER_METHOD(zCViewDraw, &zCViewDraw::Draw, 0x007A0440);
	ZENGIN_REGISTER_METHOD(zCViewDraw, &zCViewDraw::DrawChildren, 0x007A0550);
	ZENGIN_REGISTER_METHOD(zCViewDraw, &zCViewDraw::_GetClassDef, 0x0079FF60);
	ZENGIN_REGISTER_METHOD(zCViewDraw, &zCViewDraw::EvaluateTexturePosition, 0x007A0790);
	ZENGIN_REGISTER_METHOD(zCViewDraw, &zCViewDraw::BlitTexture, 0x007A06E0);
	ZENGIN_REGISTER_METHOD(zCViewDraw, &zCViewDraw::Blit, 0x007A0680);

} // namespace Gothic_II_Classic
