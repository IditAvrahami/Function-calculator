#pragma once
#include<string>


class NotValidCommand : public std::exception
{
public:
	virtual const char* what() const noexcept { return "Not valid command\n"; };
};
