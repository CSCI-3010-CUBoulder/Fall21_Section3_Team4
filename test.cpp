#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>

TEST_CASE ( "Factorials are computed", "[factorial]" ){
	REQUIRE( Factorial(1) == 1);
	REQUIRE( Factorial(2) == 2);
	REQUIRE( Factorial(3) == 6);
	REQUIRE( Factorial(10) == 3628800);
}

TEST_CASE ( "Sign of number", "[sign]" ){
	REQUIRE( Sign(10) == 1);
	REQUIRE( Sign(-10) == -1);
	REQUIRE( Sign(0) == 1);
	REQUIRE( Sign(8909501) == 1);
}

TEST_CASE ( "Fibonacci sequence is calculated", "fibonacci"){
	REQUIRE( NthFibonacci(0) == 0);
	REQUIRE( NthFibonacci(1) == 1);
	REQUIRE( NthFibonacci(5) == 5);
	REQUIRE( NthFibonacci(14) == 377);
	REQUIRE( NthFibonacci(-1) == 0);
}