#include "Manager.h"
#include "AccountManager.h"
#include "TestManager.h"

void Manager::control()
{
	TestManager a;
	a.addTest();
	a.writeFileTest();
}