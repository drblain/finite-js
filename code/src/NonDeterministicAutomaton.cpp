// Local includes
#include "NonDeterministicState.hpp"

#include "NonDeterministicAutomaton.hpp"


// ***************************************************
//
//  class NonDeterministicAutomaton
//
// ***************************************************
Finite::NonDeterministicAutomaton::NonDeterministicAutomaton()
{
}

/* virtual */ Finite::NonDeterministicAutomaton::~NonDeterministicAutomaton()
{
}

/* virtual */ bool Finite::NonDeterministicAutomaton::accepts(const std::string& inputString) const
{
    // TODO
    return false;
}

/* virtual */ bool Finite::NonDeterministicAutomaton::addState(const std::string& stateName,
                                                               bool isStart,
                                                               bool isAccept)
{
    // TODO
    return false;
}

/* virtual */ bool Finite::NonDeterministicAutomaton::removeState(const std::string& stateName)
{
    // TODO
    return false;
}

/* virtual */ bool Finite::NonDeterministicAutomaton::addTransition(const std::string& initStateName,
                                                                    const std::string& destStateName,
                                                                    char symbol)
{
    // TODO
    return false;
}

/* virtual */ bool Finite::NonDeterministicAutomaton::removeTransition(const std::string& initStateName,
                                                                       const std::string& destStateName,
                                                                       char symbol)
{
    // TODO
    return false;
}
