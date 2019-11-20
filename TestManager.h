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
	//void goToTest();
	//void chooseTest();
	void pauseTest();
	void pauseTestAdd(std::size_t testindex, std::size_t quizindex, std::size_t correctVariantSize);

private:
	std::vector<Test>tests;
};