#include "Manager.h"
#include "AccountManager.h"

void Manager::control()
{
	AccountManager a;
	a.usersWriteVector();
	//a.signUp();
	//
	//a.usersWriteFile();

	a.signIn();
}