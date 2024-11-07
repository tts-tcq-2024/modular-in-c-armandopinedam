/**
 * @file colorPair.h
 * @brief Header file for telecommunications cable wire information
 * 
 * This file contains the necessary code to retrieve the color combinations
 * and value numbers of wires in telecommunications cables.
 */

#ifndef COLORPAIR_H
#define COLORPAIR_H

enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

extern const char* MajorColorNames[];

extern const char* MinorColorNames[];

extern const int MAX_COLORPAIR_NAME_CHARS;
typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;

void ColorPairToString(const ColorPair* colorPair, char* buffer);

ColorPair GetColorFromPairNumber(int pairNumber);

int GetPairNumberFromColor(const ColorPair* colorPair);

#endif // COLORPAIR_H