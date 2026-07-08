// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at https://mozilla.org/MPL/2.0/.

#include "gmath.h"
#include <stdio.h>

int main() {
    vec2 a = {.x = 3, .y = 4};
    vec2 b = {.x = 1, .y = 10};
    ivec2 c = gmathToI32Vec(gmathDiv(a, gmathBroadcast2(3.1f)));
    printf(FMT_I32Vec2 "\n", PRIv2(c));
    printf("%d\n", gmathLength2(gmathToI32Vec(b)));
    vec2 mixed = gmathMix(a, b, ((vec2){.x = 0.5f, .y = 0.25f}));
    printf(FMT_Vec2 "\n", PRIv2(mixed));
}
