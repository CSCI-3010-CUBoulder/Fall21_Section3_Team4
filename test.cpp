#define CATCH_CONFIG_MAIN
#include "catch.hpp"

// returns -1 if the number is negative and 1 if positive
int Sign(int num){
    if(num >= 0){
        return 1;
    }
    else{
        return -1;
    }
}

TEST_CASE( "sign are computed", "[Sign]" ) {
    REQUIRE( Sign(-3) == -1);
    REQUIRE( Sign(5) == 1 );
    REQUIRE( Sign(8) == 1 );
    REQUIRE( Sign(-30) == -1 );
}