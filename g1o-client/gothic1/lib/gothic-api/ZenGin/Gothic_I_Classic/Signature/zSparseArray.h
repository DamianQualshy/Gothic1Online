namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(zCSparseArrayBase);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::zCSparseArrayBase_OnInit, 0x005C4A50);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::Destroy, 0x005C4B80);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::Element, 0x005EF560);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::Insert, 0x005C4BD0);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::Delete, 0x005C4E40);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::Clear, 0x005C4F50);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::Find, 0x005C5010);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::Create, 0x005C5190);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::Resize, 0x005EFBE0);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::DataPtr_novt, 0x005C5210);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::AddRef, 0x005C5610);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::Release, 0x005C5670);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::CheckResize, 0x005C56C0);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::SizeAll, 0x005C4960);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::IndexPtr, 0x005C4980);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::DataPtr, 0x005C49A0);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::ManDatPtr, 0x005C49C0);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::IndexIsEqual, 0x005C4F90);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::CopyIndex, 0x005C4FB0);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::DestructIndex, 0x005C49E0);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::Hash, 0x005C4FE0);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::ConstructData, 0x005C49F0);
	ZENGIN_REGISTER_METHOD(zCSparseArrayBase, &zCSparseArrayBase::DestructData, 0x005C4A00);

	ZENGIN_REGISTER_CLASS(zCSparseArrayIterator);
	ZENGIN_REGISTER_METHOD(zCSparseArrayIterator, &zCSparseArrayIterator::Reset, 0x004FCED0);
	ZENGIN_REGISTER_METHOD(zCSparseArrayIterator, &zCSparseArrayIterator::Next, 0x00502740);
	ZENGIN_REGISTER_METHOD(zCSparseArrayIterator, &zCSparseArrayIterator::Register, 0x00502770);
	ZENGIN_REGISTER_METHOD(zCSparseArrayIterator, &zCSparseArrayIterator::DeRegister, 0x00502790);

	ZENGIN_REGISTER_CLASS(zCCacheBase);
	ZENGIN_REGISTER_METHOD(zCCacheBase, &zCCacheBase::zCCacheBase_OnInit, 0x005C57B0);

} // namespace Gothic_I_Classic
