//
// This class defines the abstract interface Automaton.
//
// ideas:
//  - define classes that are template-based and can work with generic containers/types
//  - define a Symbol class to replace char (this would also allow special behavior for EPS)
//

#ifndef AUTOMATON_H
#define AUTOMATON_H

#include <string>
#include <unordered_set>
#include <unordered_map>

namespace Finite
{
    // define the epsilon character
    const char EPS = -1;

    class State
    {
    public:
        // for a deterministic state, this should return false if
        // destState is already in the map, or if symbol is eps
        virtual bool addTransition(const State& destState,
                                   char symbol) = 0;

        const std::string& getName() = 0;

    protected:
        bool isAccept_;
        bool isStart_;

        std::unordered_map<char, State&> transitions_;
    }; // class State


    // Unary operator for determining if a state matches another in name
    class MatchesStateName
    {
    public:
        MatchesStateName(const std::string& stateName);

        bool operator() (const State const * inputState);

    private:
        const std::string& stateName_;

    }; // class MatchesStateName


    class Automaton
    {
    public:
        virtual ~Automaton();

        virtual bool accepts(const std::string& inputString) const = 0;

        virtual bool addState(const std::string& stateName) = 0;

        virtual bool removeState(const std::string& stateName) = 0;

        // this method will need to return false for DFAs if the initStateName already has a transition for the given symbol
        virtual bool addTransition(const std::string& initStateName,
                                   const std::string& destStateName,
                                   char symbol) = 0;

        virtual bool removeTransition(const std::string& initStateName,
                                      const std::string& destStateName,
                                      char symbol) = 0;

    protected:
        std::unordered_set<char> alphabet_;

        std::unordered_set<State *> states_;

    }; // class Automaton

} // namespace Finite

#endif