#ifndef CADMIN_H
#define CADMIN_H

//GO Admin interface
class CAdmin
{
public:
	CAdmin();
	~CAdmin();

	void HandleAdminCommand(CPlayer* player, std::string command);
};

#endif //CADMIN_H