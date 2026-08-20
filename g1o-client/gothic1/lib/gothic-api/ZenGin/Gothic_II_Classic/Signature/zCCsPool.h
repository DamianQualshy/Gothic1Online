namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(zCCSPoolItem);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCCSPoolItem, &zCCSPoolItem::zCCSPoolItem_OnInit, void(zCCSPoolItem::*)(), 0x00420F00);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCCSPoolItem, &zCCSPoolItem::zCCSPoolItem_OnInit, void(zCCSPoolItem::*)(zCCSCutsceneContext*), 0x00421060);
	ZENGIN_REGISTER_METHOD(zCCSPoolItem, &zCCSPoolItem::Init, 0x004211C0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCCSPoolItem, &zCCSPoolItem::GetRunBehaviour, zCCSProps::zTCSRunBehaviour(zCCSPoolItem::*)(int&), 0x00421250);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCCSPoolItem, &zCCSPoolItem::GetRunBehaviour, zCCSProps::zTCSRunBehaviour(zCCSPoolItem::*)(), 0x00421260);
	ZENGIN_REGISTER_METHOD(zCCSPoolItem, &zCCSPoolItem::SetRunBehaviour, 0x00421270);
	ZENGIN_REGISTER_METHOD(zCCSPoolItem, &zCCSPoolItem::TestedDeactivation, 0x004214F0);
	ZENGIN_REGISTER_METHOD(zCCSPoolItem, &zCCSPoolItem::IsAllowedToPlay, 0x00421510);
	ZENGIN_REGISTER_METHOD(zCCSPoolItem, &zCCSPoolItem::ClrFlags, 0x00421890);
	ZENGIN_REGISTER_METHOD(zCCSPoolItem, &zCCSPoolItem::SetFlags, 0x004218B0);
	ZENGIN_REGISTER_METHOD(zCCSPoolItem, &zCCSPoolItem::HasFlags, 0x004218C0);
	ZENGIN_REGISTER_METHOD(zCCSPoolItem, &zCCSPoolItem::PrintDebugInfo, 0x00421530);
	ZENGIN_REGISTER_METHOD(zCCSPoolItem, &zCCSPoolItem::_GetClassDef, 0x00420EF0);
	ZENGIN_REGISTER_METHOD(zCCSPoolItem, &zCCSPoolItem::Archive, 0x00421290);
	ZENGIN_REGISTER_METHOD(zCCSPoolItem, &zCCSPoolItem::Unarchive, 0x00421310);

} // namespace Gothic_II_Classic
