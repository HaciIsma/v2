#pragma once
#include <string>
class User
{
public:
	void setName(std::string name);
	void setSurname(std::string surname);
	void setTelephone(std::string telephone);
	void setUsername(std::string username);
	void setPassword(std::string password);

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
