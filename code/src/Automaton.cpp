// STL includes
#include <algorithm>

#include "Automaton.hpp"


// ***************************************************
//
//  class Automaton
//
// ***************************************************

/* virtual */ Finite::Automaton::~Automaton()
{
    std::for_each(
        states_.begin(),
        states_.end(),
        [](StatePair& inputStateElement) { delete inputStateElement.second; });
}

bool Finite::Automaton::findState(const std::string& stateName, State * & outputState)
{
    bool elementFound(false);

    auto stateIter(states_.find(stateName));

    if (stateIter != states_.end())
    {
        elementFound = true;
        outputState = stateIter->second;
    }

    return elementFound;
}