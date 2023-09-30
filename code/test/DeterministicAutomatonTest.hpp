#ifndef DETERMINISTIC_AUTOMATON_TEST_HPP
#define DETERMINISTIC_AUTOMATON_TEST_HPP

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

#endif // DETERMINISTIC_AUTOMATON_TEST_HPP
