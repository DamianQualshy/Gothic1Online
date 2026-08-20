namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(zCSparseArrayBase);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::zCSparseArrayBase_OnInit, 0x005EF2B0);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::Destroy, 0x005EF430);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::Element, 0x005EF560);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::Insert, 0x005EF5B0);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::Delete, 0x005EF820);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::Clear, 0x005EF930);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::Find, 0x005EF9F0);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::Create, 0x005EFB70);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::Resize, 0x005EFBE0);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::DataPtr_novt, 0x005F0070);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::AddRef, 0x005F00A0);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::Release, 0x005F0100);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::CheckResize, 0x005F0150);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::SizeAll, 0x005EF340);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::IndexPtr, 0x005EF360);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::DataPtr, 0x005EF380);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::ManDatPtr, 0x005EF3A0);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::IndexIsEqual, 0x005EF970);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::CopyIndex, 0x005EF990);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::DeIndex, 0x005EF3C0);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::Hash, 0x005EF9C0);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::ConData, 0x005EF3D0);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::DeData, 0x005EF3E0);

	ZENGIN_REGISTER_CLASS(zCSparseArrayIterator);
	ZENGIN_REGISTER_METHOD(zCSparseArrayIterator, &zCSparseArrayIterator::Reset, 0x0050C900);
	ZENGIN_REGISTER_METHOD(zCSparseArrayIterator, &zCSparseArrayIterator::Next, 0x005122A0);
	ZENGIN_REGISTER_METHOD(zCSparseArrayIterator, &zCSparseArrayIterator::Register, 0x005122D0);
	ZENGIN_REGISTER_METHOD(zCSparseArrayIterator, &zCSparseArrayIterator::DeRegister, 0x005122F0);

	ZENGIN_REGISTER_CLASS(zCCacheBase);
	ZENGIN_REGISTER_METHOD(zCCacheBase, &zCCacheBase::zCCacheBase_OnInit, 0x005F0240);

} // namespace Gothic_II_Addon
