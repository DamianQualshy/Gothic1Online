namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(zCFlash);
	ZENGIN_REGISTER_METHOD(zCFlash, &zCFlash::zCFlash_OnInit, 0x004C9EB0);
	ZENGIN_REGISTER_METHOD(zCFlash, &zCFlash::SetProjectionSphere, 0x004CA6C0);
	ZENGIN_REGISTER_METHOD(zCFlash, &zCFlash::Generate, 0x004CA780);
	ZENGIN_REGISTER_METHOD(zCFlash, &zCFlash::SetTexture, 0x004CB370);
	ZENGIN_REGISTER_METHOD(zCFlash, &zCFlash::Update, 0x004CB6E0);
	ZENGIN_REGISTER_METHOD(zCFlash, &zCFlash::Create, 0x004CB890);
	ZENGIN_REGISTER_METHOD(zCFlash, &zCFlash::Render, 0x004CA4D0);
	ZENGIN_REGISTER_METHOD(zCFlash, &zCFlash::IsBBox3DLocal, 0x004CA1A0);
	ZENGIN_REGISTER_METHOD(zCFlash, &zCFlash::GetBBox3D, 0x004CA1B0);
	ZENGIN_REGISTER_METHOD(zCFlash, &zCFlash::GetVisualName, 0x004CA1E0);
	ZENGIN_REGISTER_METHOD(zCFlash, &zCFlash::GetVisualDied, 0x004CA480);
	ZENGIN_REGISTER_METHOD(zCFlash, &zCFlash::SetVisualUsedBy, 0x004CA690);
	ZENGIN_REGISTER_METHOD(zCFlash, &zCFlash::DynLightVisual, 0x004CA270);

	ZENGIN_REGISTER_CLASS(zCFlash::zCBolt);
	ZENGIN_REGISTER_METHOD(zCFlash::zCBolt, &zCFlash::zCBolt::zCBolt_OnInit, 0x004CA4A0);
	ZENGIN_REGISTER_METHOD(zCFlash::zCBolt, &zCFlash::zCBolt::SetProjectionSphere, 0x004CA720);
	ZENGIN_REGISTER_METHOD(zCFlash::zCBolt, &zCFlash::zCBolt::Generate_R, 0x004CABA0);
	ZENGIN_REGISTER_METHOD(zCFlash::zCBolt, &zCFlash::zCBolt::SetTexture, 0x004CB4D0);
	ZENGIN_REGISTER_METHOD(zCFlash::zCBolt, &zCFlash::zCBolt::InterpolateTo, 0x004CB5C0);
	ZENGIN_REGISTER_METHOD(zCFlash::zCBolt, &zCFlash::zCBolt::Copy, 0x004CB690);
	ZENGIN_REGISTER_METHOD(zCFlash::zCBolt, &zCFlash::zCBolt::Render, 0x004CB320);
	ZENGIN_REGISTER_METHOD(zCFlash::zCBolt, &zCFlash::zCBolt::FreeResources, 0x004CB290);

} // namespace Gothic_II_Addon
