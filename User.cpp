#include "User.h"

void User::setName(std::string name)
{
	this->name = name;
}
void User::setSurname(std::string surname)
{
	this->surname = surname;
}
void User::setTelephone(std::string telephone)
{
	this->telephone = telephone;
}
void User::setUsername(std::string username)
{
	this->username = username;
}
void User::setPassword(std::string password)
{
	this->password = password;
}

std::string User::getName()
{
	return name;
}
std::string User::getSurname()
{
	return surname;
}
std::string User::getTelephone()
{
	return telephone;
}
std::string User::getUsername()
{
	return username;
}
std::string User::getPassword()
{
	return password;
}