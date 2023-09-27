//
// This class defines the abstract interface Automaton.
//
// ideas:
//  - define classes that are template-based and can work with generic containers/types
//  - define a Symbol class to replace char (this would also allow special behavior for EPS)
//

#ifndef AUTOMATON_H
#define AUTOMATON_H

// STL includes
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <utility>

// TODO : add documentation comments

namespace Finite
{
    // define the epsilon character
    const char EPS = -1;

    // class defining a generic automaton state
    class State
    {
    public:
        State(const std::string& stateName,
              bool isStart = false,
              bool isAccept = false);

        virtual ~State();

        // for a deterministic state, this should return false if
        // destState is already in the map, or if symbol is eps
        virtual bool addTransition(const State * destState,
                                   char symbol) = 0;

        const std::string& getName() const;

        bool isStart() const;

        bool isAccept() const;

    protected:
        bool isAccept_;
        bool isStart_;

        std::string stateName_;

        std::unordered_map<char, const State *> transitions_;

        // TODO : add a std::set<std::string> here to indicate the incoming transitions
    }; // class State

    typedef std::pair<const std::string, State *> StatePair;

    // Unary operator to determine if a state is a start state
    class IsStartState
    {
    public:
        IsStartState();

        bool operator () (const StatePair& inputStateElement) const;
    }; // class IsStartState


    // Class defining a generic automaton
    class Automaton
    {
    public:
        virtual ~Automaton();

        virtual bool accepts(const std::string& inputString) const = 0;

        virtual bool addState(const std::string& stateName, 
                              bool isStart = false,
                              bool isAccept = false) = 0;

        virtual bool removeState(const std::string& stateName) = 0;

        // this method will need to return false for DFAs if the initStateName already has a transition for the given symbol
        virtual bool addTransition(const std::string& initStateName,
                                   const std::string& destStateName,
                                   char symbol) = 0;

        virtual bool removeTransition(const std::string& initStateName,
                                      const std::string& destStateName,
                                      char symbol) = 0;

        bool findState(const std::string& stateName, State * & outputState);

    protected:
        std::unordered_set<char> alphabet_;

        std::unordered_map<std::string, State *> states_;

    }; // class Automaton

} // namespace Finite

#endif