#ifndef USERSPACE
#define USERSPACE

#include "quantum.h"

enum layers {
    _BASE = 0,
    _UCIEA,
    _UCIEA_GCSV,
    _ENGRAM,
    _KB,
    _FN
};

// Shorter spacing
#define XXXX  KC_NO
#define ____  KC_TRNS

#define LM_LCTL LM(_KB, MOD_LCTL)
#define LM_LGUI LM(_KB, MOD_LGUI)
#define LM_LALT LM(_KB, MOD_LALT)

#endif
