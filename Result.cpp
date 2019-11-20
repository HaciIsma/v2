#include "Result.h"

void Result::setQuestionSize(std::size_t questionSize)
{
	this->questionSize = questionSize;
}
void Result::setCorrectVariantSize(std::size_t correctVariantSize)
{
	this->correctVariantSize = correctVariantSize;
}

std::size_t Result::getQuestionSize()
{
	return questionSize;
}
std::size_t Result::getCorrectVariantSize()
{
	return correctVariantSize;
}