#include <stdio.h>
#include <assert.h>
#include <string.h>
#include "color_definitions.h"
#include "color_reference.h"

void runTests() {
    assert(GetPairNumberFromColor(&(ColorPair){WHITE, BLUE}) == 1);
    assert(GetPairNumberFromColor(&(ColorPair){VIOLET, SLATE}) == 25);
    assert(GetColorFromPairNumber(1).majorColor == WHITE);
    assert(GetColorFromPairNumber(25).minorColor == SLATE);
    
    char buffer[MAX_COLORPAIR_NAME_CHARS];
    ColorPairToString(&(ColorPair){RED, GREEN}, buffer);
    assert(strcmp(buffer, "Red Green") == 0);
}

int main() {
    runTests();
    printf("All tests passed!\n");
    PrintColorManual();
    return 0;
}
