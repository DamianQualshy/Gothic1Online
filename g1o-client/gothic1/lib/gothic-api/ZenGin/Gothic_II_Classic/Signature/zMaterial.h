namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(zCTexAniCtrl);
	ZENGIN_REGISTER_METHOD(zCTexAniCtrl, &zCTexAniCtrl::zCTexAniCtrl_OnInit, 0x00560B10);
	ZENGIN_REGISTER_METHOD(zCTexAniCtrl, &zCTexAniCtrl::AdvanceAni, 0x00560B30);

	ZENGIN_REGISTER_CLASS(zCMaterial);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMaterial, &zCMaterial::zCMaterial_OnInit, void(zCMaterial::*)(), 0x0055EBE0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMaterial, &zCMaterial::zCMaterial_OnInit, void(zCMaterial::*)(zSTRING const&), 0x0055ECC0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMaterial, &zCMaterial::zCMaterial_OnInit, void(zCMaterial::*)(zCMaterial const&), 0x0055ED80);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::GetName, 0x0055ACF0);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::InitThisByMaterial, 0x0055EF10);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::InitValues, 0x0055F040);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::SetDetailObjectVisual, 0x0055F150);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::GetDetailObjectVisual, 0x0055F2D0);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::ApplyTexAniMapping, 0x0055F2E0);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::GetTexAniVector, 0x0055F370);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::IsPortalMaterial, 0x0055F6B0);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::SetTexAniMappingDir, 0x0055F7A0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMaterial, &zCMaterial::SetTexture, void(zCMaterial::*)(zSTRING&), 0x0055F7C0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMaterial, &zCMaterial::SetTexture, void(zCMaterial::*)(zCTexture*), 0x0055F900);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMaterial, &zCMaterial::SetDetailTexture, void(zCMaterial::*)(zSTRING&), 0x0055FAB0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMaterial, &zCMaterial::SetDetailTexture, void(zCMaterial::*)(zCTexture*), 0x0055FBB0);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::AutoAssignDetailTexture, 0x0055FC00);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::GetTexScale, 0x0055FDA0);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::SetTexScale, 0x0055FE00);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::RemoveTexture, 0x0055FE20);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMaterial, &zCMaterial::GetMatGroupString, zSTRING const&(zCMaterial::*)() const, 0x0055FF50);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::SetMatGroupByString, 0x0055FFB0);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::RefreshAvgColorFromTexture, 0x005601B0);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::GetAniTexture, 0x00760480);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::_GetClassDef, 0x0055EBD0);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::Archive, 0x00560200);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::Unarchive, 0x00560560);

} // namespace Gothic_II_Classic
