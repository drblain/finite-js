#ifndef AUTOMATON_HPP
#define AUTOMATON_HPP

// STL includes
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <utility>

// Local incudes
#include "State.hpp"

namespace Finite
{

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

#endif // AUTOMATON_HPP
