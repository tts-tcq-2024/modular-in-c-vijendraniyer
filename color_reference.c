#include <stdio.h>
#include "color_definitions.h"
#include "color_reference.h"  // Include the header for PrintColorManual

void PrintColorManual() {
    printf("Color Pair Manual:\n");
    for (int i = 1; i <= numberOfMajorColors * numberOfMinorColors; i++) {
        ColorPair colorPair = GetColorFromPairNumber(i);
        char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
        ColorPairToString(&colorPair, colorPairNames);
        printf("%d: %s\n", i, colorPairNames);
    }
}
