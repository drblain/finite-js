// STL includes
#include <algorithm>

// Header
#include "DeterministicAutomaton.h"

// ***************************************************
//
//  class DeterministicState
//
// ***************************************************
bool Finite::DeterministicState::addTransition(const State * destState,
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


// ***************************************************
//
//  class DeterministicAutomaton
//
// ***************************************************

Finite::DeterministicAutomaton::~DeterministicAutomaton()
{
}

// accepts
bool Finite::DeterministicAutomaton::accepts(const std::string& inputString) const
{
    // TODO : implement major algorithm
}

// addState
bool Finite::DeterministicAutomaton::addState(const std::string& stateName,
                                              bool isStart,
                                              bool isAccept)
{
    bool stateAdded(false);
    
    // don't add the state if it already exists
    if (std::find_if(states_.begin(), states_.end(), MatchesStateName(stateName)) == states_.end())
    {
        // since this is a deterministic automaton,
        // make sure we only have one start state
        if (!isAccept || 
            std::find_if(states_.begin(), states_.end(), IsStartState()) == states_.end())
        {
            // add the deterministic state
            State * newState(
                new DeterministicState(
                    stateName,
                    isStart,
                    isAccept));

            states_.insert(newState);

            stateAdded = true;
        }
    }

    return stateAdded;
}

// removestate

bool Finite::DeterministicAutomaton::addTransition(const std::string& initStringName,
                                                   const std::string& destStringName,
                                                   char symbol)
{
    bool transitionAdded(false);
    
    State * initState;
    State * destState;
    
    // Since this is a deterministic automaton, check the symbol isn't the empty character
    // and check that the state doesn't already have a transition on this symbol.
    if (symbol != EPS &&
        findState(initStateName, initState) &&
        findState(destStateName, destState))
    {
        transitionAdded = initState->addTransition()
    }

    return transitionAdded;
}

// removeTransition