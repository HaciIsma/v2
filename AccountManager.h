#pragma once
#include <vector>
#include "User.h"
class AccountManager
{
public:
	AccountManager() = default;

	void SignUp();
	void SignIn();

private:
	std::vector<User>users;
};
 