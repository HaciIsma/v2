#pragma once
#include <string>

class Question
{
public:
	void setCorrectVariant(char correctVariant);
	void setQuestion(std::string question);
	void setVariant(std::string variant, std::size_t index);

	std::string getQuestion();
	std::string getVariant(std::size_t index);
	char getCorrectVariant();

private:
	std::string question;
	std::string variant[4];
	char correctVariant;
};
