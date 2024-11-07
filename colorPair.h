/**
 * @file colorPair.h
 * @brief Header file for telecommunications cable wire information
 * 
 * This file contains the necessary code to retrieve the color combinations
 * and value numbers of wires in telecommunications cables.
 */

#ifndef COLORPAIR_H
#define COLORPAIR_H

#include "colorPair_types.h"

extern const int MAX_COLORPAIR_NAME_CHARS;

void ColorPairToString(const ColorPair* colorPair, char* buffer);

ColorPair GetColorFromPairNumber(int pairNumber);

int GetPairNumberFromColor(const ColorPair* colorPair);

#endif // COLORPAIR_H