#include "AccountManager.h"
#include <iostream>
#include <fstream>


std::string AccountManager::signUp()
{
	User temp;
	std::string name;
	std::string surname;
	std::string telephone;
	std::string username;
	std::string password;

	std::cout << "Name: ";
	std::getline(std::cin, name);
	temp.setName(name);

	std::cout << "Surname: ";
	std::getline(std::cin, surname);
	temp.setSurname(surname);

	std::cout << "Telephone: ";
	std::getline(std::cin, telephone);
	temp.setTelephone(telephone);

	bool check = false;

	do
	{
		check = false;
		std::cout << "Username: ";
		std::getline(std::cin, username);
		std::size_t len = users.size();
		for (size_t i = 0; i < len; i++)
		{
			if (users[i].getUsername() == username)
			{
				check = true;
				break;
			}
		}
	} while (check);
	temp.setUsername(username);

	std::cout << "Password: ";
	std::getline(std::cin, password);
	temp.setPassword(password);

	users.push_back(temp);
	return username;
}

bool is_empty(std::ifstream& pFile)
{
	return pFile.peek() == std::ifstream::traits_type::eof();
}

void AccountManager::usersWriteFile()
{
	std::ofstream write;
	write.open("UsersInfo.txt", std::ios::app);
	bool check = false;

	if (write.is_open())
	{
		std::size_t len = users.size();
		for (size_t i = 0; i < len; i++)
		{
			std::ifstream read("UsersInfo.txt");
			if (is_empty(read))
			{
				check = true;
			}
			read.close();
			if (check)
			{
				write << users[i].getName() << "\n";
			}
			else
			{
				write << "\n" << users[i].getName() << "\n";
			}

			write << users[i].getSurname() << "\n";
			write << users[i].getTelephone() << "\n";
			write << users[i].getUsername() << "\n";
			if (i == len - 1)
			{
				write << users[i].getPassword();
			}
			else
			{
				write << users[i].getPassword() << "\n";
			}
		}
	}
	else
	{
		std::cout << "File cannot open" << '\n';
	}
	write.close();
}

void AccountManager::usersWriteVector()
{
	std::ifstream read;
	read.open("UsersInfo.txt", std::ios::app);
	if (read.is_open())
	{
		User temp;
		std::string reading;
		std::string word;
		while (!read.eof())
		{
			//
			std::size_t count = 0;
			while (count != 5)
			{
				read >> reading;
				word = reading;
				switch (count)
				{
				case 0: temp.setName(word);
					break;
				case 1: temp.setSurname(word);
					break;
				case 2: temp.setTelephone(word);
					break;
				case 3: temp.setUsername(word);
					break;
				case 4: temp.setPassword(word);
					break;
				}
				count++;
			}
		}
		users.push_back(temp);
	}
	else
	{
		std::cout << "File cannot open" << '\n';
	}
	read.close();
}

std::size_t AccountManager::userSize()
{
	return users.size();
}

std::string AccountManager::signIn()
{
	std::string checkUsername;
	std::string checkPassword;

	std::cout << "Username: ";
	std::getline(std::cin, checkUsername);

	std::size_t len = users.size();

	for (size_t i = 0; i < len; i++)
	{
		if (users[i].getUsername() == checkUsername)
		{
			std::cout << "Password: ";
			std::getline(std::cin, checkPassword);
			if (users[i].getPassword() == checkPassword)
			{
				std::cout << "Welcome system" << '\n';
				return checkUsername;
			}
			else
			{
				std::cout << "Wrong password" << '\n';
			}
		}
	}
	std::cout << "Wrong username" << '\n';
	return ".";
}

User& AccountManager::operator[](std::size_t index)
{
	return users[index];
}