#include "Question.h"

void Question::setCorrectVariant(char correctVariant)
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
char Question::getCorrectVariant()
{
	return correctVariant;
}