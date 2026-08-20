namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(zCRayCacheElement);
	ZENGIN_REGISTER_METHOD(zCRayCacheElement, &zCRayCacheElement::zCRayCacheElement_OnInit, 0x005CA8D0);
	ZENGIN_REGISTER_METHOD(zCRayCacheElement, &zCRayCacheElement::JumpBack, 0x005CAA70);

	ZENGIN_REGISTER_CLASS(zCRayCache);
	ZENGIN_REGISTER_METHOD(zCRayCache, &zCRayCache::Hit, 0x005CAAA0);
	ZENGIN_REGISTER_METHOD(zCRayCache, &zCRayCache::HitList, 0x005CAAB0);
	ZENGIN_REGISTER_METHOD(zCRayCache, &zCRayCache::StartTraceRay, 0x005CAAF0);
	ZENGIN_REGISTER_METHOD(zCRayCache, &zCRayCache::StopTraceRay, 0x005CAD60);
	ZENGIN_REGISTER_METHOD(zCRayCache, &zCRayCache::NextNode, 0x005CAF60);

} // namespace Gothic_I_Addon
