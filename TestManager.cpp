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
		std::cin.ignore();
	} while (op == '+');

	tests.push_back(temp);
}

bool is_empty1(std::ifstream& pFile)
{
	return pFile.peek() == std::ifstream::traits_type::eof();
}

void TestManager::writeFileTest()
{
	std::ofstream writeT;
	writeT.open("Test", std::ios::app);
	bool check = false;

	if (writeT.is_open())
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
				writeT << tests[i].getName() << "\n";
			}
			else
			{
				writeT << "\n" << tests[i].getName() << "\n";
			}

			if (i == len - 1)
			{
				writeT << tests[i].getCategory();
			}
			else
			{
				writeT << tests[i].getCategory() << "\n";
			}
		}
	}
	else
	{
		std::cout << "File cannot open" << '\n';
	}
	writeT.close();

	std::ofstream writeQ;
	writeQ.open("Question", std::ios::app);
	bool check1 = false;
	if (writeQ.is_open())
	{
		std::string word;
		std::size_t len = tests.size();
		for (size_t i = 0; i < len; i++)
		{
			std::size_t len2 = tests[i].quiz.size();
			for (size_t k = 0; k < len2; k++)
			{
				writeQ << tests[i].quiz[k].getQuestion() << "\n";
				for (size_t j = 0; j < 4; j++)
				{
					writeQ << tests[i].quiz[k].getVariant(j) << "\n";
				}
				writeQ << tests[i].quiz[k].getCorrectVariant();
			}
		}
	}
	else
	{
		std::cout << "File cannot open" << '\n';
	}
	writeQ.close();
}

void TestManager::writeVectorTest()
{
	Test temp;
	std::ifstream readT;
	std::string reading;
	readT.open("Test");
	if (readT.is_open())
	{
		std::string word;
		while (!readT.eof())
		{
			std::size_t count = 0;
			while (count != 2)
			{
				readT >> reading;
				word = reading;
				switch (count)
				{
				case 0:temp.setName(word);
					break;
				case 1:temp.setCategory(word);
					break;
				}
				count++;
			}
		}
	}
	else
	{
		std::cout << "File cannot open ";
	}
	readT.close();

	Question tmp;
	std::ifstream readQ;
	std::string reading1;
	readQ.open("Question");
	if (readQ.is_open())
	{
		std::string word;
		while (!readQ.eof())
		{
			std::size_t count = 0;
			while (count != 6)
			{
				readQ >> reading1;
				word = reading1;
				switch (count)
				{
				case 0:tmp.setQuestion(word);
					break;
				case 1:tmp.setVariant(word, 0);
					break;
				case 2:tmp.setVariant(word, 1);
					break;
				case 3:tmp.setVariant(word, 2);
					break;
				case 4:tmp.setVariant(word, 3);
					break;
				case 5:tmp.setCorrectVariant(word);
					break;
				}
				count++;
			}
		}
	}
	else
	{
		std::cout << "File cannot open";
	}
	readQ.close();

	temp.quiz.push_back(tmp);
	tests.push_back(temp);
}

//void TestManager::goToTest();
//void TestManager::chooseTest();

void TestManager::pauseTest()
{
	std::ifstream read;
	std::size_t num;
	read.open("pauseTest");
	if (read.is_open())
	{
		while (!read.eof())
		{
			std::size_t count = 0;
			read >> num;

		}
	}
	else
	{
		std::cout << "File cannot open" << "\n";
	}
}




void TestManager::pauseTestAdd(std::size_t testindex,std::size_t quizindex,std::size_t correctVariantSize) 
{
	std::ofstream write;
	write.open("pauseTest",std::ios::app);
	if (write.is_open())
	{
		bool check = false;
		std::ifstream read("pauseTest");
		if (is_empty1(read))
		{
			check = true;
		}
		read.close();
		if (!check)
		{
			write << "\n";
		}
		write << testindex << " " << quizindex << " " << correctVariantSize;
	}
	else
	{
		std::cout << "File cannot open" << '\n';
	}
	write.close();
}