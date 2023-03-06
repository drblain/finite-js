#ifndef FINITE_AUTOMATON_H
#define FINITE_AUTOMATON_H

#include <string>

namespace Finite
{

const char EPSILON = '\0';

const std::string EMPTY_STRING = {EPSILON};

class State
{
    protected:
        bool isAccept_;

        char stateSymbol_;
};

class Automaton
{
    public:
        bool accepts(std::string inputString) = 0;
    protected:
        
    private:
}; // class Automaton

} // namespace Finite

#endif // FINITE_AUTOMATON_H