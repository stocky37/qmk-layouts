#include "stocky37.h"

// shorter aliases for these
#define XXXX  KC_NO
#define ____  KC_TRANSPARENT

#define LCTL_QW LM(_QWERTY, MOD_LCTL)
#define LGUI_QW LM(_QWERTY, MOD_LGUI)
#define LALT_QW LM(_QWERTY, MOD_LALT)

// based off @drashna
#define ___________________BLANK___________________       _______, _______, _______, _______, _______

#define _______________SHORTCUT_MODS_______________       LM(_QWERTY, MOD_LCTL), LM(_QWERTY, MOD_LGUI), LM(_QWERTY, MOD_LALT)

#define _________________FUNC_LEFT_________________       KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5
#define _________________FUNC_RIGHT________________       KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10

#define ________________NUMBER_LEFT________________       KC_1,    KC_2,    KC_3,    KC_4,    KC_5
#define ________________NUMBER_RIGHT_______________       KC_6,    KC_7,    KC_8,    KC_9,    KC_0
#define ______________NUMBER_LEFT_ALT______________       KC_6,    KC_7,    KC_8,    KC_9,    KC_LBRC
#define ______________NUMBER_RIGHT_ALT_____________       KC_RBRC, KC_0,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5

#define _________________QWERTY_L1_________________       KC_Q,    KC_W,    KC_E,    KC_R,    KC_T
#define _________________QWERTY_L2_________________       KC_A,    KC_S,    KC_D,    KC_F,    KC_G
#define _________________QWERTY_L3_________________       KC_Z,    KC_X,    KC_C,    KC_V,    KC_B

#define _________________QWERTY_R1_________________       KC_Y,    KC_U,    KC_I,    KC_O,    KC_P
#define _________________QWERTY_R2_________________       KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT
#define _________________QWERTY_R3_________________       KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH

#define _________________UCIEA_L1__________________       KC_P,    KC_Y,    KC_U,    KC_O,    KC_MINS
#define _________________UCIEA_L2__________________       KC_C,    KC_I,    KC_E,    KC_A,    KC_QUOT
#define _________________UCIEA_L3__________________       KC_Z,    KC_SLSH, KC_COMM, KC_DOT,  KC_SCLN

#define _________________UCIEA_R1__________________       KC_K,    KC_D,    KC_H,    KC_F,    KC_X,    KC_Q
#define _________________UCIEA_R2__________________       KC_G,    KC_T,    KC_N,    KC_S,    KC_R,    KC_V
#define _________________UCIEA_R3__________________       KC_W,    KC_M,    KC_L,    KC_B,    KC_J

#define _______________UCIEA_GCSV_L1_______________       KC_G,    KC_Y,    KC_U,    KC_O,    KC_MINS
#define _______________UCIEA_GCSV_L2_______________       KC_C,    KC_I,    KC_E,    KC_A,    KC_COMM
#define _______________UCIEA_GCSV_L3_______________       KC_Z,    KC_J,    KC_QUOT, KC_DOT,  KC_SCLN

#define _______________UCIEA_GCSV_R1_______________       KC_K,    KC_M,    KC_H,    KC_P,    KC_X,    KC_Q
#define _______________UCIEA_GCSV_R2_______________       KC_D,    KC_T,    KC_R,    KC_N,    KC_S,    KC_V
#define _______________UCIEA_GCSV_R3_______________       KC_F,    KC_W,    KC_L,    KC_B,    KC_SLSH

#define _________________ENGRAM_L1_________________       KC_B,    KC_Y,    KC_O,    KC_U,    KC_QUOT
#define _________________ENGRAM_L2_________________       _______________UCIEA_GCSV_L2_______________
#define _________________ENGRAM_L3_________________       KC_G,    KC_X,    KC_J,    KC_K,    KC_MINS

#define _________________ENGRAM_R1_________________       KC_DQT,  KC_L,    KC_D,    KC_W,    KC_V,    KC_Z
#define _________________ENGRAM_R2_________________       KC_DOT,  KC_H,    KC_T,    KC_S,    KC_N,    KC_Q
#define _________________ENGRAM_R3_________________       KC_QUES, KC_R,    KC_M,    KC_F,    KC_P

#define _________________KEYPAD_R0_________________       ____,    KC_NUM,  KC_SLSH, KC_ASTR, KC_MINS
#define _________________KEYPAD_R1_________________       ____,    KC_7,    KC_8,    KC_9,    KC_MINS
#define _________________KEYPAD_R2_________________       ____,    KC_4,    KC_5,    KC_6,    KC_PLUS
#define _________________KEYPAD_R3_________________       ____,    KC_1,    KC_2,    KC_3,    KC_PLUS

#define _______________FUNCTIONS_L0________________       DF(_UCIEA), DF(_UCIEA_GCSV), DF(_ENGRAM), ____,    ____
#define _______________FUNCTIONS_L1________________       ____,       RGB_VAI,         ____,        ____,    ____
#define _______________FUNCTIONS_L2________________       ____,       RGB_VAD,         ____,        ____,    ____
#define _______________FUNCTIONS_L3________________       ___________________BLANK___________________

#define _______________FUNCTIONS_R0________________       ___________________BLANK___________________
#define _______________FUNCTIONS_R1________________       ___________________BLANK___________________
#define _______________FUNCTIONS_R2________________       ___________________BLANK___________________
#define _______________FUNCTIONS_R3________________       NK_TOGG, ____,     ____,     ____,     ____
