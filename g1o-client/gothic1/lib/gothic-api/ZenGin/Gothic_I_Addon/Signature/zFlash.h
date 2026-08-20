namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(zCFlash);
	ZENGIN_REGISTER_METHOD(zCFlash, &zCFlash::zCFlash_OnInit, 0x004D0480);
	ZENGIN_REGISTER_METHOD(zCFlash, &zCFlash::SetProjectionSphere, 0x004D0CD0);
	ZENGIN_REGISTER_METHOD(zCFlash, &zCFlash::Generate, 0x004D0D90);
	ZENGIN_REGISTER_METHOD(zCFlash, &zCFlash::SetTexture, 0x004D1950);
	ZENGIN_REGISTER_METHOD(zCFlash, &zCFlash::Update, 0x004D1CC0);
	ZENGIN_REGISTER_METHOD(zCFlash, &zCFlash::Create, 0x004D1E60);
	ZENGIN_REGISTER_METHOD(zCFlash, &zCFlash::Render, 0x004D0AE0);
	ZENGIN_REGISTER_METHOD(zCFlash, &zCFlash::IsBBox3DLocal, 0x004D0790);
	ZENGIN_REGISTER_METHOD(zCFlash, &zCFlash::GetBBox3D, 0x004D07A0);
	ZENGIN_REGISTER_METHOD(zCFlash, &zCFlash::GetVisualName, 0x004D07D0);
	ZENGIN_REGISTER_METHOD(zCFlash, &zCFlash::GetVisualDied, 0x004D0A90);
	ZENGIN_REGISTER_METHOD(zCFlash, &zCFlash::SetVisualUsedBy, 0x004D0CA0);
	ZENGIN_REGISTER_METHOD(zCFlash, &zCFlash::DynLightVisual, 0x004D0860);

	ZENGIN_REGISTER_CLASS(zCFlash::zCBolt);
	ZENGIN_REGISTER_METHOD(zCFlash::zCBolt, &zCFlash::zCBolt::zCBolt_OnInit, 0x004D0AB0);
	ZENGIN_REGISTER_METHOD(zCFlash::zCBolt, &zCFlash::zCBolt::SetProjectionSphere, 0x004D0D30);
	ZENGIN_REGISTER_METHOD(zCFlash::zCBolt, &zCFlash::zCBolt::Generate_R, 0x004D11D0);
	ZENGIN_REGISTER_METHOD(zCFlash::zCBolt, &zCFlash::zCBolt::SetTexture, 0x004D1AB0);
	ZENGIN_REGISTER_METHOD(zCFlash::zCBolt, &zCFlash::zCBolt::InterpolateTo, 0x004D1BA0);
	ZENGIN_REGISTER_METHOD(zCFlash::zCBolt, &zCFlash::zCBolt::Copy, 0x004D1C70);
	ZENGIN_REGISTER_METHOD(zCFlash::zCBolt, &zCFlash::zCBolt::Render, 0x004D1910);
	ZENGIN_REGISTER_METHOD(zCFlash::zCBolt, &zCFlash::zCBolt::FreeResources, 0x004D1880);

} // namespace Gothic_I_Addon
