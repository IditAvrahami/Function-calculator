#include "Log.h"

#include <cmath>
#include<iostream>

Log::Log(int base, const std::shared_ptr<Function>& func)
    : m_base(base), m_func(func)
{
}

double Log::operator()(double x) const
{
    excPositive(x);
    return std::log((*m_func)(x)) / std::log(m_base);
}

std::string Log::to_string(const std::string& arg) const
{
    return "log_" + std::to_string(m_base) + "(" + m_func->to_string(arg) + ")";
}

void Log::excPositive(const double wanted) const
{
    if (wanted < 0)
        throw std::out_of_range("log cant get negative number\n");
}
