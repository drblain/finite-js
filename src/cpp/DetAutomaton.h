#ifndef FINITE_DET_AUTOMATON_H
#define FINITE_DET_AUTOMATON_H

#include "Automaton.h"

namespace Finite
{

class DetAutomaton : public Automaton
{
    public:
        bool accepts();
}; // class DetAutomaton

} // namespace Finite

#endif // FINITE_DET_AUTOMATON_H