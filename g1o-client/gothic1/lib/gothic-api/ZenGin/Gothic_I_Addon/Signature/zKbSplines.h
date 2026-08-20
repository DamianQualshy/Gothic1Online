namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(zCPositionKey);
	ZENGIN_REGISTER_METHOD(zCPositionKey, &zCPositionKey::GetMat, 0x004997F0);

	ZENGIN_REGISTER_CLASS(zCCubicPolynomial);
	ZENGIN_REGISTER_METHOD(zCCubicPolynomial, &zCCubicPolynomial::zCCubicPolynomial_OnInit, 0x004D9940);
	ZENGIN_REGISTER_METHOD(zCCubicPolynomial, &zCCubicPolynomial::Speed, 0x004DA680);
	ZENGIN_REGISTER_METHOD(zCCubicPolynomial, &zCCubicPolynomial::Length, 0x004DA7D0);
	ZENGIN_REGISTER_METHOD(zCCubicPolynomial, &zCCubicPolynomial::Interpolate0, 0x004DC340);

	ZENGIN_REGISTER_CLASS(zCKBSpline);
	ZENGIN_REGISTER_METHOD(zCKBSpline, &zCKBSpline::InitVars, 0x0048B160);
	ZENGIN_REGISTER_METHOD(zCKBSpline, &zCKBSpline::InterpolateN, 0x0049AEA0);
	ZENGIN_REGISTER_METHOD(zCKBSpline, &zCKBSpline::Initialize, 0x004D9130);
	ZENGIN_REGISTER_METHOD(zCKBSpline, &zCKBSpline::Changed, 0x004D99B0);
	ZENGIN_REGISTER_METHOD(zCKBSpline, &zCKBSpline::Terminate, 0x004D9A00);
	ZENGIN_REGISTER_METHOD(zCKBSpline, &zCKBSpline::ComputeIAndU, 0x004D9A80);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCKBSpline, &zCKBSpline::Interpolate0, void(zCKBSpline::*)(float, zVEC3&), 0x004D9B40);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCKBSpline, &zCKBSpline::Interpolate0, void(zCKBSpline::*)(float, zMAT4&, zTSplLerpMode), 0x004D9D30);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCKBSpline, &zCKBSpline::Interpolate1, void(zCKBSpline::*)(float, zMAT4&, zTSplLerpMode), 0x004DA0E0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCKBSpline, &zCKBSpline::Interpolate1, void(zCKBSpline::*)(float, zVEC3&), 0x004DA3C0);
	ZENGIN_REGISTER_METHOD(zCKBSpline, &zCKBSpline::Interpolate2, 0x004DA550);
	ZENGIN_REGISTER_METHOD(zCKBSpline, &zCKBSpline::ComputeArcLength, 0x004DA940);
	ZENGIN_REGISTER_METHOD(zCKBSpline, &zCKBSpline::InvertIntegral, 0x004DAB40);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCKBSpline, &zCKBSpline::Interpolate0_AL, void(zCKBSpline::*)(float, zVEC3&), 0x004DAF00);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCKBSpline, &zCKBSpline::Interpolate0_AL, void(zCKBSpline::*)(float, zMAT4&, zTSplLerpMode), 0x004DB0E0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCKBSpline, &zCKBSpline::Interpolate1_AL, void(zCKBSpline::*)(float, zMAT4&, zTSplLerpMode), 0x004DB410);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCKBSpline, &zCKBSpline::Interpolate1_AL, void(zCKBSpline::*)(float, zVEC3&), 0x004DB6F0);
	ZENGIN_REGISTER_METHOD(zCKBSpline, &zCKBSpline::Interpolate2_AL, 0x004DB880);
	ZENGIN_REGISTER_METHOD(zCKBSpline, &zCKBSpline::Length, 0x004DB9B0);
	ZENGIN_REGISTER_METHOD(zCKBSpline, &zCKBSpline::DrawControlPolygon, 0x004DBB80);
	ZENGIN_REGISTER_METHOD(zCKBSpline, &zCKBSpline::Draw, 0x004DBDF0);
	ZENGIN_REGISTER_METHOD(zCKBSpline, &zCKBSpline::GetTime, 0x004DC4F0);

} // namespace Gothic_I_Addon
