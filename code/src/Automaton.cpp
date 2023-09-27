// STL includes
#include <algorithm>

#include "Automaton.h"

// ***************************************************
//
//  class State
//
// ***************************************************

Finite::State::State(const std::string & stateName, bool isStart, bool isAccept):
    stateName_(stateName),
    isStart_(isStart),
    isAccept_(isAccept)
{
}

Finite::State::~State()
{
}

const std::string& Finite::State::getName() const
{
    return stateName_;
}

bool Finite::State::isStart() const
{
    return isStart_;
}

bool Finite::State::isAccept() const
{
    return isAccept_;
}


// ***************************************************
//
//  class Automaton
//
// ***************************************************
Finite::IsStartState::IsStartState()
{
}

bool Finite::IsStartState::operator () (const StatePair& inputStateElement) const
{
    return inputStateElement.second->isStart();
}


// ***************************************************
//
//  class Automaton
//
// ***************************************************

Finite::Automaton::~Automaton()
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