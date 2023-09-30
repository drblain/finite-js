//
// Define concrete class DeterministicAutomaton inheriting from Automaton
//

#ifndef DETERMINISTIC_AUTOMATON_HPP
#define DETERMINISTIC_AUTOMATON_HPP

#include "Automaton.hpp"

namespace Finite
{

    class DeterministicAutomaton : public Automaton
    {
    public:
        DeterministicAutomaton();

        /* virtual */ ~DeterministicAutomaton();

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

    }; // class DeterministicAutomaton

} // namspace Finite

#endif // DETERMINISTIC_AUTOMATON_HPP
