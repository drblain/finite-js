#include "Automaton.h"

Finite::Automaton::~Automaton()
{
}

Finite::MatchesStateName::MatchesStateName(const std::string& stateName):
    stateName_(stateName)
{
}

Finite::MatchesStateName::operator () (const State const * inputState)
{
    return inputState->getName() == stateName_;
}