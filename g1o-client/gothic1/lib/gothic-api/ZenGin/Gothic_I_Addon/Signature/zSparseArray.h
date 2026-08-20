namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(zCSparseArrayBase);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::zCSparseArrayBase_OnInit, 0x005E2C20);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::Destroy, 0x005E2DB0);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::Element, 0x005E2EE0);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::Insert, 0x005E2F30);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::Delete, 0x005E31B0);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::Clear, 0x005E32C0);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::Find, 0x005E3380);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::Create, 0x005E34F0);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::Resize, 0x005E3570);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::AddRef, 0x005E39D0);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::Release, 0x005E3A30);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::CheckResize, 0x005E3A80);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::SizeAll, 0x005E2CC0);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::IndexPtr, 0x005E2CE0);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::DataPtr, 0x005E2D00);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::ManDatPtr, 0x005E2D20);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::IndexIsEqual, 0x005E3300);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::CopyIndex, 0x005E3320);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::DestructIndex, 0x005E2D40);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::Hash, 0x005E3350);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::ConstructData, 0x005E2D50);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::DestructData, 0x005E2D60);

	ZENGIN_REGISTER_CLASS(zCSparseArrayIterator);
	ZENGIN_REGISTER_METHOD(zCSparseArrayIterator, &zCSparseArrayIterator::zCSparseArrayIterator_OnInit, 0x006C9F90);
	ZENGIN_REGISTER_METHOD(zCSparseArrayIterator, &zCSparseArrayIterator::Reset, 0x00510020);
	ZENGIN_REGISTER_METHOD(zCSparseArrayIterator, &zCSparseArrayIterator::Next, 0x00516200);
	ZENGIN_REGISTER_METHOD(zCSparseArrayIterator, &zCSparseArrayIterator::Register, 0x00516240);
	ZENGIN_REGISTER_METHOD(zCSparseArrayIterator, &zCSparseArrayIterator::DeRegister, 0x00516260);

	ZENGIN_REGISTER_CLASS(zCCacheBase);
	ZENGIN_REGISTER_METHOD(zCCacheBase, &zCCacheBase::zCCacheBase_OnInit, 0x005E3B80);

} // namespace Gothic_I_Addon
