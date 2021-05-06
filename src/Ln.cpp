#include "Ln.h"

#include <cmath>
#include <iostream>

double Ln::operator()(double x) const
{
    excPositive(x);
    return std::log(x);
}

std::string Ln::to_string(const std::string& arg) const
{
    return "ln(" + arg + ")";
}

void Ln::excPositive(const double wanted) const
{
    if (wanted < 0)
        throw std::out_of_range("ln cant get negative number\n");
}
