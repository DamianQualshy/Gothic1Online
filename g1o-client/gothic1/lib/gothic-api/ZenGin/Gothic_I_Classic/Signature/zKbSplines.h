namespace Gothic_I_Classic {

	ZENGIN_REGISTER_CLASS(zCPositionKey);
	ZENGIN_REGISTER_METHOD(zCPositionKey, &zCPositionKey::SetMat, 0x004890E0);

	ZENGIN_REGISTER_CLASS(zCCubicPolynomial);
	ZENGIN_REGISTER_METHOD(zCCubicPolynomial, &zCCubicPolynomial::zCCubicPolynomial_OnInit, 0x004C95A0);
	ZENGIN_REGISTER_METHOD(zCCubicPolynomial, &zCCubicPolynomial::Interpolate1, 0x004C96E0);
	ZENGIN_REGISTER_METHOD(zCCubicPolynomial, &zCCubicPolynomial::Speed, 0x004CA1E0);
	ZENGIN_REGISTER_METHOD(zCCubicPolynomial, &zCCubicPolynomial::Length, 0x004CA300);
	ZENGIN_REGISTER_METHOD(zCCubicPolynomial, &zCCubicPolynomial::Interpolate0, 0x004CBD50);

	ZENGIN_REGISTER_CLASS(zCKBSpline);
	ZENGIN_REGISTER_METHOD(zCKBSpline, &zCKBSpline::InitVars, 0x00480300);
	ZENGIN_REGISTER_METHOD(zCKBSpline, &zCKBSpline::InterpolateN, 0x0048F0E0);
	ZENGIN_REGISTER_METHOD(zCKBSpline, &zCKBSpline::Initialize, 0x004C8F00);
	ZENGIN_REGISTER_METHOD(zCKBSpline, &zCKBSpline::Changed, 0x004C9610);
	ZENGIN_REGISTER_METHOD(zCKBSpline, &zCKBSpline::Terminate, 0x004C9660);
	ZENGIN_REGISTER_METHOD(zCKBSpline, &zCKBSpline::ComputeIAndU, 0x004C97C0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCKBSpline, &zCKBSpline::Interpolate0, void(zCKBSpline::*)(float, zVEC3&), 0x004C9870);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCKBSpline, &zCKBSpline::Interpolate0, void(zCKBSpline::*)(float, zMAT4&, zTSplLerpMode), 0x004C9990);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCKBSpline, &zCKBSpline::Interpolate1, void(zCKBSpline::*)(float, zMAT4&, zTSplLerpMode), 0x004C9D40);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCKBSpline, &zCKBSpline::Interpolate1, void(zCKBSpline::*)(float, zVEC3&), 0x004CA000);
	ZENGIN_REGISTER_METHOD(zCKBSpline, &zCKBSpline::Interpolate2, 0x004CA100);
	ZENGIN_REGISTER_METHOD(zCKBSpline, &zCKBSpline::ComputeArcLength, 0x004CA490);
	ZENGIN_REGISTER_METHOD(zCKBSpline, &zCKBSpline::InvertIntegral, 0x004CA670);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCKBSpline, &zCKBSpline::Interpolate0_AL, void(zCKBSpline::*)(float, zVEC3&), 0x004CAA10);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCKBSpline, &zCKBSpline::Interpolate0_AL, void(zCKBSpline::*)(float, zMAT4&, zTSplLerpMode), 0x004CAB20);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCKBSpline, &zCKBSpline::Interpolate1_AL, void(zCKBSpline::*)(float, zMAT4&, zTSplLerpMode), 0x004CAE50);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCKBSpline, &zCKBSpline::Interpolate1_AL, void(zCKBSpline::*)(float, zVEC3&), 0x004CB140);
	ZENGIN_REGISTER_METHOD(zCKBSpline, &zCKBSpline::Interpolate2_AL, 0x004CB240);
	ZENGIN_REGISTER_METHOD(zCKBSpline, &zCKBSpline::Length, 0x004CB320);
	ZENGIN_REGISTER_METHOD(zCKBSpline, &zCKBSpline::DrawControlPolygon, 0x004CB4B0);
	ZENGIN_REGISTER_METHOD(zCKBSpline, &zCKBSpline::Draw, 0x004CB760);
	ZENGIN_REGISTER_METHOD(zCKBSpline, &zCKBSpline::GetTime, 0x004CBE30);

} // namespace Gothic_I_Classic
