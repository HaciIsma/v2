#include "Test.h"
#include <iostream>

void Test::setName(std::string name)
{
	this->name = name;
}
void Test::setCategory(std::string category)
{
	this->category = category;
}

std::string Test::getName()
{
	return name;
}
std::string Test::getCategory()
{
	return category;
}
