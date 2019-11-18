#pragma once
#include <vector>
#include "User.h"
class AccountManager
{
public:
	AccountManager() = default;

	void signUp();
	void signIn();
	void usersWriteFile();
	void usersWriteVector();

private:
	std::vector<User>users;
};
 