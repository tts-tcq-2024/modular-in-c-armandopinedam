/**
 * @file main.c
 * @brief Source file for the main functionality
 * 
 * This file contains the implementation of the runMainFunctionality function,
 * which demonstrates the usage of the colorPair functionality. It showcases
 * how to retrieve wire color combinations and value numbers based on user input.
 */

#include <stdio.h>
#include <assert.h>
#include <colorPair.h>
#include <colorPair_test.h>

int main() {
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);

    return 0;
}
