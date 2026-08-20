namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(zCPositionKey);
	ZENGIN_REGISTER_METHOD(zCPositionKey, &zCPositionKey::SetMat, 0x00490F20);
	ZENGIN_REGISTER_METHOD(zCPositionKey, &zCPositionKey::GetMat, 0x00498AC0);

	ZENGIN_REGISTER_CLASS(zCCubicPolynomial);
	ZENGIN_REGISTER_METHOD(zCCubicPolynomial, &zCCubicPolynomial::zCCubicPolynomial_OnInit, 0x004D61D0);
	ZENGIN_REGISTER_METHOD(zCCubicPolynomial, &zCCubicPolynomial::Interpolate1, 0x004D6310);
	ZENGIN_REGISTER_METHOD(zCCubicPolynomial, &zCCubicPolynomial::Speed, 0x004D6E10);
	ZENGIN_REGISTER_METHOD(zCCubicPolynomial, &zCCubicPolynomial::Length, 0x004D6F30);
	ZENGIN_REGISTER_METHOD(zCCubicPolynomial, &zCCubicPolynomial::Interpolate0, 0x004D8970);

	ZENGIN_REGISTER_CLASS(zCKBSpline);
	ZENGIN_REGISTER_METHOD(zCKBSpline, &zCKBSpline::InitVars, 0x00487CD0);
	ZENGIN_REGISTER_METHOD(zCKBSpline, &zCKBSpline::InterpolateN, 0x00498B40);
	ZENGIN_REGISTER_METHOD(zCKBSpline, &zCKBSpline::Initialize, 0x004D5B30);
	ZENGIN_REGISTER_METHOD(zCKBSpline, &zCKBSpline::Changed, 0x004D6240);
	ZENGIN_REGISTER_METHOD(zCKBSpline, &zCKBSpline::Terminate, 0x004D6290);
	ZENGIN_REGISTER_METHOD(zCKBSpline, &zCKBSpline::ComputeIAndU, 0x004D63F0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCKBSpline, &zCKBSpline::Interpolate0, void(zCKBSpline::*)(float, zVEC3&), 0x004D64A0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCKBSpline, &zCKBSpline::Interpolate0, void(zCKBSpline::*)(float, zMAT4&, zTSplLerpMode), 0x004D65C0);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCKBSpline, &zCKBSpline::Interpolate1, void(zCKBSpline::*)(float, zMAT4&, zTSplLerpMode), 0x004D6970);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCKBSpline, &zCKBSpline::Interpolate1, void(zCKBSpline::*)(float, zVEC3&), 0x004D6C30);
	ZENGIN_REGISTER_METHOD(zCKBSpline, &zCKBSpline::Interpolate2, 0x004D6D30);
	ZENGIN_REGISTER_METHOD(zCKBSpline, &zCKBSpline::ComputeArcLength, 0x004D70C0);
	ZENGIN_REGISTER_METHOD(zCKBSpline, &zCKBSpline::InvertIntegral, 0x004D7290);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCKBSpline, &zCKBSpline::Interpolate0_AL, void(zCKBSpline::*)(float, zVEC3&), 0x004D7630);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCKBSpline, &zCKBSpline::Interpolate0_AL, void(zCKBSpline::*)(float, zMAT4&, zTSplLerpMode), 0x004D7740);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCKBSpline, &zCKBSpline::Interpolate1_AL, void(zCKBSpline::*)(float, zMAT4&, zTSplLerpMode), 0x004D7A70);
	ZENGIN_REGISTER_METHOD_EXPLICIT(zCKBSpline, &zCKBSpline::Interpolate1_AL, void(zCKBSpline::*)(float, zVEC3&), 0x004D7D60);
	ZENGIN_REGISTER_METHOD(zCKBSpline, &zCKBSpline::Interpolate2_AL, 0x004D7E60);
	ZENGIN_REGISTER_METHOD(zCKBSpline, &zCKBSpline::Length, 0x004D7F40);
	ZENGIN_REGISTER_METHOD(zCKBSpline, &zCKBSpline::DrawControlPolygon, 0x004D80D0);
	ZENGIN_REGISTER_METHOD(zCKBSpline, &zCKBSpline::Draw, 0x004D8380);
	ZENGIN_REGISTER_METHOD(zCKBSpline, &zCKBSpline::GetTime, 0x004D8A50);

} // namespace Gothic_II_Addon
