#ifndef NONDETERMINISTIC_AUTOMATON_HPP
#define NONDETERMINISTIC_AUTOMATON_HPP

#include "Automaton.hpp"

namespace Finite
{

    class NonDeterministicAutomaton : public Automaton
    {
    public:
        NonDeterministicAutomaton();
        
        /* virtual */ ~NonDeterministicAutomaton();
        
        /* virtual */ bool accepts(const std::string& inputString) const;

        /* virtual */ bool addState(const std::string& stateName,
                                    bool isStart = false,
                                    bool isAccept = false);

        /* virtual */ bool removeState(const std::string& stateName);

        /* virtual */ bool addTransition(const std::string& initStateName,
                                         const std::string& destStateName,
                                         char symbol);

        /* virtual */ bool removeTransition(const std::string& initStateName,
                                            const std::string& destStateName,
                                            char symbol);
    }; // class NonDeterministicAutomaton

} // namespace Finite

#endif // NONDETERMINISTIC_AUTOMATON_HPP
