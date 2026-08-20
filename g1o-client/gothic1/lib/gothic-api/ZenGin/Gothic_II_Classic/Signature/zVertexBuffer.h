namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(zCVertexBuffer);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::zCVertexBuffer_OnInit, 0x005F4F50);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::SetXYZ, 0x005C6DF0);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::AddRecreateLostVBCallback, 0x005F5200);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::RemoveRecreateLostVBCallback, 0x005F5310);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::CallRecreateLostVBCallbacks, 0x005F5370);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::_GetClassDef, 0x005F5070);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::Create, 0x005F5080);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::Destroy, 0x005F5090);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::Lock, 0x005F50A0);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::Unlock, 0x005F50B0);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::IsLocked, 0x005F50C0);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::Optimize, 0x005F50D0);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::SetPrimitiveType, 0x005F50E0);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::GetPrimitiveType, 0x005F50F0);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::GetVertexFormat, 0x005F5100);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::GetVertexType, 0x005F5110);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::SetIndexList, 0x005F5120);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::SetIndexListSize, 0x005F5130);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::GetIndexListSize, 0x005F5140);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::GetIndexListPtr, 0x005F5150);

	ZENGIN_REGISTER_CLASS(zCVertexBufferDyn);
	ZENGIN_REGISTER_METHOD(zCVertexBufferDyn, &zCVertexBufferDyn::zCVertexBufferDyn_OnInit, 0x005F54D0);
	ZENGIN_REGISTER_METHOD(zCVertexBufferDyn, &zCVertexBufferDyn::Lock, 0x005F5560);
	ZENGIN_REGISTER_METHOD(zCVertexBufferDyn, &zCVertexBufferDyn::Unlock, 0x005F55E0);

	ZENGIN_REGISTER_CLASS(zCVertexBufferDyn2);
	ZENGIN_REGISTER_METHOD(zCVertexBufferDyn2, &zCVertexBufferDyn2::zCVertexBufferDyn2_OnInit, 0x005F5600);
	ZENGIN_REGISTER_METHOD(zCVertexBufferDyn2, &zCVertexBufferDyn2::ReserveVerts, 0x005F56A0);
	ZENGIN_REGISTER_METHOD(zCVertexBufferDyn2, &zCVertexBufferDyn2::Lock, 0x005F56C0);
	ZENGIN_REGISTER_METHOD(zCVertexBufferDyn2, &zCVertexBufferDyn2::Unlock, 0x005F5720);

	ZENGIN_REGISTER_CLASS(zCVertexBufferManager);
	ZENGIN_REGISTER_METHOD(zCVertexBufferManager, &zCVertexBufferManager::zCVertexBufferManager_OnInit, 0x005F5780);
	ZENGIN_REGISTER_METHOD(zCVertexBufferManager, &zCVertexBufferManager::AcquireVertexBuffer, 0x005F5810);
	ZENGIN_REGISTER_METHOD(zCVertexBufferManager, &zCVertexBufferManager::ReleaseVertexBuffer, 0x005F5B80);
	ZENGIN_REGISTER_METHOD(zCVertexBufferManager, &zCVertexBufferManager::UnlockOpenVertexBuffers, 0x005F5C40);
	ZENGIN_REGISTER_METHOD(zCVertexBufferManager, &zCVertexBufferManager::StartChangeWorld, 0x005F5E40);
	ZENGIN_REGISTER_METHOD(zCVertexBufferManager, &zCVertexBufferManager::EndChangeWorld, 0x005F5E50);

} // namespace Gothic_II_Classic
