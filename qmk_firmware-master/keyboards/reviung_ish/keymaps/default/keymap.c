#include QMK_KEYBOARD_H

enum layers {
    _QWERTY,
    _LOWER,
    _RAISE,
};

#define RAISE MO(_RAISE)

#define KC_RAISE_ENT LT(RAISE, KC_ENT)
#define KC_RAISE_SPC LT(RAISE, KC_SPC)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_QWERTY] = LAYOUT(
        KC_ESC,   KC_1,     KC_2,      KC_3,      KC_4,      KC_5,                     KC_6,      KC_7,     KC_8,     KC_9,      KC_0,      KC_MINUS,
        KC_TAB,   KC_Q,     KC_W,      KC_E,      KC_R,      KC_T,                     KC_Y,      KC_U,     KC_I,     KC_O,      KC_P,      KC_BSPC,
        KC_LCTRL, KC_A,     KC_S,      KC_D,      KC_F,      KC_G,      KC_SPC,        KC_H,      KC_J,     KC_K,     KC_L,      KC_LCTRL,  KC_QUOT,
        KC_LSFT,  KC_Z,     KC_X,      KC_C,      KC_V,      KC_B,                     KC_N,      KC_M,     KC_COMM,  KC_DOT,    KC_SLSH,   KC_RSFT,
                            KC_LGUI,   KC_LALT,              KC_RAISE_SPC,    KC_RAISE_ENT,  KC_SPC,    KC_LALT,  KC_LGUI
    ),
     [_RAISE] = LAYOUT(
        KC_F1,    KC_F2,    KC_F3,     KC_F4,     KC_F5,     KC_F6,                    KC_F7,     KC_F8,    KC_F9,    KC_F10,    KC_F11,    KC_F12,
        KC_CAPS,  _______,  _______,   KC_LCBR,   KC_RCBR,   KC_HOME,                  KC_END,    KC_GRV,   KC_PIPE,  KC_TILD,   _______,   KC_BSLS, 
        _______,  _______,  _______,   KC_LPRN,   KC_RPRN,   _______,    _______,      KC_LEFT,   KC_DOWN,  KC_UP,    KC_RIGHT,  _______,   _______, 
        _______,  _______,  _______,   KC_LBRC,   KC_RBRC,   _______,                  KC_PLUS,   KC_MINUS, KC_EQL,   _______,   _______,   _______,
                            _______,   _______,              KC_EQL,     _______,      KC_EQL,   _______,   _______
    ),
};

const uint16_t PROGMEM SD_DELETE[] = {KC_S, KC_D, COMBO_END};
const uint16_t PROGMEM QW_ESCAPE[] = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM JK_COLON[] = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM HJ_ANGLE[] = {KC_H, KC_J, COMBO_END};
const uint16_t PROGMEM KL_RANGLE[] = {KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM CV_ENTER[] = {KC_C, KC_V, COMBO_END};
const uint16_t PROGMEM MCOMMA_UNDERSCORE[] = {KC_M, KC_COMMA, COMBO_END};



combo_t key_combos[COMBO_COUNT] = {
    COMBO(SD_DELETE, KC_BSPC),
    COMBO(QW_ESCAPE, KC_ESCAPE),
    COMBO(JK_COLON, KC_SCOLON),
    COMBO(HJ_ANGLE, KC_LEFT_ANGLE_BRACKET),
    COMBO(KL_RANGLE, KC_RIGHT_ANGLE_BRACKET),
    COMBO(CV_ENTER, KC_ENTER),
    COMBO(MCOMMA_UNDERSCORE, KC_UNDERSCORE), // keycodes with modifiers are possible too!
};

