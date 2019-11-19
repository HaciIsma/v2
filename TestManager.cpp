#include "TestManager.h"
#include "Question.h"
#include "Test.h"
#include <string>
#include <iostream>

void TestManager::addTest()
{
	Test temp;
	Question tmp;
	std::string name;
	std::string category;
	std::string question;
	char correctVariant;
	std::string variant[4];
	char op;
	std::cout << "Name: ";
	std::getline(std::cin, name);
	temp.setName(name);

	std::cout << "Category: ";
	std::getline(std::cin, category);
	temp.setCategory(category);
	do
	{
		std::cout << "Question: ";
		std::getline(std::cin, question);
		tmp.setQuestion(question);

		for (size_t i = 0; i < 4; i++)
		{
			std::cout << char(i + 65) << " ) variant: ";
			std::getline(std::cin, variant[i]);
			tmp.setVariant(variant[i], i);
		}
		std::cout << "CorrectVariant: ";
		std::cin >> correctVariant;
		std::cin.ignore();
		temp.quiz.push_back(tmp);
		std::cout << "add(+): ";
		std::cin >> op;
	} while (op == '+');

	tests.push_back(temp);
}





//void TestManager::writeVectorTest();
//void TestManager::writeFileTest();
////
//void TestManager::Result();
////
//void TestManager::allResults();
//void TestManager::addResultFile();
//void TestManager::goToTest();
//void TestManager::chooseTest();
//void TestManager::pauseTest();
//void TestManager::pauseTestAdd();