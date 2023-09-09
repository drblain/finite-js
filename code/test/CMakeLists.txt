enable_testing()

include_directories(${FINITE_SOURCE_DIR}/src)

add_executable(Test DeterministicAutomatonTest.cpp NonDeterministicAutomatonTest.cpp)

target_link_libraries(Test Finite GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(Test)