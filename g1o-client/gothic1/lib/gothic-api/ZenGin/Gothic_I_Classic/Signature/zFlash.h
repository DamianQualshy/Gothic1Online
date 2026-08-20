namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(zCFlash);
	ZENGIN_REGISTER_METHOD(zCFlash, &zCFlash::zCFlash_OnInit, 0x004C0B70);
	ZENGIN_REGISTER_METHOD(zCFlash, &zCFlash::SetProjectionSphere, 0x004C1380);
	ZENGIN_REGISTER_METHOD(zCFlash, &zCFlash::Generate, 0x004C1440);
	ZENGIN_REGISTER_METHOD(zCFlash, &zCFlash::SetTexture, 0x004C2040);
	ZENGIN_REGISTER_METHOD(zCFlash, &zCFlash::Update, 0x004C2390);
	ZENGIN_REGISTER_METHOD(zCFlash, &zCFlash::Create, 0x004C2540);
	ZENGIN_REGISTER_METHOD(zCFlash, &zCFlash::Render, 0x004C1190);
	ZENGIN_REGISTER_METHOD(zCFlash, &zCFlash::IsBBox3DLocal, 0x004C0E60);
	ZENGIN_REGISTER_METHOD(zCFlash, &zCFlash::GetBBox3D, 0x004C0E70);
	ZENGIN_REGISTER_METHOD(zCFlash, &zCFlash::GetVisualName, 0x004C0EA0);
	ZENGIN_REGISTER_METHOD(zCFlash, &zCFlash::GetVisualDied, 0x004C1140);
	ZENGIN_REGISTER_METHOD(zCFlash, &zCFlash::SetVisualUsedBy, 0x004C1350);
	ZENGIN_REGISTER_METHOD(zCFlash, &zCFlash::DynLightVisual, 0x004C0F30);

	ZENGIN_REGISTER_CLASS(zCFlash::zCBolt);
	ZENGIN_REGISTER_METHOD(zCFlash::zCBolt, &zCFlash::zCBolt::zCBolt_OnInit, 0x004C1160);
	ZENGIN_REGISTER_METHOD(zCFlash::zCBolt, &zCFlash::zCBolt::SetProjectionSphere, 0x004C13E0);
	ZENGIN_REGISTER_METHOD(zCFlash::zCBolt, &zCFlash::zCBolt::Generate_R, 0x004C1860);
	ZENGIN_REGISTER_METHOD(zCFlash::zCBolt, &zCFlash::zCBolt::SetTexture, 0x004C21A0);
	ZENGIN_REGISTER_METHOD(zCFlash::zCBolt, &zCFlash::zCBolt::InterpolateTo, 0x004C2290);
	ZENGIN_REGISTER_METHOD(zCFlash::zCBolt, &zCFlash::zCBolt::Copy, 0x004C2350);
	ZENGIN_REGISTER_METHOD(zCFlash::zCBolt, &zCFlash::zCBolt::Render, 0x004C1FF0);
	ZENGIN_REGISTER_METHOD(zCFlash::zCBolt, &zCFlash::zCBolt::FreeResources, 0x004C1F60);

} // namespace Gothic_I_Classic
