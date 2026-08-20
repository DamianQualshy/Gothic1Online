namespace Gothic_I_Addon {

	ZENGIN_REGISTER_CLASS(CMov_Movement);
	ZENGIN_REGISTER_METHOD(CMov_Movement, &CMov_Movement::CMov_Movement_OnInit, 0x005A36F0);
	ZENGIN_REGISTER_METHOD(CMov_Movement, &CMov_Movement::IncreaseSpeed, 0x005A3730);
	ZENGIN_REGISTER_METHOD(CMov_Movement, &CMov_Movement::Movement, 0x005A37C0);

} // namespace Gothic_I_Addon
