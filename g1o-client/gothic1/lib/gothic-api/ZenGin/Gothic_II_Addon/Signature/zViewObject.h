namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(zCViewObject);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::zCViewObject_OnInit, 0x006918B0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewObject, &zCViewObject::AddChild, void(__fastcall zCViewObject::*)(zCViewObject*), 0x00691B00);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewObject, &zCViewObject::AddChild, void(__fastcall zCViewObject::*)(zCViewObject&), 0x00691B20);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::AddChildren, 0x00691B40);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewObject, &zCViewObject::RemoveChild, void(__fastcall zCViewObject::*)(zCViewObject*), 0x00691BB0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCViewObject, &zCViewObject::RemoveChild, void(__fastcall zCViewObject::*)(zCViewObject&), 0x00691C30);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::RemoveAllChildren, 0x00691CB0);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::GetChild, 0x00691D80);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::SetVirtualPosition, 0x00691DE0);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::SetPixelPosition, 0x00691EA0);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::SetVirtualSize, 0x00691F60);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::SetPixelSize, 0x00692160);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::EvaluatePixelPosition, 0x00692360);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::EvaluatePixelSize, 0x006923C0);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::UpdatePixelPosition, 0x00692460);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::UpdatePixelSize, 0x00692510);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::UpdatePixelPositionChildren, 0x00692600);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::UpdatePixelSizeChildren, 0x006926C0);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::UpdatePixelDimensionsChildren, 0x006927B0);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::ConvertPositionVirtualToPixel, 0x00692950);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::ConvertSizeVirtualToPixel, 0x00692990);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::ConvertPositionPixelToVirtual, 0x006929D0);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::ConvertSizePixelToVirtual, 0x00692A20);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::ConvertToPixel, 0x00692A70);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::ConvertToPixelLocal, 0x00692AD0);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::ConvertToVirtualLocal, 0x00692B10);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::_GetClassDef, 0x00691990);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::anx, 0x00692BA0);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::any, 0x00692BC0);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::nax, 0x00692B60);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::nay, 0x00692B80);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::ClipLine, 0x00692BE0);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::Line, 0x00692D90);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::GetViewport, 0x00692330);
	ZENGIN_REGISTER_METHOD(zCViewObject, &zCViewObject::GetCode, 0x00692E40);

} // namespace Gothic_II_Addon
