#ifndef DETERMINISTIC_AUTOMATON_TEST_H
#define DETERMINISTIC_AUTOMATON_TEST_H

#include <gtest/gtest.h>

class DeterministicAutomatonTest : public ::testing::Test
{
protected:
    void SetUp() override;

    void TearDown() override;

}; // class DeterministicAutomatonTest

#endif // DETERMINISTIC_AUTOMATON_TEST_H