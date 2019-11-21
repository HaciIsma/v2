#include "ResultController.h"
#include <fstream>
#include <string>
#include "User.h"
#include "AccountManager.h"
#include "Test.h"

//void ResultController::allResults()
//{
//
//}
//void ResultController::addResultFile(User&user,Test&test)
//{
//	std::ofstream write;
//	std::string name = user.getName();
//    //name += ".txt";
//	write.open(name,std::ios::app);
//	if (write.is_open())
//	{
//		write << test.getName() << "\n";
//		write << test.getCategory() << "\n";
//	}
//	else
//	{
//		std::cout << "File cannot open" << '\n';
//	}
//}