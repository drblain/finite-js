//
// Define concrete class DeterministicAutomaton inheriting from Automaton
//

#ifndef DETERMINISTIC_AUTOMATON_H
#define DETERMINISTIC_AUTOMATON_H

namespace Finite
{

    class DeterministicAutomaton : public Automaton
    {

        ~DeterministicAutomaton();

        // accepts

        // addState

        // removeState

        // addTransition
        bool addTransition(const std::string& initStateName,
                           const std::string& destStateName,
                           char symbol);

        // removeTransition

    }; // class DeterministicAutomaton

} // namspace Finite

#endif