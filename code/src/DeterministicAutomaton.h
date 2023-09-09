//
// Define concrete class DeterministicAutomaton inheriting from Automaton
//

#ifndef DETERMINISTIC_AUTOMATON_H
#define DETERMINISTIC_AUTOMATON_H

#include "Automaton.h"

namespace Finite
{

    // specialization of the state class for deterministic states
    class DeterministicState : public State
    {
    public:
        DeterministicState(const std::string& stateName,
                           bool isStart,
                           bool isAccept);

        ~DeterministicState();
        
        bool addTransition(const State * destState,
                           char symbol);
    };

    class DeterministicAutomaton : public Automaton
    {
    public:
        DeterministicAutomaton();

        ~DeterministicAutomaton();

        bool accepts(const std::string& inputString) const;

        bool addState(const std::string& stateName,
                      bool isStart = false,
                      bool isAccept = false);

        bool removeState(const std::string& stateName);

        bool addTransition(const std::string& initStateName,
                           const std::string& destStateName,
                           char symbol);

        bool removeTransition(const std::string& initStateName,
                              const std::string& destStateName,
                              char symbol);

    }; // class DeterministicAutomaton

} // namspace Finite

#endif