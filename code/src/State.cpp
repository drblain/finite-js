#include "State.hpp"

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

/* virtual */ Finite::State::~State()
{
}


// ***************************************************
//
//  class IsStartState
//
// ***************************************************

Finite::IsStartState::IsStartState()
{
}

bool Finite::IsStartState::operator () (const StatePair& inputStateElement) const
{
    return inputStateElement.second->isStart();
}