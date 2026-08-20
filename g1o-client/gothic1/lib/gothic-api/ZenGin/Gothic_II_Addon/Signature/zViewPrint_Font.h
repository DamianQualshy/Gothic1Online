namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(zCViewFont);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewFont, &zCViewFont::zCViewFont_OnInit, void(zCViewFont::*)(zCFont*, zCOLOR&, int, zTRnd_AlphaBlendFunc), 0x00694C40);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewFont, &zCViewFont::zCViewFont_OnInit, void(zCViewFont::*)(zCFont*, zCOLOR&), 0x00694C70);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewFont, &zCViewFont::zCViewFont_OnInit, void(zCViewFont::*)(zCFont*), 0x00694CA0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewFont, &zCViewFont::zCViewFont_OnInit, void(zCViewFont::*)(), 0x00694CE0);
	ZENGIN_REGISTER_METHOD(zCViewFont, &zCViewFont::SetFont, 0x00694D30);

	ZENGIN_REGISTER_CLASS(zCViewText2);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewText2, &zCViewText2::zCViewText2_OnInit, void(zCViewText2::*)(zSTRING&, zCPosition&, zCOLOR&, float, zCFont*, int, zTRnd_AlphaBlendFunc), 0x006943D0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewText2, &zCViewText2::zCViewText2_OnInit, void(zCViewText2::*)(zSTRING&, zCPosition&, zCOLOR&, zCFont*, int, zTRnd_AlphaBlendFunc), 0x006944B0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewText2, &zCViewText2::zCViewText2_OnInit, void(zCViewText2::*)(zSTRING&, zCPosition&, zCOLOR&, float, zCFont*), 0x00694590);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewText2, &zCViewText2::zCViewText2_OnInit, void(zCViewText2::*)(zSTRING&, zCPosition&, zCOLOR&, zCFont*), 0x00694680);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewText2, &zCViewText2::zCViewText2_OnInit, void(zCViewText2::*)(zSTRING&, zCPosition&, zCOLOR&), 0x00694760);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewText2, &zCViewText2::zCViewText2_OnInit, void(zCViewText2::*)(zSTRING&, zCPosition&, float, zCFont*), 0x00694840);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewText2, &zCViewText2::zCViewText2_OnInit, void(zCViewText2::*)(zSTRING&, zCPosition&, zCFont*), 0x00694930);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewText2, &zCViewText2::zCViewText2_OnInit, void(zCViewText2::*)(zSTRING&, zCPosition&, float), 0x00694A20);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewText2, &zCViewText2::zCViewText2_OnInit, void(zCViewText2::*)(zSTRING&, zCPosition&), 0x00694B10);

} // namespace Gothic_II_Addon
