#pragma once
#include<string>


class ArgumentProblem : public std::exception
{
public:
	virtual const char* what() const noexcept { return "Argument truble\n"; };

};
