namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(zCViewFont);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewFont, &zCViewFont::zCViewFont_OnInit, void(zCViewFont::*)(zCFont*, zCOLOR&, int, zTRnd_AlphaBlendFunc), 0x00757F90);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewFont, &zCViewFont::zCViewFont_OnInit, void(zCViewFont::*)(zCFont*, zCOLOR&), 0x00757FC0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewFont, &zCViewFont::zCViewFont_OnInit, void(zCViewFont::*)(zCFont*), 0x00757FF0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewFont, &zCViewFont::zCViewFont_OnInit, void(zCViewFont::*)(), 0x00758030);
	ZENGIN_REGISTER_METHOD(zCViewFont, &zCViewFont::SetFont, 0x00758080);

	ZENGIN_REGISTER_CLASS(zCViewText2);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewText2, &zCViewText2::zCViewText2_OnInit, void(zCViewText2::*)(zSTRING&, zCPosition&, zCOLOR&, float, zCFont*, int, zTRnd_AlphaBlendFunc), 0x00757720);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewText2, &zCViewText2::zCViewText2_OnInit, void(zCViewText2::*)(zSTRING&, zCPosition&, zCOLOR&, zCFont*, int, zTRnd_AlphaBlendFunc), 0x00757800);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewText2, &zCViewText2::zCViewText2_OnInit, void(zCViewText2::*)(zSTRING&, zCPosition&, zCOLOR&, float, zCFont*), 0x007578E0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewText2, &zCViewText2::zCViewText2_OnInit, void(zCViewText2::*)(zSTRING&, zCPosition&, zCOLOR&, zCFont*), 0x007579D0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewText2, &zCViewText2::zCViewText2_OnInit, void(zCViewText2::*)(zSTRING&, zCPosition&, zCOLOR&), 0x00757AB0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewText2, &zCViewText2::zCViewText2_OnInit, void(zCViewText2::*)(zSTRING&, zCPosition&, float, zCFont*), 0x00757B90);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewText2, &zCViewText2::zCViewText2_OnInit, void(zCViewText2::*)(zSTRING&, zCPosition&, zCFont*), 0x00757C80);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewText2, &zCViewText2::zCViewText2_OnInit, void(zCViewText2::*)(zSTRING&, zCPosition&, float), 0x00757D70);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewText2, &zCViewText2::zCViewText2_OnInit, void(zCViewText2::*)(zSTRING&, zCPosition&), 0x00757E60);

} // namespace Gothic_I_Classic
