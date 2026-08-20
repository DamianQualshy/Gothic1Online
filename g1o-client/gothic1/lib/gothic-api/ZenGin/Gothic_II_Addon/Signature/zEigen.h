namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(zCMgcEigenD);
	ZENGIN_REGISTER_METHOD(zCMgcEigenD, &zCMgcEigenD::zCMgcEigenD_OnInit, 0x00557080);
	ZENGIN_REGISTER_METHOD(zCMgcEigenD, &zCMgcEigenD::Tridiagonal2, 0x00557170);
	ZENGIN_REGISTER_METHOD(zCMgcEigenD, &zCMgcEigenD::Tridiagonal3, 0x005571E0);
	ZENGIN_REGISTER_METHOD(zCMgcEigenD, &zCMgcEigenD::Tridiagonal4, 0x005573A0);
	ZENGIN_REGISTER_METHOD(zCMgcEigenD, &zCMgcEigenD::TridiagonalN, 0x00557A90);
	ZENGIN_REGISTER_METHOD(zCMgcEigenD, &zCMgcEigenD::QLAlgorithm, 0x00557E80);
	ZENGIN_REGISTER_METHOD(zCMgcEigenD, &zCMgcEigenD::DecreasingSort, 0x00558150);
	ZENGIN_REGISTER_METHOD(zCMgcEigenD, &zCMgcEigenD::IncreasingSort, 0x00558200);
	ZENGIN_REGISTER_METHOD(zCMgcEigenD, &zCMgcEigenD::Matrix, 0x005582B0);
	ZENGIN_REGISTER_METHOD(zCMgcEigenD, &zCMgcEigenD::EigenStuff2, 0x00558300);
	ZENGIN_REGISTER_METHOD(zCMgcEigenD, &zCMgcEigenD::EigenStuff3, 0x00558380);
	ZENGIN_REGISTER_METHOD(zCMgcEigenD, &zCMgcEigenD::EigenStuff4, 0x005583B0);
	ZENGIN_REGISTER_METHOD(zCMgcEigenD, &zCMgcEigenD::EigenStuffN, 0x005583E0);
	ZENGIN_REGISTER_METHOD(zCMgcEigenD, &zCMgcEigenD::EigenStuff, 0x00558420);
	ZENGIN_REGISTER_METHOD(zCMgcEigenD, &zCMgcEigenD::DecrSortEigenStuff2, 0x005584F0);
	ZENGIN_REGISTER_METHOD(zCMgcEigenD, &zCMgcEigenD::DecrSortEigenStuff3, 0x00558580);
	ZENGIN_REGISTER_METHOD(zCMgcEigenD, &zCMgcEigenD::DecrSortEigenStuff4, 0x005585C0);
	ZENGIN_REGISTER_METHOD(zCMgcEigenD, &zCMgcEigenD::DecrSortEigenStuffN, 0x00558600);
	ZENGIN_REGISTER_METHOD(zCMgcEigenD, &zCMgcEigenD::DecrSortEigenStuff, 0x00558650);
	ZENGIN_REGISTER_METHOD(zCMgcEigenD, &zCMgcEigenD::IncrSortEigenStuff2, 0x00558730);
	ZENGIN_REGISTER_METHOD(zCMgcEigenD, &zCMgcEigenD::IncrSortEigenStuff3, 0x005587C0);
	ZENGIN_REGISTER_METHOD(zCMgcEigenD, &zCMgcEigenD::IncrSortEigenStuff4, 0x00558800);
	ZENGIN_REGISTER_METHOD(zCMgcEigenD, &zCMgcEigenD::IncrSortEigenStuffN, 0x00558840);
	ZENGIN_REGISTER_METHOD(zCMgcEigenD, &zCMgcEigenD::IncrSortEigenStuff, 0x00558890);

} // namespace Gothic_II_Addon
