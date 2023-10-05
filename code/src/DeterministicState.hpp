#ifndef DETERMINISTIC_STATE_HPP
#define DETERMINISTIC_STATE_HPP

// STL includes
#include <string>

// Local includes
#include "State.hpp"

namespace Finite
{

    // Specialization of the state class for deterministic states
    class DeterministicState : public State
    {
    public:
        DeterministicState(const std::string& stateName,
                           bool isStart,
                           bool isAccept);

        /* virtual */ ~DeterministicState();
        
        /* virtual */ bool addTransition(State * destState,
                                         char symbol);

        /* virtual */ bool removeTransition(State * destState,
                                         char symbol);

        /* virtual */ bool addIncidentState(const std::string& incidentStateName);

        /* virtual */ bool removeIncidentState(const std::string& incidentStateName);
    };

} // namespace Finite

#endif // DETERMINISTIC_STATE_HPP