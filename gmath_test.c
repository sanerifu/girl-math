#include "gmath.h"
#include <stdio.h>

int main() {
    ivec2 a = {.x = 3, .y = 4};
    ivec2 b = {.x = 1, .y = 10};
    ivec2 c = gmathDiv(a, b);
    printf("(%d, %d)\n", c.x, c.y);
}
