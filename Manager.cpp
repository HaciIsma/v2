#include "Manager.h"
#include "AccountManager.h"
#include "TestManager.h"

void Manager::control()
{
	TestManager manager;
	//manager.addTest();
	//manager.writeFileTest();
	manager.chooseTest();
}