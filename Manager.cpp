#include "Manager.h"
#include "AccountManager.h"
#include "TestManager.h"
#include <iostream>

void Manager::control()
{
	AccountManager user;
	TestManager test;
	std::size_t choose;
	std::string username;

	test.writeVectorTest();

	begin:

	std::cout << "1.Sign in" << '\n' << "2.Sign up" << '\n';
	std::cout << "Choose: ";
	std::cin >> choose;
	std::cin.ignore();
	switch (choose)
	{
	case 1:username = user.signIn();
		break;
	case 2:username = user.signUp();
		break;
	default:
		std::cout << "No choose " << '\n';
		break;
	}
	if (user[0].getName() == username)
	{
		std::cout << "1.addTest\n2.goto begin\n";
		std::cout << "Choose: ";
		std::cin >> choose;
		std::cin.ignore();
		switch (choose)
		{
		case 1:
			test.addTest();
			test.writeFileTest();
			break;
		case 2:goto begin;
			break;
		default:
			std::cout << "No choose " << '\n';
			break;
		}
	}
	else
	{
		std::cout << "1. Go to test\n2.goto begin\n";
		std::cout << "Choose: ";
		std::cin >> choose;
		std::cin.ignore();
		switch (choose)
		{
		case 1:
			test.chooseTest();
			break;
		case 2:goto begin;
			break;
		default:
			std::cout << "No choose " << '\n';
			break;
		}
	}
}