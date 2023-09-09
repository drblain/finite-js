#ifndef NON_DETERMINISTIC_AUTOMATON_TEST_H
#define NON_DETERMINISTIC_AUTOMATON_TEST_H

#include <gtest/gtest.h>

class NonDeterministicAutomatonTest : public ::testing::Test
{
protected:
    void SetUp() override;

    void TearDown() override;

}; // class NonDeterministicAutomatonTest

#endif // NON_DETERMINISTIC_AUTOMATON_TEST_H