#pragma once
#include <string>
#include <vector>
#include "Question.h"
class Test
{
public:
	void setName();
	void setCategory();

	std::string getName();
	std::string getCategory();
private:
	std::string name;
	std::string category;
	std::vector<Question>quiz;
};