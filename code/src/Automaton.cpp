// STL includes
#include <algorithm>

#include "Automaton.h"

// ***************************************************
//
//  class State
//
// ***************************************************

Finite::State::State(std::string & stateName, bool isStart, bool isAccept):
    stateName_(stateName),
    isStart_(isStart),
    isAccept_(isAccept)
{
}

Finite::State::~State()
{
}

const std::string& Finite::State::getName()
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
//  class MatchesStateName
//
// ***************************************************

Finite::MatchesStateName::MatchesStateName(const std::string& stateName):
    stateName_(stateName)
{
}

Finite::MatchesStateName::operator () (const State const * inputState) const
{
    return inputState->getName() == stateName_;
}


// ***************************************************
//
//  class Automaton
//
// ***************************************************
Finite::IsStartState::IsStartState()
{
}

bool Finite::IsStartState::operator () (const State const * inputState) const
{
    return inputState->isStart();
}


// ***************************************************
//
//  class Automaton
//
// ***************************************************

Finite::Automaton::~Automaton()
{
    std::for_each(states_.begin(), states_.end(), [](State * inputState) { delete inputState; })
}

bool Finite::Automaton::findState(const std::string& stateName, State& outputState)
{
    bool elementFound(false);

    auto stateIter(std::find_if(states_.begin(), states_.end(), MatchesStateName(stateName)));

    if (stateIter != states_.end())
    {
        elementFound = true;
        outputState = *stateIter;
    }

    return elementFound;
}