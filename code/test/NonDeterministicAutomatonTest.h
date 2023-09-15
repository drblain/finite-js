#ifndef NON_DETERMINISTIC_AUTOMATON_TEST_H
#define NON_DETERMINISTIC_AUTOMATON_TEST_H

#include <gtest/gtest.h>

namespace Finite
{
    class NonDeterministicAutomaton;
} // namespace Finite

class NonDeterministicAutomatonTest : public ::testing::Test
{
protected:
    void SetUp() override;

    void TearDown() override;

    Finite::NonDeterministicAutomaton * automaton_;

}; // class NonDeterministicAutomatonTest

#endif // NON_DETERMINISTIC_AUTOMATON_TEST_H