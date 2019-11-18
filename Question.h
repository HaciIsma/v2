#pragma once
#include <string>

class Question
{
public:
	void setCorrectVariant();
	void setQuestion();
	void setVariant();

	std::string getQuestion();
	std::string getVariant();
	char getCorrectVariant();

private:
	std::string question;
	std::string variant[4];
	char correctVariant;
};
