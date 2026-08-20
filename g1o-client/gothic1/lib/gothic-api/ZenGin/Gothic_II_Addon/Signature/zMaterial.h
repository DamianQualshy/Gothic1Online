namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(zCTexAniCtrl);
	ZENGIN_REGISTER_METHOD(zCTexAniCtrl, &zCTexAniCtrl::zCTexAniCtrl_OnInit, 0x00565D30);
	ZENGIN_REGISTER_METHOD(zCTexAniCtrl, &zCTexAniCtrl::AdvanceAni, 0x00565D50);

	ZENGIN_REGISTER_CLASS(zCMaterial);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMaterial, &zCMaterial::zCMaterial_OnInit, void(zCMaterial::*)(), 0x00563E00);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMaterial, &zCMaterial::zCMaterial_OnInit, void(zCMaterial::*)(zSTRING const&), 0x00563EE0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMaterial, &zCMaterial::zCMaterial_OnInit, void(zCMaterial::*)(zCMaterial const&), 0x00563FA0);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::GetName, 0x0055FF10);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::InitThisByMaterial, 0x00564130);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::InitValues, 0x00564260);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::SetDetailObjectVisual, 0x00564370);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::GetDetailObjectVisual, 0x005644F0);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::ApplyTexAniMapping, 0x00564500);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::GetTexAniVector, 0x00564590);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::IsPortalMaterial, 0x005648D0);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::SetTexAniMappingDir, 0x005649C0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMaterial, &zCMaterial::SetTexture, void(zCMaterial::*)(zSTRING&), 0x005649E0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMaterial, &zCMaterial::SetTexture, void(zCMaterial::*)(zCTexture*), 0x00564B20);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMaterial, &zCMaterial::SetDetailTexture, void(zCMaterial::*)(zSTRING&), 0x00564CD0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMaterial, &zCMaterial::SetDetailTexture, void(zCMaterial::*)(zCTexture*), 0x00564DD0);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::AutoAssignDetailTexture, 0x00564E20);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::GetTexScale, 0x00564FC0);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::SetTexScale, 0x00565020);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::RemoveTexture, 0x00565040);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCMaterial, &zCMaterial::GetMatGroupString, zSTRING const&(zCMaterial::*)() const, 0x00565170);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::SetMatGroupByString, 0x005651D0);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::RefreshAvgColorFromTexture, 0x005653D0);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::GetAniTexture, 0x0064BA20);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::_GetClassDef, 0x00563DF0);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::Archive, 0x00565420);
	ZENGIN_REGISTER_METHOD(zCMaterial, &zCMaterial::Unarchive, 0x00565780);

} // namespace Gothic_II_Addon
