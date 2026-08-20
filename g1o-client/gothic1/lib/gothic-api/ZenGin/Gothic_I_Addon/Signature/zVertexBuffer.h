namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(zCVertexBuffer);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::zCVertexBuffer_OnInit, 0x005EFD90);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::AddRecreateLostVBCallback, 0x005F0050);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::RemoveRecreateLostVBCallback, 0x005F0190);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::CallRecreateLostVBCallbacks, 0x005F01F0);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::_GetClassDef, 0x005EFEC0);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::Create, 0x005EFED0);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::Destroy, 0x005EFEE0);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::Lock, 0x005EFEF0);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::Unlock, 0x005EFF00);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::IsLocked, 0x005EFF10);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::Optimize, 0x005EFF20);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::SetPrimitiveType, 0x005EFF30);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::GetPrimitiveType, 0x005EFF40);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::GetVertexFormat, 0x005EFF50);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::GetVertexType, 0x005EFF60);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::SetIndexList, 0x005EFF70);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::SetIndexListSize, 0x005EFF80);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::GetIndexListSize, 0x005EFF90);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::GetIndexListPtr, 0x005EFFA0);

	ZENGIN_REGISTER_CLASS(zCVertexBufferDyn);
	ZENGIN_REGISTER_METHOD(zCVertexBufferDyn, &zCVertexBufferDyn::zCVertexBufferDyn_OnInit, 0x005F0310);
	ZENGIN_REGISTER_METHOD(zCVertexBufferDyn, &zCVertexBufferDyn::Lock, 0x005F03A0);
	ZENGIN_REGISTER_METHOD(zCVertexBufferDyn, &zCVertexBufferDyn::Unlock, 0x005F04F0);

	ZENGIN_REGISTER_CLASS(zCVertexBufferDyn2);
	ZENGIN_REGISTER_METHOD(zCVertexBufferDyn2, &zCVertexBufferDyn2::zCVertexBufferDyn2_OnInit, 0x005F0510);
	ZENGIN_REGISTER_METHOD(zCVertexBufferDyn2, &zCVertexBufferDyn2::ReserveVerts, 0x005F05B0);
	ZENGIN_REGISTER_METHOD(zCVertexBufferDyn2, &zCVertexBufferDyn2::Lock, 0x005F05D0);
	ZENGIN_REGISTER_METHOD(zCVertexBufferDyn2, &zCVertexBufferDyn2::Unlock, 0x005F0630);

	ZENGIN_REGISTER_CLASS(zCVertexBufferManager);
	ZENGIN_REGISTER_METHOD(zCVertexBufferManager, &zCVertexBufferManager::zCVertexBufferManager_OnInit, 0x005F0690);
	ZENGIN_REGISTER_METHOD(zCVertexBufferManager, &zCVertexBufferManager::AcquireVertexBuffer, 0x005F0720);
	ZENGIN_REGISTER_METHOD(zCVertexBufferManager, &zCVertexBufferManager::ReleaseVertexBuffer, 0x005F0960);
	ZENGIN_REGISTER_METHOD(zCVertexBufferManager, &zCVertexBufferManager::UnlockOpenVertexBuffers, 0x005F0A40);
	ZENGIN_REGISTER_METHOD(zCVertexBufferManager, &zCVertexBufferManager::StartChangeWorld, 0x005F0C10);
	ZENGIN_REGISTER_METHOD(zCVertexBufferManager, &zCVertexBufferManager::EndChangeWorld, 0x005F0C20);

} // namespace Gothic_I_Addon
