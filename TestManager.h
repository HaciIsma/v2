#pragma once
#include "TestManager.h"
#include <vector>
#include "Test.h"
class TestManager
{
public:
	TestManager() = default;

	void addTest();
	void writeFileTest();
	void writeVectorTest();
	////
	//void Result();
	////
	//void allResults();
	//void addResultFile();
	//void goToTest();
	//void chooseTest();
	//void pauseTest();
	//void pauseTestAdd();

private:
	std::vector<Test>tests;
};