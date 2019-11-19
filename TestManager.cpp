#include "TestManager.h"
#include "Question.h"
#include "Test.h"
#include <string>
#include <iostream>
#include <fstream>

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

bool is_empty1(std::ifstream& pFile)
{
	return pFile.peek() == std::ifstream::traits_type::eof();
}

void TestManager::writeFileTest()
{
	std::ofstream write;
	write.open("Test", std::ios::app);
	bool check = false;

	if (write.is_open())
	{
		std::size_t len = tests.size();
		for (size_t i = 0; i < len; i++)
		{
			std::ifstream read("Test");
			if (is_empty1(read))
			{
				check = true;
			}
			read.close();

			if (check)
			{
				write << tests[i].getName() << "\n";
			}
			else
			{
				write << "\n" << tests[i].getName() << "\n";
			}
			write << tests[i].getName() << "\n";
			write << tests[i].getCategory() << "\n";
			std::size_t len2 = tests[i].quiz.size();
			for (size_t k = 0; k < len2; k++)
			{
				write << tests[i].quiz[k].getQuestion() << "\n";
				for (size_t j = 0; j < 4; j++)
				{
					if ((i == len - 1) && (k == len2 - 1) && (j == 3))
					{
						write << tests[i].quiz[k].getVariant(j);
					}
					else
					{
						write << tests[i].quiz[k].getVariant(j) << "\n";
					}
				}
			}
		}
	}
	else
	{
		std::cout << "File cannot open" << '\n';
	}
}

void TestManager::writeVectorTest()
{
	std::ifstream read;
	std::string reading;
	std::string word;
	read.open("Test");
	if (read.is_open())
	{
		Test temp;
		Question tmp;
		while (!read.eof())
		{
			std::size_t count = 0;
			while (true)
			{
				read >> reading;
				word = reading;
				count++;
			}

		}
		
	}
	else
	{
		std::cout << "File cannot open ";
	}
}



////
//void TestManager::Result();
////
//void TestManager::allResults();
//void TestManager::addResultFile();
//void TestManager::goToTest();
//void TestManager::chooseTest();
//void TestManager::pauseTest();
//void TestManager::pauseTestAdd();