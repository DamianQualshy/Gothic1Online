namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(zCTexAniCtrl);
	ZENGIN_REGISTER_METHOD(zCTexAniCtrl, &zCTexAniCtrl::zCTexAniCtrl_OnInit, 0x0054E9A0);
	ZENGIN_REGISTER_METHOD(zCTexAniCtrl, &zCTexAniCtrl::AdvanceAni, 0x0054E9C0);

	ZENGIN_REGISTER_CLASS(zCMaterial);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMaterial, &zCMaterial::zCMaterial_OnInit, void(zCMaterial::*)(), 0x0054CFC0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMaterial, &zCMaterial::zCMaterial_OnInit, void(zCMaterial::*)(zSTRING const&), 0x0054D0A0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMaterial, &zCMaterial::zCMaterial_OnInit, void(zCMaterial::*)(zCMaterial const&), 0x0054D160);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::GetName, 0x00549250);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::InitThisByMaterial, 0x0054D2F0);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::InitValues, 0x0054D3C0);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::SetDetailObjectVisual, 0x0054D4A0);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::GetDetailObjectVisual, 0x0054D640);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::ApplyTexAniMapping, 0x0054D650);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::GetTexAniVector, 0x0054D6E0);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::IsPortalMaterial, 0x0054D9B0);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::SetTexAniMappingDir, 0x0054DAA0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMaterial, &zCMaterial::SetTexture, void(zCMaterial::*)(zSTRING&), 0x0054DAC0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMaterial, &zCMaterial::SetTexture, void(zCMaterial::*)(zCTexture*), 0x0054DC30);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMaterial, &zCMaterial::SetDetailTexture, void(zCMaterial::*)(zSTRING&), 0x0054DD60);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMaterial, &zCMaterial::SetDetailTexture, void(zCMaterial::*)(zCTexture*), 0x0054DE40);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::AutoAssignDetailTexture, 0x0054DE80);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::GetTexScale, 0x0054DF80);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::SetTexScale, 0x0054DFE0);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::RemoveTexture, 0x0054E000);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::GetTextureName, 0x0054E030);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMaterial, &zCMaterial::GetMatGroupString, zSTRING const&(zCMaterial::*)() const, 0x0054E150);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::SetMatGroupByString, 0x0054E1A0);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::RefreshAvgColorFromTexture, 0x0054E360);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::GetAniTexture, 0x007154C0);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::_GetClassDef, 0x0054CFB0);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::Archive, 0x0054E3B0);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::Unarchive, 0x0054E640);

} // namespace Gothic_I_Classic
