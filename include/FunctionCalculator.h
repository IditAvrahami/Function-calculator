#pragma once

#include <vector>
#include <memory>
#include <string>
#include <iosfwd>
#include <optional>
#include <ostream>

class Function;

class FunctionCalculator
{
public:
    FunctionCalculator(std::istream& istr, std::ostream& ostr);
    void run();

private:
    void eval();
    void poly();
    void log();
    void del();
    void help();
    void exit();
    void resize();
    void firstResize();
    int yesOrNo();
    void excLetter()const;
    void excRange(const int start, const int end, const int wanted ,const std::string error)const;
    void excPositive(const int wanted)const;
    
   

    template <typename FuncType>
    void binaryFunc()
    {
        if (m_functions.size() < m_maxSize)
        {
            if (auto f0 = readFunctionIndex(), f1 = readFunctionIndex(); f0 && f1)
            {
                m_functions.push_back(std::make_shared<FuncType>(m_functions[*f0], m_functions[*f1]));
            }
        }
        else
        {
            throw std::out_of_range("Too much functions\n");
        }
    }

    void printFunctions() const;

    enum class Action
    {
        Invalid,
        Eval,
        Poly,
        Mul,
        Add,
        Comp,
        Log,
        Del,
        Help,
        Exit,
        Resize,
    };

    struct ActionDetails
    {
        std::string command;
        std::string description;
        Action action;
    };

    using ActionMap = std::vector<ActionDetails>;
    using FunctionList = std::vector<std::shared_ptr<Function>>;

    int m_maxSize;
    const ActionMap m_actions;
    FunctionList m_functions;
    bool m_running = true;
    std::istream& m_istr;
    std::ostream& m_ostr;

    std::optional<int> readFunctionIndex() const;
    Action readAction() const;
    void runAction(Action action);

    static ActionMap createActions();
    static FunctionList createFunctions();
};
