namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(zCViewFont);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewFont, &zCViewFont::zCViewFont_OnInit, void(zCViewFont::*)(zCFont*, zCOLOR&, int, zTRnd_AlphaBlendFunc), 0x007A4E90);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewFont, &zCViewFont::zCViewFont_OnInit, void(zCViewFont::*)(zCFont*, zCOLOR&), 0x007A4EC0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewFont, &zCViewFont::zCViewFont_OnInit, void(zCViewFont::*)(zCFont*), 0x007A4EF0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewFont, &zCViewFont::zCViewFont_OnInit, void(zCViewFont::*)(), 0x007A4F30);
	ZENGIN_REGISTER_METHOD(zCViewFont, &zCViewFont::SetFont, 0x007A4F80);

	ZENGIN_REGISTER_CLASS(zCViewText2);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewText2, &zCViewText2::zCViewText2_OnInit, void(zCViewText2::*)(zSTRING&, zCPosition&, zCOLOR&, float, zCFont*, int, zTRnd_AlphaBlendFunc), 0x007A4620);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewText2, &zCViewText2::zCViewText2_OnInit, void(zCViewText2::*)(zSTRING&, zCPosition&, zCOLOR&, zCFont*, int, zTRnd_AlphaBlendFunc), 0x007A4700);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewText2, &zCViewText2::zCViewText2_OnInit, void(zCViewText2::*)(zSTRING&, zCPosition&, zCOLOR&, float, zCFont*), 0x007A47E0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewText2, &zCViewText2::zCViewText2_OnInit, void(zCViewText2::*)(zSTRING&, zCPosition&, zCOLOR&, zCFont*), 0x007A48D0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewText2, &zCViewText2::zCViewText2_OnInit, void(zCViewText2::*)(zSTRING&, zCPosition&, zCOLOR&), 0x007A49B0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewText2, &zCViewText2::zCViewText2_OnInit, void(zCViewText2::*)(zSTRING&, zCPosition&, float, zCFont*), 0x007A4A90);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewText2, &zCViewText2::zCViewText2_OnInit, void(zCViewText2::*)(zSTRING&, zCPosition&, zCFont*), 0x007A4B80);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewText2, &zCViewText2::zCViewText2_OnInit, void(zCViewText2::*)(zSTRING&, zCPosition&, float), 0x007A4C70);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewText2, &zCViewText2::zCViewText2_OnInit, void(zCViewText2::*)(zSTRING&, zCPosition&), 0x007A4D60);

} // namespace Gothic_II_Classic
