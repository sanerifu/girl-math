// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at https://mozilla.org/MPL/2.0/.

#include "gmath.h"
#include <stdio.h>

int main() {
    ivec2 a = {.x = 3, .y = 4};
    ivec2 b = {.x = 1, .y = 10};
    ivec2 c = gmathDiv(a, b);
    printf("(%d, %d)\n", c.x, c.y);
}
