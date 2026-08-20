namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(zCViewObject);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::zCViewObject_OnInit, 0x007A1B00);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewObject, &zCViewObject::AddChild, void(__fastcall zCViewObject::*)(zCViewObject*), 0x007A1D50);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewObject, &zCViewObject::AddChild, void(__fastcall zCViewObject::*)(zCViewObject&), 0x007A1D70);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::AddChildren, 0x007A1D90);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewObject, &zCViewObject::RemoveChild, void(__fastcall zCViewObject::*)(zCViewObject*), 0x007A1E00);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewObject, &zCViewObject::RemoveChild, void(__fastcall zCViewObject::*)(zCViewObject&), 0x007A1E80);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::RemoveAllChildren, 0x007A1F00);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::GetChild, 0x007A1FD0);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::SetVirtualPosition, 0x007A2030);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::SetPixelPosition, 0x007A20F0);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::SetVirtualSize, 0x007A21B0);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::SetPixelSize, 0x007A23B0);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::EvaluatePixelPosition, 0x007A25B0);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::EvaluatePixelSize, 0x007A2610);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::UpdatePixelPosition, 0x007A26B0);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::UpdatePixelSize, 0x007A2760);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::UpdatePixelPositionChildren, 0x007A2850);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::UpdatePixelSizeChildren, 0x007A2910);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::UpdatePixelDimensionsChildren, 0x007A2A00);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::ConvertPositionVirtualToPixel, 0x007A2BA0);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::ConvertSizeVirtualToPixel, 0x007A2BE0);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::ConvertPositionPixelToVirtual, 0x007A2C20);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::ConvertSizePixelToVirtual, 0x007A2C70);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::ConvertToPixel, 0x007A2CC0);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::ConvertToPixelLocal, 0x007A2D20);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::ConvertToVirtualLocal, 0x007A2D60);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::_GetClassDef, 0x007A1BE0);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::anx, 0x007A2DF0);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::any, 0x007A2E10);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::nax, 0x007A2DB0);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::nay, 0x007A2DD0);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::ClipLine, 0x007A2E30);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::Line, 0x007A2FE0);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::GetViewport, 0x007A2580);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::GetCode, 0x007A3090);

} // namespace Gothic_II_Classic
