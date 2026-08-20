namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(zCFlash);
	ZENGIN_REGISTER_METHOD(zCFlash, &zCFlash::zCFlash_OnInit, 0x004C7940);
	ZENGIN_REGISTER_METHOD(zCFlash, &zCFlash::SetProjectionSphere, 0x004C8150);
	ZENGIN_REGISTER_METHOD(zCFlash, &zCFlash::Generate, 0x004C8210);
	ZENGIN_REGISTER_METHOD(zCFlash, &zCFlash::SetTexture, 0x004C8E00);
	ZENGIN_REGISTER_METHOD(zCFlash, &zCFlash::Update, 0x004C9170);
	ZENGIN_REGISTER_METHOD(zCFlash, &zCFlash::Create, 0x004C9320);
	ZENGIN_REGISTER_METHOD(zCFlash, &zCFlash::Render, 0x004C7F60);
	ZENGIN_REGISTER_METHOD(zCFlash, &zCFlash::IsBBox3DLocal, 0x004C7C30);
	ZENGIN_REGISTER_METHOD(zCFlash, &zCFlash::GetBBox3D, 0x004C7C40);
	ZENGIN_REGISTER_METHOD(zCFlash, &zCFlash::GetVisualName, 0x004C7C70);
	ZENGIN_REGISTER_METHOD(zCFlash, &zCFlash::GetVisualDied, 0x004C7F10);
	ZENGIN_REGISTER_METHOD(zCFlash, &zCFlash::SetVisualUsedBy, 0x004C8120);
	ZENGIN_REGISTER_METHOD(zCFlash, &zCFlash::DynLightVisual, 0x004C7D00);

	ZENGIN_REGISTER_CLASS(zCFlash::zCBolt);
	ZENGIN_REGISTER_METHOD(zCFlash::zCBolt, &zCFlash::zCBolt::zCBolt_OnInit, 0x004C7F30);
	ZENGIN_REGISTER_METHOD(zCFlash::zCBolt, &zCFlash::zCBolt::SetProjectionSphere, 0x004C81B0);
	ZENGIN_REGISTER_METHOD(zCFlash::zCBolt, &zCFlash::zCBolt::Generate_R, 0x004C8630);
	ZENGIN_REGISTER_METHOD(zCFlash::zCBolt, &zCFlash::zCBolt::SetTexture, 0x004C8F60);
	ZENGIN_REGISTER_METHOD(zCFlash::zCBolt, &zCFlash::zCBolt::InterpolateTo, 0x004C9050);
	ZENGIN_REGISTER_METHOD(zCFlash::zCBolt, &zCFlash::zCBolt::Copy, 0x004C9120);
	ZENGIN_REGISTER_METHOD(zCFlash::zCBolt, &zCFlash::zCBolt::Render, 0x004C8DB0);
	ZENGIN_REGISTER_METHOD(zCFlash::zCBolt, &zCFlash::zCBolt::FreeResources, 0x004C8D20);

} // namespace Gothic_II_Classic
