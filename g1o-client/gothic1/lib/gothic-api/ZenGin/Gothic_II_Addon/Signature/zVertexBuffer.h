namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(zCVertexBuffer);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::zCVertexBuffer_OnInit, 0x005FBD40);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::SetXYZ, 0x005CCDA0);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::AddRecreateLostVBCallback, 0x005FBFF0);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::RemoveRecreateLostVBCallback, 0x005FC100);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::CallRecreateLostVBCallbacks, 0x005FC160);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::_GetClassDef, 0x005FBE60);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::Create, 0x005FBE70);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::Destroy, 0x005FBE80);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::Lock, 0x005FBE90);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::Unlock, 0x005FBEA0);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::IsLocked, 0x005FBEB0);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::Optimize, 0x005FBEC0);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::SetPrimitiveType, 0x005FBED0);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::GetPrimitiveType, 0x005FBEE0);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::GetVertexFormat, 0x005FBEF0);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::GetVertexType, 0x005FBF00);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::SetIndexList, 0x005FBF10);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::SetIndexListSize, 0x005FBF20);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::GetIndexListSize, 0x005FBF30);
	ZENGIN_REGISTER_METHOD(zCVertexBuffer, &zCVertexBuffer::GetIndexListPtr, 0x005FBF40);

	ZENGIN_REGISTER_CLASS(zCVertexBufferDyn);
	ZENGIN_REGISTER_METHOD(zCVertexBufferDyn, &zCVertexBufferDyn::zCVertexBufferDyn_OnInit, 0x005FC2C0);
	ZENGIN_REGISTER_METHOD(zCVertexBufferDyn, &zCVertexBufferDyn::Lock, 0x005FC350);
	ZENGIN_REGISTER_METHOD(zCVertexBufferDyn, &zCVertexBufferDyn::Unlock, 0x005FC3D0);

	ZENGIN_REGISTER_CLASS(zCVertexBufferDyn2);
	ZENGIN_REGISTER_METHOD(zCVertexBufferDyn2, &zCVertexBufferDyn2::zCVertexBufferDyn2_OnInit, 0x005FC3F0);
	ZENGIN_REGISTER_METHOD(zCVertexBufferDyn2, &zCVertexBufferDyn2::ReserveVerts, 0x005FC490);
	ZENGIN_REGISTER_METHOD(zCVertexBufferDyn2, &zCVertexBufferDyn2::Lock, 0x005FC4B0);
	ZENGIN_REGISTER_METHOD(zCVertexBufferDyn2, &zCVertexBufferDyn2::Unlock, 0x005FC510);

	ZENGIN_REGISTER_CLASS(zCVertexBufferManager);
	ZENGIN_REGISTER_METHOD(zCVertexBufferManager, &zCVertexBufferManager::zCVertexBufferManager_OnInit, 0x005FC570);
	ZENGIN_REGISTER_METHOD(zCVertexBufferManager, &zCVertexBufferManager::AcquireVertexBuffer, 0x005FC600);
	ZENGIN_REGISTER_METHOD(zCVertexBufferManager, &zCVertexBufferManager::ReleaseVertexBuffer, 0x005FC970);
	ZENGIN_REGISTER_METHOD(zCVertexBufferManager, &zCVertexBufferManager::UnlockOpenVertexBuffers, 0x005FCA30);
	ZENGIN_REGISTER_METHOD(zCVertexBufferManager, &zCVertexBufferManager::StartChangeWorld, 0x005FCC30);
	ZENGIN_REGISTER_METHOD(zCVertexBufferManager, &zCVertexBufferManager::EndChangeWorld, 0x005FCC40);

} // namespace Gothic_II_Addon
