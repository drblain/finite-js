#ifndef NON_DETERMINISTIC_STATE_HPP
#define NON_DETERMINISTIC_STATE_HPP

// STL includes
#include <string>

// Local includes
#include "State.hpp"

namespace Finite
{

    // Specialization of the State class for use in Non-Deterministic Automata
    class NonDeterministicState : public State
    {
    public:
        NonDeterministicState(const std::string& stateName,
                              bool isStart,
                              bool isAccept);

        /* virtual */ ~NonDeterministicState();
        
        /* virtual */ bool addTransition(const State * destState,
                                         char symbol);

        /* virtual */ bool addIncidentState(const std::string& incidentStateName);

    }; // class NonDeterministicState

} // namespace Finite

#endif // NON_DETERMINISITC_STATE_HPP