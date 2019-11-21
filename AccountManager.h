#pragma once
#include <vector>
#include "User.h"
class AccountManager
{
public:
	AccountManager() = default;

	std::string signUp();
	std::string signIn();
	void usersWriteFile();
	void usersWriteVector();

	std::size_t userSize();
	User& operator[](std::size_t index);

private:
	std::vector<User>users;
};
 