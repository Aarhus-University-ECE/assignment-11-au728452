project(tests)

SET(GCC_COVERAGE_COMPILE_FLAGS "-O2")
add_definitions(${GCC_COVERAGE_COMPILE_FLAGS})

include_directories(include)
add_executable(tests src/tests.cpp)
target_link_libraries(tests mymath)
add_test(usage_test tests)
