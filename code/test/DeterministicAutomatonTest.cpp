// test includes
#include <gtest/gtest.h>

#include "DeterministicAutomaton.hpp"

#include "DeterministicAutomatonTest.hpp"

void DeterministicAutomatonTest::SetUp()
{
    automaton_ = new Finite::DeterministicAutomaton();
}

void DeterministicAutomatonTest::TearDown()
{
    delete automaton_;
}

TEST_F(DeterministicAutomatonTest, AddStateNominal)
{
    const std::string stateName0("state0");
    Finite::State * stateOutput(nullptr);

    EXPECT_TRUE(automaton_->addState(stateName0));
    EXPECT_TRUE(automaton_->findState(stateName0, stateOutput));
    ASSERT_TRUE(stateOutput != nullptr);
    EXPECT_FALSE(stateOutput->isStart());
    EXPECT_FALSE(stateOutput->isAccept());

    const std::string stateName1("state1");
    stateOutput = nullptr;

    EXPECT_TRUE(automaton_->addState(stateName1, true, true));
    EXPECT_TRUE(automaton_->findState(stateName1, stateOutput));
    ASSERT_TRUE(stateOutput != nullptr);
    EXPECT_TRUE(stateOutput->isStart());
    EXPECT_TRUE(stateOutput->isAccept());

    stateOutput = nullptr;

    EXPECT_TRUE(automaton_->findState(stateName0, stateOutput));
    ASSERT_TRUE(stateOutput != nullptr);
}

TEST_F(DeterministicAutomatonTest, AddStateExistingState)
{
    const std::string stateName("state0");

    EXPECT_TRUE(automaton_->addState(stateName));
    EXPECT_FALSE(automaton_->addState(stateName));
}

TEST_F(DeterministicAutomatonTest, AddStateExistingStart)
{
    const std::string stateName0("state0");

    EXPECT_TRUE(automaton_->addState(stateName0, true));

    const std::string stateName1("state1");
    Finite::State * stateOutput(nullptr);

    EXPECT_FALSE(automaton_->addState(stateName1, true));
    EXPECT_FALSE(automaton_->findState(stateName1, stateOutput));
    EXPECT_TRUE(stateOutput == nullptr);
}

TEST_F(DeterministicAutomatonTest, RemoveStateNominal)
{
    // Add multiple states to the automaton
    // Add transitions between each state
    // Remove a state
    // Verify that the state is removed (return true)
    // Verify that we can't find the state
    // Verify that no other state has a transition to a state by the removed name

    EXPECT_TRUE(false);
}

TEST_F(DeterministicAutomatonTest, RemoveStateNoState)
{
    EXPECT_TRUE(false);
}

TEST_F(DeterministicAutomatonTest, AddTransitionNominal)
{
    EXPECT_TRUE(false);
}

TEST_F(DeterministicAutomatonTest, AddTransitionNoInitState)
{
    EXPECT_TRUE(false);
}

TEST_F(DeterministicAutomatonTest, AddTransitionNoDestState)
{
    EXPECT_TRUE(false);
}

TEST_F(DeterministicAutomatonTest, AddTransitionInvalidSymbol)
{
    EXPECT_TRUE(false);
}

TEST_F(DeterministicAutomatonTest, AddTransitionExistingSymbol)
{
    EXPECT_TRUE(false);
}

TEST_F(DeterministicAutomatonTest, RemoveTransitionNominal)
{
    EXPECT_TRUE(false);
}

TEST_F(DeterministicAutomatonTest, RemoveTransitionNoState)
{
    EXPECT_TRUE(false);
}

TEST_F(DeterministicAutomatonTest, RemoveTransitionNoSymbol)
{
    EXPECT_TRUE(false);
}

TEST_F(DeterministicAutomatonTest, AcceptsNominalAccept)
{
    EXPECT_TRUE(false);
}

TEST_F(DeterministicAutomatonTest, AcceptsNominalReject)
{
    EXPECT_TRUE(false);
}

