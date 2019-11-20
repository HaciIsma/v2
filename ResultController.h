#pragma once
#include "Result.h"
#include "vector"
class ResultController
{
public:
	ResultController() = default;

	void Result_();
	void allResults();
	void addResultFile();

private:
	std::vector<Result> results;
};
