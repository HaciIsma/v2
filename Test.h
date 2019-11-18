#pragma once
#include <string>
#include <vector>
#include "Question.h"
class Test
{
public:
	void setName(std::string name);
	void setCategory(std::string category);

	std::string getName();
	std::string getCategory();
private:
	std::string name;
	std::string category;
	std::vector<Question>quiz;
};