namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(zCViewObject);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::zCViewObject_OnInit, 0x007971E0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewObject, &zCViewObject::AddChild, void(__fastcall zCViewObject::*)(zCViewObject*), 0x00797440);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewObject, &zCViewObject::AddChild, void(__fastcall zCViewObject::*)(zCViewObject&), 0x00797460);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::AddChildren, 0x00797480);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewObject, &zCViewObject::RemoveChild, void(__fastcall zCViewObject::*)(zCViewObject*), 0x007974E0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewObject, &zCViewObject::RemoveChild, void(__fastcall zCViewObject::*)(zCViewObject&), 0x00797540);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::RemoveAllChildren, 0x007975A0);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::GetChild, 0x00797670);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::SetVirtualPosition, 0x007976C0);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::SetPixelPosition, 0x00797770);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::SetVirtualSize, 0x00797840);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::SetPixelSize, 0x00797A40);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::EvaluatePixelPosition, 0x00797C40);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::EvaluatePixelSize, 0x00797CA0);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::UpdatePixelPosition, 0x00797D40);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::UpdatePixelSize, 0x00797DE0);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::UpdatePixelPositionChildren, 0x00797ED0);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::UpdatePixelSizeChildren, 0x00797F90);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::UpdatePixelDimensionsChildren, 0x00798090);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::ConvertPositionVirtualToPixel, 0x00798240);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::ConvertSizeVirtualToPixel, 0x00798290);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::ConvertPositionPixelToVirtual, 0x007982E0);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::ConvertSizePixelToVirtual, 0x00798330);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::ConvertToPixel, 0x00798380);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::ConvertToPixelLocal, 0x007983E0);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::ConvertToVirtualLocal, 0x00798430);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::_GetClassDef, 0x007972C0);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::anx, 0x007984C0);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::any, 0x007984E0);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::nax, 0x00798480);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::nay, 0x007984A0);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::ClipLine, 0x00798500);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::Line, 0x007986B0);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::GetViewport, 0x00797C10);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::GetCode, 0x00798760);

} // namespace Gothic_I_Addon
