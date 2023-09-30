#ifndef STATE_HPP
#define STATE_HPP

// STL includes
#include <string>
#include <unordered_map>
#include <unordered_set>

namespace Finite
{
    // Define the epsilon character (empty).
    // This transition character is valid for Non-Deterministic automata and excluded for Deterministic ones.
    const char EPS = -1;

    // Abstract class defining a state in a finite automaton.
    // Each state keeps track of transitions to/from this specific point in the automaton via specific alphabet characters.
    class State
    {
    public:
        State(const std::string& stateName,
              bool isStart = false,
              bool isAccept = false);

        virtual ~State();

        virtual bool addTransition(const State * destState,
                                   char symbol) = 0;

        virtual bool addIncidentState(const std::string& incidentStateName) = 0;

        inline const std::string& getName() const;

        inline bool isStart() const;

        inline bool isAccept() const;

    protected:
        bool isAccept_;
        bool isStart_;

        std::string stateName_;

        std::unordered_map<char, const State *> transitions_;

        std::unordered_set<std::string> incidentStates_;
    }; // class State

    // Convenience typedef for pair of state name and pointer to State
    typedef std::pair<const std::string, State *> StatePair;

    // Unary operator to determine if a state is a start state
    class IsStartState
    {
    public:
        IsStartState();

        bool operator () (const StatePair& inputStateElement) const;
    }; // class IsStartState

    // ***************************************************
    //
    //  class State inline definitions
    //
    // ***************************************************

    /* inline */ const std::string& State::getName() const
    {
        return stateName_;
    }

    /* inline */ bool State::isStart() const
    {
        return isStart_;
    }

    /* inline */ bool State::isAccept() const
    {
        return isAccept_;
    }

} // namespace Finite

#endif // STATE_HPP
