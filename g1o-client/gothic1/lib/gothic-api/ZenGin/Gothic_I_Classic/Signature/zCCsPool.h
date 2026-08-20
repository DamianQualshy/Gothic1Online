namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(zCCSPoolItem);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCCSPoolItem, &zCCSPoolItem::zCCSPoolItem_OnInit, void(zCCSPoolItem::*)(), 0x00420AF0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCCSPoolItem, &zCCSPoolItem::zCCSPoolItem_OnInit, void(zCCSPoolItem::*)(zCCSCutsceneContext*), 0x00420C50);
	ZENGIN_REGISTER_METHOD(zCCSPoolItem, &zCCSPoolItem::Init, 0x00420DB0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCCSPoolItem, &zCCSPoolItem::GetRunBehaviour, zCCSProps::zTCSRunBehaviour(zCCSPoolItem::*)(int&), 0x00420E40);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCCSPoolItem, &zCCSPoolItem::GetRunBehaviour, zCCSProps::zTCSRunBehaviour(zCCSPoolItem::*)(), 0x00420E50);
	ZENGIN_REGISTER_METHOD(zCCSPoolItem, &zCCSPoolItem::SetRunBehaviour, 0x00420E60);
	ZENGIN_REGISTER_METHOD(zCCSPoolItem, &zCCSPoolItem::TestedDeactivation, 0x004210E0);
	ZENGIN_REGISTER_METHOD(zCCSPoolItem, &zCCSPoolItem::IsAllowedToPlay, 0x00421100);
	ZENGIN_REGISTER_METHOD(zCCSPoolItem, &zCCSPoolItem::ClrFlags, 0x00421430);
	ZENGIN_REGISTER_METHOD(zCCSPoolItem, &zCCSPoolItem::SetFlags, 0x00421450);
	ZENGIN_REGISTER_METHOD(zCCSPoolItem, &zCCSPoolItem::HasFlags, 0x00421460);
	ZENGIN_REGISTER_METHOD(zCCSPoolItem, &zCCSPoolItem::PrintDebugInfo, 0x00421120);
	ZENGIN_REGISTER_METHOD(zCCSPoolItem, &zCCSPoolItem::_GetClassDef, 0x00420AE0);
	ZENGIN_REGISTER_METHOD(zCCSPoolItem, &zCCSPoolItem::Archive, 0x00420E80);
	ZENGIN_REGISTER_METHOD(zCCSPoolItem, &zCCSPoolItem::Unarchive, 0x00420F00);

} // namespace Gothic_I_Classic
