namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(zCViewFont);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewFont, &zCViewFont::zCViewFont_OnInit, void(zCViewFont::*)(zCFont*, zCOLOR&, int, zTRnd_AlphaBlendFunc), 0x0079A4B0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewFont, &zCViewFont::zCViewFont_OnInit, void(zCViewFont::*)(zCFont*, zCOLOR&), 0x0079A4E0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewFont, &zCViewFont::zCViewFont_OnInit, void(zCViewFont::*)(zCFont*), 0x0079A510);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewFont, &zCViewFont::zCViewFont_OnInit, void(zCViewFont::*)(), 0x0079A550);
	ZENGIN_REGISTER_METHOD(zCViewFont, &zCViewFont::SetFont, 0x0079A5A0);

	ZENGIN_REGISTER_CLASS(zCViewText2);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewText2, &zCViewText2::zCViewText2_OnInit, void(zCViewText2::*)(zSTRING&, zCPosition&, zCOLOR&, float, zCFont*, int, zTRnd_AlphaBlendFunc), 0x00799C10);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewText2, &zCViewText2::zCViewText2_OnInit, void(zCViewText2::*)(zSTRING&, zCPosition&, zCOLOR&, zCFont*, int, zTRnd_AlphaBlendFunc), 0x00799D00);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewText2, &zCViewText2::zCViewText2_OnInit, void(zCViewText2::*)(zSTRING&, zCPosition&, zCOLOR&, float, zCFont*), 0x00799DE0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewText2, &zCViewText2::zCViewText2_OnInit, void(zCViewText2::*)(zSTRING&, zCPosition&, zCOLOR&, zCFont*), 0x00799ED0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewText2, &zCViewText2::zCViewText2_OnInit, void(zCViewText2::*)(zSTRING&, zCPosition&, zCOLOR&), 0x00799FB0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewText2, &zCViewText2::zCViewText2_OnInit, void(zCViewText2::*)(zSTRING&, zCPosition&, float, zCFont*), 0x0079A090);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewText2, &zCViewText2::zCViewText2_OnInit, void(zCViewText2::*)(zSTRING&, zCPosition&, zCFont*), 0x0079A190);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewText2, &zCViewText2::zCViewText2_OnInit, void(zCViewText2::*)(zSTRING&, zCPosition&, float), 0x0079A280);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewText2, &zCViewText2::zCViewText2_OnInit, void(zCViewText2::*)(zSTRING&, zCPosition&), 0x0079A370);

} // namespace Gothic_I_Addon
