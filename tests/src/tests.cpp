#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

extern "C"
{
#include "sum.h"
#include "sumn.h"
#include "fib.h"
}

// See Catch2's documentation: https://github.com/catchorg/Catch2/blob/devel/docs/tutorial.md#scaling-up

TEST_CASE("sumtail")
{
    // Add the tests for excercise 3 "sumtail" function here. Use "REQUIRE()" statement to check.
    REQUIRE(sumtail(2, 0) == 3);
    // REQUIRE(sumtail(0, 0) == 0); // Test case works as the assertion will crash the program... Should it have a special case that returns 0 instead?
    REQUIRE(sumtail(5, 0) == 15);
}

TEST_CASE("sumwhile")
{
    // Add the tests for excercise 3 "sumwhile" function here. Use "REQUIRE()" statement to check.
    REQUIRE(sumwhile(2) == 3);
    // REQUIRE(sumwhile(0) == 0); // Same case as above
    REQUIRE(sumwhile(5) == 15);
}

TEST_CASE("sumn")
{
    REQUIRE(sumn(1) == 1);     // sum(1) must be 1
    REQUIRE(sumn(3) == 9);     // sum(3) = 1+3+5 = 9
    REQUIRE(sumn(33) == 1089); // sum(33) = 1+3+5+...+65 = 1089
}

TEST_CASE("fib")
{
    // Add the tests for excercise 4 "fib" function here. Use "REQUIRE()" statement to check.
    REQUIRE(fib(1) == 1);
    REQUIRE(fib(5) == 5);
    REQUIRE(fib(8) == 21);
}
