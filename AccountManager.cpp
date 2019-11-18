#include "AccountManager.h"
#include <iostream>
#include <fstream>


void AccountManager::signUp()
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

	std::cout << "Username: ";
	std::getline(std::cin, username);
	temp.setUsername(username);

	std::cout << "Password: ";
	std::getline(std::cin, password);
	temp.setPassword(password);
	
	users.push_back(temp);
}

bool is_empty(std::ifstream& pFile)
{
	return pFile.peek() == std::ifstream::traits_type::eof();
}

void AccountManager::usersWriteFile()
{
	std::ofstream write;
	write.open("UsersInfo.txt",std::ios::app);
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
			if (i==len-1)
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
	read.open("UsersInfo.txt",std::ios::app);
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
			/*	if (read.eof())
				{
					break;
				}*/
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
			/*if (read.eof())
			{
				break;
			}*/
		}
		users.push_back(temp);
	}
	else
	{
		std::cout << "File cannot open" << '\n';
	}
	read.close();
}

void signIn()
{
}