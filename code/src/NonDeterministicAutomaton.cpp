#include "NonDeterministicAutomaton.h"

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

Finite::NonDeterministicState::~NonDeterministicState()
{
}

bool Finite::NonDeterministicState::addTransition(const State * destState,
                                                  char symbol)
{
    // TODO
    return false;
}


// ***************************************************
//
//  class NonDeterministicAutomaton
//
// ***************************************************
Finite::NonDeterministicAutomaton::NonDeterministicAutomaton()
{
}

Finite::NonDeterministicAutomaton::~NonDeterministicAutomaton()
{
}

bool Finite::NonDeterministicAutomaton::accepts(const std::string& inputString) const
{
    // TODO
    return false;
}

bool Finite::NonDeterministicAutomaton::addState(const std::string& stateName,
                                                 bool isStart,
                                                 bool isAccept)
{
    // TODO
    return false;
}

bool Finite::NonDeterministicAutomaton::removeState(const std::string& stateName)
{
    // TODO
    return false;
}

bool Finite::NonDeterministicAutomaton::addTransition(const std::string& initStateName,
                                                      const std::string& destStateName,
                                                      char symbol)
{
    // TODO
    return false;
}

bool Finite::NonDeterministicAutomaton::removeTransition(const std::string& initStateName,
                                                         const std::string& destStateName,
                                                         char symbol)
{
    // TODO
    return false;
}