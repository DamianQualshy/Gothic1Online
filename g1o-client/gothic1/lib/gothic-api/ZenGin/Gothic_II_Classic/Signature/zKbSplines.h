namespace Gothic_II_Classic {

	ZENGIN_REGISTER_CLASS(zCPositionKey);
	ZENGIN_REGISTER_METHOD(zCPositionKey, &zCPositionKey::SetMat, 0x0048F580);
	ZENGIN_REGISTER_METHOD(zCPositionKey, &zCPositionKey::GetMat, 0x00496E10);

	ZENGIN_REGISTER_CLASS(zCCubicPolynomial);
	ZENGIN_REGISTER_METHOD(zCCubicPolynomial, &zCCubicPolynomial::zCCubicPolynomial_OnInit, 0x004D3C10);
	ZENGIN_REGISTER_METHOD(zCCubicPolynomial, &zCCubicPolynomial::Interpolate1, 0x004D3D50);
	ZENGIN_REGISTER_METHOD(zCCubicPolynomial, &zCCubicPolynomial::Speed, 0x004D4850);
	ZENGIN_REGISTER_METHOD(zCCubicPolynomial, &zCCubicPolynomial::Length, 0x004D4970);
	ZENGIN_REGISTER_METHOD(zCCubicPolynomial, &zCCubicPolynomial::Interpolate0, 0x004D63B0);

	ZENGIN_REGISTER_CLASS(zCKBSpline);
	ZENGIN_REGISTER_METHOD(zCKBSpline, &zCKBSpline::InitVars, 0x00486670);
	ZENGIN_REGISTER_METHOD(zCKBSpline, &zCKBSpline::InterpolateN, 0x00496E90);
	ZENGIN_REGISTER_METHOD(zCKBSpline, &zCKBSpline::Initialize, 0x004D3570);
	ZENGIN_REGISTER_METHOD(zCKBSpline, &zCKBSpline::Changed, 0x004D3C80);
	ZENGIN_REGISTER_METHOD(zCKBSpline, &zCKBSpline::Terminate, 0x004D3CD0);
	ZENGIN_REGISTER_METHOD(zCKBSpline, &zCKBSpline::ComputeIAndU, 0x004D3E30);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCKBSpline, &zCKBSpline::Interpolate0, void(zCKBSpline::*)(float, zVEC3&), 0x004D3EE0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCKBSpline, &zCKBSpline::Interpolate0, void(zCKBSpline::*)(float, zMAT4&, zTSplLerpMode), 0x004D4000);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCKBSpline, &zCKBSpline::Interpolate1, void(zCKBSpline::*)(float, zMAT4&, zTSplLerpMode), 0x004D43B0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCKBSpline, &zCKBSpline::Interpolate1, void(zCKBSpline::*)(float, zVEC3&), 0x004D4670);
	ZENGIN_REGISTER_METHOD(zCKBSpline, &zCKBSpline::Interpolate2, 0x004D4770);
	ZENGIN_REGISTER_METHOD(zCKBSpline, &zCKBSpline::ComputeArcLength, 0x004D4B00);
	ZENGIN_REGISTER_METHOD(zCKBSpline, &zCKBSpline::InvertIntegral, 0x004D4CD0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCKBSpline, &zCKBSpline::Interpolate0_AL, void(zCKBSpline::*)(float, zVEC3&), 0x004D5070);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCKBSpline, &zCKBSpline::Interpolate0_AL, void(zCKBSpline::*)(float, zMAT4&, zTSplLerpMode), 0x004D5180);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCKBSpline, &zCKBSpline::Interpolate1_AL, void(zCKBSpline::*)(float, zMAT4&, zTSplLerpMode), 0x004D54B0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCKBSpline, &zCKBSpline::Interpolate1_AL, void(zCKBSpline::*)(float, zVEC3&), 0x004D57A0);
	ZENGIN_REGISTER_METHOD(zCKBSpline, &zCKBSpline::Interpolate2_AL, 0x004D58A0);
	ZENGIN_REGISTER_METHOD(zCKBSpline, &zCKBSpline::Length, 0x004D5980);
	ZENGIN_REGISTER_METHOD(zCKBSpline, &zCKBSpline::DrawControlPolygon, 0x004D5B10);
	ZENGIN_REGISTER_METHOD(zCKBSpline, &zCKBSpline::Draw, 0x004D5DC0);
	ZENGIN_REGISTER_METHOD(zCKBSpline, &zCKBSpline::GetTime, 0x004D6490);

} // namespace Gothic_II_Classic
