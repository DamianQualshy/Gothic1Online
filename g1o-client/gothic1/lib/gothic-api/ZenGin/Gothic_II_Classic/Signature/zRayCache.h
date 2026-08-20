namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(zCRayCacheElement);
	ZENGIN_REGISTER_METHOD(zCRayCacheElement, &zCRayCacheElement::zCRayCacheElement_OnInit, 0x005CBF00);
	ZENGIN_REGISTER_METHOD(zCRayCacheElement, &zCRayCacheElement::JumpBack, 0x005CC080);

	ZENGIN_REGISTER_CLASS(zCRayCache);
	ZENGIN_REGISTER_METHOD(zCRayCache, &zCRayCache::Hit, 0x005CC0B0);
	ZENGIN_REGISTER_METHOD(zCRayCache, &zCRayCache::HitList, 0x005CC0C0);
	ZENGIN_REGISTER_METHOD(zCRayCache, &zCRayCache::StartTraceRay, 0x005CC100);
	ZENGIN_REGISTER_METHOD(zCRayCache, &zCRayCache::StopTraceRay, 0x005CC3E0);
	ZENGIN_REGISTER_METHOD(zCRayCache, &zCRayCache::NextNode, 0x005CC660);

} // namespace Gothic_II_Classic
