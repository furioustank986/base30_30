// Copyright 2022 Noah Kim (@furioustank986)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "quantum.h"

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define LAYOUT( \
    l00, l01, l02, l03, l04, l05, l06,      r00, r01, r02, r03, r04, r05,      r07,\
    l10,      l12, l13, l14, l15, l16, l17,      r11, r12, r13, r14, r15, r16, r17,\
    l20,      l22, l23, l24, l25, l26,      r20, r21, r22, r23, r24, r25, r26,\
         l31, l32, l33, l34, l35, l36,      r30, r31, r32, r33, r34,      r36,\
    l40, l41,      l43, l44,      l46,           r41,      r43, r44,      r46, r47\
) { \
    { l00, l01, l02, l03, l04, l05, l06, KC_NO },   \
    { l10, KC_NO, l12, l13, l14, l15, l16, l17 },   \
    { l20, KC_NO, l22, l23, l24, l25, l26, KC_NO},  \
    { KC_NO, l31, l32, l33, l34, l35, l36, KC_NO},  \
    { l40, l41, KC_NO, l43, l44, KC_NO, l46, KC_NO},\
    { r00, r01, r02, r03, r04, r05, KC_NO, r07},    \
    { KC_NO, r11, r12, r13, r14, r15, r16, r17},    \
    { r20, r21, r22, r23, r24, r25, r26, KC_NO},    \
    { r30, r31, r32, r33, r34, KC_NO, r36, KC_NO},  \
    { KC_NO, r41, KC_NO, r43, r44, KC_NO, r46, r47 }\
}
