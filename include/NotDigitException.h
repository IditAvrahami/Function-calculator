#pragma once
#include<string>


class NotDigitException : public std::exception
{
public:
	virtual const char* what() const noexcept { return "this is not a digit\n"; };
};
