add_library(Finite Automaton.cpp DeterministicAutomaton.cpp NonDeterministicAutomaton.cpp)

add_executable(Main main.cpp)

target_link_libraries(Main Finite)