// test includes
#include <gtest/gtest.h>

#include "NonDeterministicAutomaton.h"

#include "NonDeterministicAutomatonTest.h"

void NonDeterministicAutomatonTest::SetUp()
{
    automaton_ = new Finite::NonDeterministicAutomaton();
}

void NonDeterministicAutomatonTest::TearDown()
{
    delete automaton_;
}

TEST_F(NonDeterministicAutomatonTest, AddStateNominal)
{
    EXPECT_TRUE(false);
}

TEST_F(NonDeterministicAutomatonTest, AddStateExistingState)
{
    EXPECT_TRUE(false);
}

TEST_F(NonDeterministicAutomatonTest, AddStateExistingStart)
{
    EXPECT_TRUE(false);
}

TEST_F(NonDeterministicAutomatonTest, AddTransitionNominal)
{
    EXPECT_TRUE(false);
}

TEST_F(NonDeterministicAutomatonTest, AddTransitionNoInitState)
{
    EXPECT_TRUE(false);
}

TEST_F(NonDeterministicAutomatonTest, AddTransitionNoDestState)
{
    EXPECT_TRUE(false);
}

TEST_F(NonDeterministicAutomatonTest, AddTransitionInvalidSymbol)
{
    EXPECT_TRUE(false);
}

TEST_F(NonDeterministicAutomatonTest, AddTransitionExistingSymbol)
{
    EXPECT_TRUE(false);
}