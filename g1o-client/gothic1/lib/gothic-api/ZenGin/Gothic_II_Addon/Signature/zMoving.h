namespace Gothic_II_Addon {

	ZENGIN_REGISTER_CLASS(CMov_Movement);
	ZENGIN_REGISTER_METHOD(CMov_Movement, &CMov_Movement::CMov_Movement_OnInit, 0x005A8020);
	ZENGIN_REGISTER_METHOD(CMov_Movement, &CMov_Movement::IncreaseSpeed, 0x005A8060);
	ZENGIN_REGISTER_METHOD(CMov_Movement, &CMov_Movement::Movement, 0x005A80F0);

} // namespace Gothic_II_Addon
