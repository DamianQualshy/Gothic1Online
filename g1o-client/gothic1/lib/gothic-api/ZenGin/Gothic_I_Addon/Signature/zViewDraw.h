namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(zCViewDraw);
	ZENGIN_REGISTER_METHOD(zCViewDraw, &zCViewDraw::zCViewDraw_OnInit, 0x007956F0);
	ZENGIN_REGISTER_METHOD(zCViewDraw, &zCViewDraw::RemoveChild, 0x00795830);
	ZENGIN_REGISTER_METHOD(zCViewDraw, &zCViewDraw::SetTextureAlphaBlendFunc, 0x00795920);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewDraw, &zCViewDraw::SetTexture, void(__fastcall zCViewDraw::*)(zSTRING const&), 0x00795930);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewDraw, &zCViewDraw::SetTexture, void(__fastcall zCViewDraw::*)(zCTexture*), 0x00795A20);
	ZENGIN_REGISTER_METHOD(zCViewDraw, &zCViewDraw::SetTextureColor, 0x00795A60);
	ZENGIN_REGISTER_METHOD(zCViewDraw, &zCViewDraw::SetTextureAlpha, 0x00795A70);
	ZENGIN_REGISTER_METHOD(zCViewDraw, &zCViewDraw::Render, 0x00795A80);
	ZENGIN_REGISTER_METHOD(zCViewDraw, &zCViewDraw::Draw, 0x00795B80);
	ZENGIN_REGISTER_METHOD(zCViewDraw, &zCViewDraw::DrawChildren, 0x00795C80);
	ZENGIN_REGISTER_METHOD(zCViewDraw, &zCViewDraw::_GetClassDef, 0x007956E0);
	ZENGIN_REGISTER_METHOD(zCViewDraw, &zCViewDraw::EvaluateTexturePosition, 0x00795E90);
	ZENGIN_REGISTER_METHOD(zCViewDraw, &zCViewDraw::BlitTexture, 0x00795E00);
	ZENGIN_REGISTER_METHOD(zCViewDraw, &zCViewDraw::Blit, 0x00795DA0);

} // namespace Gothic_I_Addon
