namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(zCVertexBuffer);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::zCVertexBuffer_OnInit, 0x005D0C40);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::AddRecreateLostVBCallback, 0x005D0EF0);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::RemoveRecreateLostVBCallback, 0x005D1020);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::CallRecreateLostVBCallbacks, 0x005D1080);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::_GetClassDef, 0x005D0D60);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::Create, 0x005D0D70);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::Destroy, 0x005D0D80);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::Lock, 0x005D0D90);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::Unlock, 0x005D0DA0);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::IsLocked, 0x005D0DB0);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::Optimize, 0x005D0DC0);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::SetPrimitiveType, 0x005D0DD0);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::GetPrimitiveType, 0x005D0DE0);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::GetVertexFormat, 0x005D0DF0);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::GetVertexType, 0x005D0E00);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::SetIndexList, 0x005D0E10);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::SetIndexListSize, 0x005D0E20);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::GetIndexListSize, 0x005D0E30);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::GetIndexListPtr, 0x005D0E40);

	ZENGIN_REGISTER_CLASS(zCVertexBufferDyn);
	ZENGIN_REGISTER_METHOD(zCVertexBufferDyn, &zCVertexBufferDyn::zCVertexBufferDyn_OnInit, 0x005D11A0);
	ZENGIN_REGISTER_METHOD(zCVertexBufferDyn, &zCVertexBufferDyn::Lock, 0x005D1230);
	ZENGIN_REGISTER_METHOD(zCVertexBufferDyn, &zCVertexBufferDyn::Unlock, 0x005D1360);

	ZENGIN_REGISTER_CLASS(zCVertexBufferDyn2);
	ZENGIN_REGISTER_METHOD(zCVertexBufferDyn2, &zCVertexBufferDyn2::zCVertexBufferDyn2_OnInit, 0x005D1380);
	ZENGIN_REGISTER_METHOD(zCVertexBufferDyn2, &zCVertexBufferDyn2::ReserveVerts, 0x005D1420);
	ZENGIN_REGISTER_METHOD(zCVertexBufferDyn2, &zCVertexBufferDyn2::Lock, 0x005D1440);
	ZENGIN_REGISTER_METHOD(zCVertexBufferDyn2, &zCVertexBufferDyn2::Unlock, 0x005D14A0);

	ZENGIN_REGISTER_CLASS(zCVertexBufferManager);
	ZENGIN_REGISTER_METHOD(zCVertexBufferManager, &zCVertexBufferManager::zCVertexBufferManager_OnInit, 0x005D1500);
	ZENGIN_REGISTER_METHOD(zCVertexBufferManager, &zCVertexBufferManager::AcquireVertexBuffer, 0x005D1590);
	ZENGIN_REGISTER_METHOD(zCVertexBufferManager, &zCVertexBufferManager::ReleaseVertexBuffer, 0x005D17D0);
	ZENGIN_REGISTER_METHOD(zCVertexBufferManager, &zCVertexBufferManager::UnlockOpenVertexBuffers, 0x005D1890);
	ZENGIN_REGISTER_METHOD(zCVertexBufferManager, &zCVertexBufferManager::StartChangeWorld, 0x005D1A50);
	ZENGIN_REGISTER_METHOD(zCVertexBufferManager, &zCVertexBufferManager::EndChangeWorld, 0x005D1A60);

} // namespace Gothic_I_Classic
