#ifndef COLOR_DEFINITIONS_H
#define COLOR_DEFINITIONS_H

// Enumerations for Major and Minor Colors
enum MajorColor { WHITE, RED, BLACK, YELLOW, VIOLET };
enum MinorColor { BLUE, ORANGE, GREEN, BROWN, SLATE };

// Structure to represent a ColorPair
typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;

// Global variables for color counts and size
extern const int numberOfMajorColors;
extern const int numberOfMinorColors;
extern const int MAX_COLORPAIR_NAME_CHARS;

// Function prototypes
void ColorPairToString(const ColorPair* colorPair, char* buffer);
ColorPair GetColorFromPairNumber(int pairNumber);
int GetPairNumberFromColor(const ColorPair* colorPair);

#endif // COLOR_DEFINITIONS_H
