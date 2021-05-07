#pragma once
#include<string>


class CantOpenFile : public std::exception
{
public:
	virtual const char* what() const noexcept { return "Cant open the file\n"; };
};
