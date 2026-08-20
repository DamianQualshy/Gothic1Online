namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(zCSparseArrayBase);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::zCSparseArrayBase_OnInit, 0x005E8500);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::Destroy, 0x005E8680);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::Element, 0x005E87B0);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::Insert, 0x005E8800);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::Delete, 0x005E8A70);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::Clear, 0x005E8B80);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::Find, 0x005E8C40);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::Create, 0x005E8DC0);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::Resize, 0x005E8E30);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::DataPtr_novt, 0x005E92C0);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::AddRef, 0x005E92F0);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::Release, 0x005E9350);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::CheckResize, 0x005E93A0);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::SizeAll, 0x005E8590);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::IndexPtr, 0x005E85B0);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::DataPtr, 0x005E85D0);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::ManDatPtr, 0x005E85F0);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::IndexIsEqual, 0x005E8BC0);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::CopyIndex, 0x005E8BE0);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::DestructIndex, 0x005E8610);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::Hash, 0x005E8C10);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::ConstructData, 0x005E8620);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::DestructData, 0x005E8630);

	ZENGIN_REGISTER_CLASS(zCSparseArrayIterator);
	ZENGIN_REGISTER_METHOD(zCSparseArrayIterator, &zCSparseArrayIterator::zCSparseArrayIterator_OnInit, 0x006DCEB0);
	ZENGIN_REGISTER_METHOD(zCSparseArrayIterator, &zCSparseArrayIterator::Reset, 0x00509B50);
	ZENGIN_REGISTER_METHOD(zCSparseArrayIterator, &zCSparseArrayIterator::Next, 0x0050F4D0);
	ZENGIN_REGISTER_METHOD(zCSparseArrayIterator, &zCSparseArrayIterator::Register, 0x0050F500);
	ZENGIN_REGISTER_METHOD(zCSparseArrayIterator, &zCSparseArrayIterator::DeRegister, 0x0050F520);

	ZENGIN_REGISTER_CLASS(zCCacheBase);
	ZENGIN_REGISTER_METHOD(zCCacheBase, &zCCacheBase::zCCacheBase_OnInit, 0x005E9490);

} // namespace Gothic_II_Classic
