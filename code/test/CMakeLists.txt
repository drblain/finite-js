enable_testing()

add_executable(runAllUnitTests DeterministicAutomatonTest.cpp NonDeterministicAutomatonTest.cpp)

target_link_libraries(runAllUnitTests GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(runAllUnitTests)