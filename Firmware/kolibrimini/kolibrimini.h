// Copyright 2022 kreme
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "quantum.h"

#define XXX KC_NO

#define LAYOUT( \
    K00, K40, K01, K41, K02, K42, K03, K43, K04, K44, K05, K45, K06, K46, \
    K10, K50, K11, K51, K12, K52, K13, K53, K14, K54, K15, K55, K16, \
    K20, K60, K21, K61, K22, K62, K23, K63, K24, K64, K25, K65, K26, K56, \
    K30, K31, K32, K33, K34, K35, K36, K66, K37  \
) { \
    { K00, K01, K02, K03, K04, K05, K06, XXX }, \
    { K10, K11, K12, K13, K14, K15, K16, XXX }, \
    { K20, K21, K22, K23, K24, K25, K26, XXX }, \
    { K30, K31, K32, K33, K34, K35, K36, K37 }, \
    { K40, K41, K42, K43, K44, K45, K46, XXX }, \
    { K50, K51, K52, K53, K54, K55, K56, XXX }, \
    { K60, K61, K62, K63, K64, K65, K66, XXX }, \
}

// generated by KBFirmware JSON to QMK Parser
// https://noroadsleft.github.io/kbf_qmk_converter/
