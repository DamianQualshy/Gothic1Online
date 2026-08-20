namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(zCCSPoolItem);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCCSPoolItem, &zCCSPoolItem::zCCSPoolItem_OnInit, void(zCCSPoolItem::*)(), 0x00421230);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCCSPoolItem, &zCCSPoolItem::zCCSPoolItem_OnInit, void(zCCSPoolItem::*)(zCCSCutsceneContext*), 0x00421390);
	ZENGIN_REGISTER_METHOD(zCCSPoolItem, &zCCSPoolItem::Init, 0x004214F0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCCSPoolItem, &zCCSPoolItem::GetRunBehaviour, zCCSProps::zTCSRunBehaviour(zCCSPoolItem::*)(int&), 0x00421580);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCCSPoolItem, &zCCSPoolItem::GetRunBehaviour, zCCSProps::zTCSRunBehaviour(zCCSPoolItem::*)(), 0x00421590);
	ZENGIN_REGISTER_METHOD(zCCSPoolItem, &zCCSPoolItem::SetRunBehaviour, 0x004215A0);
	ZENGIN_REGISTER_METHOD(zCCSPoolItem, &zCCSPoolItem::TestedDeactivation, 0x00421820);
	ZENGIN_REGISTER_METHOD(zCCSPoolItem, &zCCSPoolItem::IsAllowedToPlay, 0x00421840);
	ZENGIN_REGISTER_METHOD(zCCSPoolItem, &zCCSPoolItem::ClrFlags, 0x00421BC0);
	ZENGIN_REGISTER_METHOD(zCCSPoolItem, &zCCSPoolItem::SetFlags, 0x00421BE0);
	ZENGIN_REGISTER_METHOD(zCCSPoolItem, &zCCSPoolItem::HasFlags, 0x00421BF0);
	ZENGIN_REGISTER_METHOD(zCCSPoolItem, &zCCSPoolItem::PrintDebugInfo, 0x00421860);
	ZENGIN_REGISTER_METHOD(zCCSPoolItem, &zCCSPoolItem::_GetClassDef, 0x00421220);
	ZENGIN_REGISTER_METHOD(zCCSPoolItem, &zCCSPoolItem::Archive, 0x004215C0);
	ZENGIN_REGISTER_METHOD(zCCSPoolItem, &zCCSPoolItem::Unarchive, 0x00421640);

} // namespace Gothic_II_Addon
