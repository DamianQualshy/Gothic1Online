namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(zCViewBase);
	ZENGIN_REGISTER_METHOD(zCViewBase, &zCViewBase::zCViewBase_OnInit, 0x0068DEE0);
	ZENGIN_REGISTER_METHOD(zCViewBase, &zCViewBase::anx, 0x0068DEF0);
	ZENGIN_REGISTER_METHOD(zCViewBase, &zCViewBase::any, 0x0068DF00);
	ZENGIN_REGISTER_METHOD(zCViewBase, &zCViewBase::nax, 0x0068DF10);
	ZENGIN_REGISTER_METHOD(zCViewBase, &zCViewBase::nay, 0x0068DF20);
	ZENGIN_REGISTER_METHOD(zCViewBase, &zCViewBase::ClipLine, 0x0068DF30);
	ZENGIN_REGISTER_METHOD(zCViewBase, &zCViewBase::Line, 0x0068DF40);
	ZENGIN_REGISTER_METHOD(zCViewBase, &zCViewBase::GetViewport, 0x0068DF50);
	ZENGIN_REGISTER_METHOD(zCViewBase, &zCViewBase::FillZBuffer, 0x0068DF80);
	ZENGIN_REGISTER_METHOD(zCViewBase, &zCViewBase::GetCode, 0x0068DF60);

} // namespace Gothic_II_Addon
