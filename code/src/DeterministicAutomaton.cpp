// STL includes
#include <algorithm>

// Local includes
#include "DeterministicState.hpp"

// Header
#include "DeterministicAutomaton.hpp"


// ***************************************************
//
//  class DeterministicAutomaton
//
// ***************************************************

Finite::DeterministicAutomaton::DeterministicAutomaton()
{
}

/* virtual */ Finite::DeterministicAutomaton::~DeterministicAutomaton()
{
}

// accepts
/* virtual */ bool Finite::DeterministicAutomaton::accepts(const std::string& inputString) const
{
    // TODO : implement major algorithm
    return false;
}

// addState
/* virtual */ bool Finite::DeterministicAutomaton::addState(const std::string& stateName,
                                                            bool isStart,
                                                            bool isAccept)
{
    bool stateAdded(false);
    
    // don't add the state if it already exists
    if (states_.find(stateName) == states_.end())
    {
        // since this is a deterministic automaton,
        // make sure we only have one start state
        if (!isStart || 
            std::find_if(states_.begin(), states_.end(), IsStartState()) == states_.end())
        {
            // add the deterministic state
            states_[stateName] = 
                new DeterministicState(
                    stateName,
                    isStart,
                    isAccept);

            stateAdded = true;
        }
    }

    return stateAdded;
}

/* virtual */ bool Finite::DeterministicAutomaton::removeState(const std::string& stateName)
{
    bool stateRemoved(false);
    
    auto stateIter(states_.find(stateName));
    
    if (stateIter != states_.end())
    {
        // TODO : find all the transitions to this state
        // remove them from the other states in the automaton
        // might require a change in implementation

        states_.erase(stateIter);

        stateRemoved = true;
    }

    return stateRemoved;
}

/* virtual */ bool Finite::DeterministicAutomaton::addTransition(const std::string& initStateName,
                                                                 const std::string& destStateName,
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
        transitionAdded = initState->addTransition(destState, symbol);
    }

    return transitionAdded;
}

/* virtual */ bool Finite::DeterministicAutomaton::removeTransition(const std::string& initStateName,
                                                                    const std::string& destStateName,
                                                                    char symbol)
{
    // TODO : implement
    // we shouldn't have to use the destStateName here since this is deterministic
    return false;
}
