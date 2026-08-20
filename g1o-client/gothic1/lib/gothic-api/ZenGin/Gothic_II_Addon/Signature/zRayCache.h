namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(zCRayCacheElement);
	ZENGIN_REGISTER_METHOD(zCRayCacheElement, &zCRayCacheElement::zCRayCacheElement_OnInit, 0x005D2AB0);
	ZENGIN_REGISTER_METHOD(zCRayCacheElement, &zCRayCacheElement::JumpBack, 0x005D2C30);

	ZENGIN_REGISTER_CLASS(zCRayCache);
	ZENGIN_REGISTER_METHOD(zCRayCache, &zCRayCache::Hit, 0x005D2C60);
	ZENGIN_REGISTER_METHOD(zCRayCache, &zCRayCache::HitList, 0x005D2C70);
	ZENGIN_REGISTER_METHOD(zCRayCache, &zCRayCache::StartTraceRay, 0x005D2CB0);
	ZENGIN_REGISTER_METHOD(zCRayCache, &zCRayCache::StopTraceRay, 0x005D2F90);
	ZENGIN_REGISTER_METHOD(zCRayCache, &zCRayCache::NextNode, 0x005D3210);

} // namespace Gothic_II_Addon
