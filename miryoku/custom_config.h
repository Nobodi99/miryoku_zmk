// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

// Include for unicode
#include "zmk-nodefree-config/helper.h"

// Unicode definitions
ZMK_UNICODE_PAIR( de_ae,   N0, N0,  E, N4,   N0, N0,  C, N4 )
ZMK_UNICODE_PAIR( de_oe,   N0, N0,  F, N6,   N0, N0,  D, N6 )
ZMK_UNICODE_PAIR( de_ue,   N0, N0,  F,  C,   N0, N0,  D,  C )

// Layer name defines
#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Base") \
MIRYOKU_X(EXTRA,  "Extra") \
MIRYOKU_X(TAP,    "Tap") \
MIRYOKU_X(BUTTON, "Button") \
MIRYOKU_X(NAV,    "Nav") \
MIRYOKU_X(MOUSE,  "Mouse") \
MIRYOKU_X(MEDIA,  "Media") \
MIRYOKU_X(NUM,    "Num") \
MIRYOKU_X(SYM,    "Sym") \
MIRYOKU_X(FUN,    "Fun") \
MIRYOKU_X(ACC,    "Acc")

#define U_BASE   0
#define U_EXTRA  1
#define U_TAP    2
#define U_BUTTON 3
#define U_NAV    4
#define U_MOUSE  5
#define U_MEDIA  6
#define U_NUM    7
#define U_SYM    8
#define U_FUN    9
#define U_Acc    10

// Layermapping
#define MIRYOKU_LAYERMAPPING_ACC MIRYOKU_MAPPING

// Layer layout defines

#define MIRYOKU_LAYERS_ACC \
U_NU,             U_NU,             U_NU,             U_NU,             U_NU,              U_NU,              U_NU,              &de_ue,            U_NU,              U_NU,             \
&de_ae,           U_NU,             U_NU,             U_NU,             U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              &de_oe,           \
U_NU,             U_NU,             U_NU,             U_NU,             U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,             \
U_NP,             U_NP,             U_NU,             U_NU,             U_NU,              U_NU,              U_NU,              U_NU,              U_NP,              U_NP

#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
U_MT(LGUI, A),     U_MT(LALT, R),     U_MT(LCTRL, S),    U_MT(LSHFT, T),    &kp G,             &kp K,             U_MT(LSHFT, N),    U_MT(LCTRL, E),    U_MT(LALT, I),     U_MT(LGUI, O),     \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             U_LT(U_ACC, D),    &kp V,             &kp M,             U_LT(U_ACC, H),    &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPC),  U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP
