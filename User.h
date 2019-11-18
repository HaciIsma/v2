#pragma once
#include <string>
class User
{
public:
	void setName();
	void setSurname();
	void setTelephone();
	void setUsername();
	void setPassword();

	std::string getName();
	std::string getSurname();
	std::string getTelephone();
	std::string getUsername();
	std::string getPassword();

private:
	std::string name;
	std::string surname;
	std::string telephone;
	std::string username;
	std::string password;
};
