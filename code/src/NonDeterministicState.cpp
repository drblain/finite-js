#include "NonDeterministicState.hpp"

// ***************************************************
//
//  class NonDeterministicState
//
// ***************************************************
Finite::NonDeterministicState::NonDeterministicState(const std::string& stateName,
                                                     bool isStart,
                                                     bool isAccept):
State(stateName, isStart, isAccept)
{
}

/* virtual */ Finite::NonDeterministicState::~NonDeterministicState()
{
}

/* virtual */ bool Finite::NonDeterministicState::addTransition(const State * destState,
                                                                char symbol)
{
    // TODO
    return false;
}

/* virtual */ bool Finite::NonDeterministicState::addIncidentState(const std::string& incidentStateName)
{
    // TODO
    return false;
}