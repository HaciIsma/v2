#pragma once
#include<iostream>
class Statics
{
public:
	Statics() = default;
	std::size_t studentSize();
	std::size_t testSize();
	std::size_t writedTestSize();
	std::size_t succesfulTestsize();
	std::size_t unsuccesfulTestsize();
};
