#pragma once
#include<string>


class EndOfFile : public std::exception
{
public:
	virtual const char* what() const noexcept { return "\n"; };
};
