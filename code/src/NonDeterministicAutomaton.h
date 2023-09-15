#ifndef NONDETERMINISTIC_AUTOMATON_H
#define NONDETERMINISTIC_AUTOMATON_H

#include "Automaton.h"

namespace Finite
{

    class NonDeterministicState : public State
    {
    public:
        NonDeterministicState(const std::string& stateName,
                              bool isStart,
                              bool isAccept);

        ~NonDeterministicState();
        
        bool addTransition(const State * destState,
                           char symbol);

    }; // class NonDeterministicState


    class NonDeterministicAutomaton : public Automaton
    {
    public:
        NonDeterministicAutomaton();
        
        ~NonDeterministicAutomaton();
        
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
    }; // class NonDeterministicAutomaton

} // namespace Finite

#endif // NONDETERMINISTIC_AUTOMATON_H