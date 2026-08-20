namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(zCRayCacheElement);
	ZENGIN_REGISTER_METHOD(zCRayCacheElement, &zCRayCacheElement::zCRayCacheElement_OnInit, 0x005AD960);
	ZENGIN_REGISTER_METHOD(zCRayCacheElement, &zCRayCacheElement::JumpBack, 0x005ADB00);

	ZENGIN_REGISTER_CLASS(zCRayCache);
	ZENGIN_REGISTER_METHOD(zCRayCache, &zCRayCache::Hit, 0x005ADB30);
	ZENGIN_REGISTER_METHOD(zCRayCache, &zCRayCache::HitList, 0x005ADB40);
	ZENGIN_REGISTER_METHOD(zCRayCache, &zCRayCache::StartTraceRay, 0x005ADB80);
	ZENGIN_REGISTER_METHOD(zCRayCache, &zCRayCache::StopTraceRay, 0x005ADE00);
	ZENGIN_REGISTER_METHOD(zCRayCache, &zCRayCache::NextNode, 0x005AE010);

} // namespace Gothic_I_Classic
