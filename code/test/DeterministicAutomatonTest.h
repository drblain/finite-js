#ifndef DETERMINISTIC_AUTOMATON_TEST_H
#define DETERMINISTIC_AUTOMATON_TEST_H

#include <gtest/gtest.h>

namespace Finite
{
    class DeterministicAutomaton;
} // namespace Finite

class DeterministicAutomatonTest : public ::testing::Test
{
protected:
    void SetUp() override;

    void TearDown() override;

    Finite::DeterministicAutomaton * automaton_;

}; // class DeterministicAutomatonTest

#endif // DETERMINISTIC_AUTOMATON_TEST_H