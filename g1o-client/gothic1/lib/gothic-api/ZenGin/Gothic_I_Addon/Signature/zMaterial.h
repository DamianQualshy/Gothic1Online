namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(zCTexAniCtrl);
	ZENGIN_REGISTER_METHOD(zCTexAniCtrl, &zCTexAniCtrl::zCTexAniCtrl_OnInit, 0x00566EB0);
	ZENGIN_REGISTER_METHOD(zCTexAniCtrl, &zCTexAniCtrl::AdvanceAni, 0x00566ED0);

	ZENGIN_REGISTER_CLASS(zCMaterial);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMaterial, &zCMaterial::zCMaterial_OnInit, void(zCMaterial::*)(), 0x00565370);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMaterial, &zCMaterial::zCMaterial_OnInit, void(zCMaterial::*)(zSTRING const&), 0x00565450);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMaterial, &zCMaterial::zCMaterial_OnInit, void(zCMaterial::*)(zCMaterial const&), 0x00565510);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::GetName, 0x00561220);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::InitThisByMaterial, 0x005656A0);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::InitValues, 0x00565790);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::SetDetailObjectVisual, 0x00565870);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::GetDetailObjectVisual, 0x00565A20);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::ApplyTexAniMapping, 0x00565A30);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::GetTexAniVector, 0x00565AC0);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::IsPortalMaterial, 0x00565DE0);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::SetTexAniMappingDir, 0x00565ED0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMaterial, &zCMaterial::SetTexture, void(zCMaterial::*)(zSTRING&), 0x00565EF0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMaterial, &zCMaterial::SetTexture, void(zCMaterial::*)(zCTexture*), 0x00566070);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMaterial, &zCMaterial::SetDetailTexture, void(zCMaterial::*)(zSTRING&), 0x005661A0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMaterial, &zCMaterial::SetDetailTexture, void(zCMaterial::*)(zCTexture*), 0x00566290);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::AutoAssignDetailTexture, 0x005662E0);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::GetTexScale, 0x005663F0);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::SetTexScale, 0x00566450);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::RemoveTexture, 0x00566470);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::GetTextureName, 0x005664A0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMaterial, &zCMaterial::GetMatGroupString, zSTRING const&(zCMaterial::*)() const, 0x005665C0);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::SetMatGroupByString, 0x00566610);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::RefreshAvgColorFromTexture, 0x00566800);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::GetAniTexture, 0x00751320);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::_GetClassDef, 0x00565360);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::Archive, 0x00566850);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::Unarchive, 0x00566AF0);

} // namespace Gothic_I_Addon
