#pragma once
#include <iostream>
class Result
{
public:
	void setQuestionSize(std::size_t questionSize);
	void setCorrectVariantSize(std::size_t correctVariantSize);

	std::size_t getQuestionSize();
	std::size_t getCorrectVariantSize();

private:
	std::size_t questionSize;
	std::size_t correctVariantSize;
};
