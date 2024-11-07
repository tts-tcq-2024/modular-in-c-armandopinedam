/**
 * @file colorPair_test.h
 * @brief Header file for testing the colorPair functionality
 * 
 * This file contains the necessary code to test the functionality of the
 * colorPair.h and colorPair.c files. It includes test cases for
 * verifying the correctness of the wire color combination and value number
 * retrieval functions.
 */

#ifndef COLORPAIR_TEST_H
#define COLORPAIR_TEST_H

#include "colorPair.h"

void testNumberToPair(int pairNumber,
    enum MajorColor expectedMajor,
    enum MinorColor expectedMinor);

void testPairToNumber(
    enum MajorColor major,
    enum MinorColor minor,
    int expectedPairNumber);

#endif // COLORPAIR_TEST_H