#include "Manager.h"
#include "AccountManager.h"
#include "TestManager.h"

void Manager::control()
{
	TestManager t1;
	AccountManager a;
	//a.usersWriteVector();
	//a.signUp();
	//
	//a.usersWriteFile();

	t1.addTest();

	//a.signIn();
}