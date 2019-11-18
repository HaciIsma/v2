#pragma once
#include <vector>
#include "Test.h"
class TestManager
{
public:
	TestManager() = default;

	void addTest();
	void writeVectorTest();
	void writeFileTest();
	//
	void Result();
	//
	void allResults();
	void addResultFile();
	void goToTest();
	void chooseTest();
	void pauseTest();
	void pauseTestAdd();

private:
	std::vector<Test>tests;
	std::vector<Test>pauseTests;
};