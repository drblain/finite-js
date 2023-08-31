#include "DeterministicAutomaton.h"

#include <algorithm>

Finite::DeterministicAutomaton::~DeterministicAutomaton()
{
    // todo
}

// accepts

// addState
bool Finite::DeterministicAutomaton::addState(const std::string& stateName)
{
    // don't add the state if it already exists
    if (std::find_if(states_.begin(), states_.end(), Finite::MatchesStateName(initStringName)) != states_.end())
    {
        return false;
    }
}

// removetate

bool Finite::DeterministicAutomaton::addTransition(const std::string& initStringName,
                                                   const std::string& destStringName,
                                                   char symbol)
{
    // todo : don't add the transition if the state already has a transition for that symbol
}

// removeTransition