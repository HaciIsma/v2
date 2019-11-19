#include "Question.h"
#include <string>

void Question::setCorrectVariant(std::string correctVariant)
{
	this->correctVariant = correctVariant;
}
void Question::setQuestion(std::string question)
{
	this->question = question;
}
void Question::setVariant(std::string variant, std::size_t index)
{
	this->variant[index] = variant;
}

std::string Question::getQuestion()
{
	return question;
}
std::string Question::getVariant(std::size_t index)
{
	return variant[index];
}
std::string Question::getCorrectVariant()
{
	return correctVariant;
}



