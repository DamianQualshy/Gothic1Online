namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(zCViewObject);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::zCViewObject_OnInit, 0x00754D60);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewObject, &zCViewObject::AddChild, void(__fastcall zCViewObject::*)(zCViewObject*), 0x00754FB0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewObject, &zCViewObject::AddChild, void(__fastcall zCViewObject::*)(zCViewObject&), 0x00754FD0);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::AddChildren, 0x00754FF0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewObject, &zCViewObject::RemoveChild, void(__fastcall zCViewObject::*)(zCViewObject*), 0x00755060);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewObject, &zCViewObject::RemoveChild, void(__fastcall zCViewObject::*)(zCViewObject&), 0x007550E0);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::RemoveAllChildren, 0x00755160);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::GetChild, 0x00755230);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::SetVirtualPosition, 0x00755290);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::SetPixelPosition, 0x00755350);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::SetVirtualSize, 0x00755410);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::SetPixelSize, 0x00755610);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::EvaluatePixelPosition, 0x00755810);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::EvaluatePixelSize, 0x00755870);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::UpdatePixelPosition, 0x00755910);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::UpdatePixelSize, 0x007559C0);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::UpdatePixelPositionChildren, 0x00755AB0);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::UpdatePixelSizeChildren, 0x00755B70);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::UpdatePixelDimensionsChildren, 0x00755C60);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::ConvertPositionVirtualToPixel, 0x00755E00);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::ConvertSizeVirtualToPixel, 0x00755E40);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::ConvertPositionPixelToVirtual, 0x00755E80);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::ConvertSizePixelToVirtual, 0x00755ED0);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::ConvertToPixel, 0x00755F20);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::ConvertToPixelLocal, 0x00755F80);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::ConvertToVirtualLocal, 0x00755FC0);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::_GetClassDef, 0x00754E40);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::anx, 0x00756050);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::any, 0x00756070);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::nax, 0x00756010);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::nay, 0x00756030);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::ClipLine, 0x00756090);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::Line, 0x00756240);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::GetViewport, 0x007557E0);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::GetCode, 0x007562F0);

} // namespace Gothic_I_Classic
