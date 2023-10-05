#include "NonDeterministicState.hpp"

// ***************************************************
//
//  class NonDeterministicState
//
// ***************************************************
Finite::NonDeterministicState::NonDeterministicState(
    const std::string& stateName,
    bool isStart,
    bool isAccept):
State(stateName, isStart, isAccept)
{
}

Finite::NonDeterministicState::~NonDeterministicState()
{
}

bool Finite::NonDeterministicState::addTransition(
    State * destState,
    char symbol)
{
    // TODO
    return false;
}

bool Finite::NonDeterministicState::removeTransition(
    State * destState,
    char symbol)
{
    // TODO
    return false;
}

bool Finite::NonDeterministicState::addIncidentState(
    const std::string& incidentStateName)
{
    // TODO
    return false;
}

bool Finite::NonDeterministicState::removeIncidentState(
    const std::string& incidentStateName)
{
    // TODO
    return false;
}