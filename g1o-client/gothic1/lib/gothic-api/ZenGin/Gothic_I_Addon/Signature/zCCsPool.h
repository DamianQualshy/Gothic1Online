namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(zCCSPoolItem);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCCSPoolItem, &zCCSPoolItem::zCCSPoolItem_OnInit, void(zCCSPoolItem::*)(), 0x00422EC0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCCSPoolItem, &zCCSPoolItem::zCCSPoolItem_OnInit, void(zCCSPoolItem::*)(zCCSCutsceneContext*), 0x00423020);
	ZENGIN_REGISTER_METHOD(zCCSPoolItem, &zCCSPoolItem::Init, 0x004231A0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCCSPoolItem, &zCCSPoolItem::GetRunBehaviour, zCCSProps::zTCSRunBehaviour(zCCSPoolItem::*)(int&), 0x00423240);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCCSPoolItem, &zCCSPoolItem::GetRunBehaviour, zCCSProps::zTCSRunBehaviour(zCCSPoolItem::*)(), 0x00423250);
	ZENGIN_REGISTER_METHOD(zCCSPoolItem, &zCCSPoolItem::SetRunBehaviour, 0x00423260);
	ZENGIN_REGISTER_METHOD(zCCSPoolItem, &zCCSPoolItem::TestedDeactivation, 0x004234F0);
	ZENGIN_REGISTER_METHOD(zCCSPoolItem, &zCCSPoolItem::IsAllowedToPlay, 0x00423510);
	ZENGIN_REGISTER_METHOD(zCCSPoolItem, &zCCSPoolItem::ClrFlags, 0x00423880);
	ZENGIN_REGISTER_METHOD(zCCSPoolItem, &zCCSPoolItem::SetFlags, 0x004238A0);
	ZENGIN_REGISTER_METHOD(zCCSPoolItem, &zCCSPoolItem::HasFlags, 0x004238B0);
	ZENGIN_REGISTER_METHOD(zCCSPoolItem, &zCCSPoolItem::PrintDebugInfo, 0x00423530);
	ZENGIN_REGISTER_METHOD(zCCSPoolItem, &zCCSPoolItem::_GetClassDef, 0x00422EB0);
	ZENGIN_REGISTER_METHOD(zCCSPoolItem, &zCCSPoolItem::Archive, 0x00423280);
	ZENGIN_REGISTER_METHOD(zCCSPoolItem, &zCCSPoolItem::Unarchive, 0x00423300);

} // namespace Gothic_I_Addon
