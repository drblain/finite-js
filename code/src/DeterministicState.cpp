#include "DeterministicState.hpp"


// ***************************************************
//
//  class DeterministicState
//
// ***************************************************
Finite::DeterministicState::DeterministicState(
    const std::string& stateName,
    bool isStart,
    bool isAccept):
State(stateName, isStart, isAccept)
{
}

Finite::DeterministicState::~DeterministicState()
{
}

bool Finite::DeterministicState::addTransition(
    State * destState,
    char symbol)
{
    // since this state is deterministic, we can only have one transition per symbol
    bool transitionAdded(false);

    if (transitions_.find(symbol) == transitions_.end())
    {
        transitions_[symbol] = destState;
    }

    return transitionAdded;
}

bool Finite::DeterministicState::removeTransition(
    State * destState,
    char symbol)
{
    // TODO
    return false;
}

bool Finite::DeterministicState::addIncidentState(
    const std::string& incidentStateName)
{
    // TODO
    return false;
}

bool Finite::DeterministicState::removeIncidentState(
    const std::string& incidentStateName)
{
    // TODO
    return false;
}