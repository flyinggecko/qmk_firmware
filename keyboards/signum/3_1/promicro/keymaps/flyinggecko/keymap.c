#include "promicro.h"

enum {
    EN = 0,
    WORKMAN,
    FUN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [EN] = LAYOUT_ortho(
        KC_GRV , KC_1   , KC_2   , KC_3         , KC_4                             , KC_7   , KC_8   , KC_9   , KC_0   , TO(1),
        KC_TAB , KC_Q   , KC_W   , KC_E         , KC_R                             , KC_U   , KC_I   , KC_O   , KC_P   , KC_EQL,
        KC_BSPC, KC_A   , KC_S   , KC_D         , KC_F                             , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT,
        KC_ESC , KC_Z   , KC_X   , KC_C         , KC_V                             , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_MINS,

        MO(2)  , KC_LSFT, KC_RALT, OSM(MOD_RALT), KC_LCTL                          , KC_RCTL, KC_LALT, KC_RALT, KC_RSFT, MO(2)  ,

                                                            KC_LGUI, /* these columns work in reverse order */
                                                            KC_B,
                                                            KC_G,
                                                            KC_T,
                                                            KC_5,
                                                                        KC_6,
                                                                        KC_Y,
                                                                        KC_H,
                                                                        KC_N,
                                                                        KC_SPC
                ),

    [WORKMAN] = LAYOUT_ortho(
        KC_GRV , KC_1   , KC_2   , KC_3         , KC_4                             , KC_7   , KC_8   , KC_9   , KC_0   , TO(0),
        KC_TAB , KC_Q   , KC_D   , KC_R         , KC_W                             , KC_F   , KC_U   , KC_P   , KC_SCLN, KC_EQL,
        KC_BSPC, KC_A   , KC_S   , KC_H         , KC_T                             , KC_N   , KC_E   , KC_O   , KC_I   , KC_QUOT,
        KC_ESC , KC_Z   , KC_X   , KC_M         , KC_C                             , KC_L   , KC_COMM, KC_DOT , KC_SLSH, KC_MINS,

        MO(2)  , KC_LSFT, KC_RALT, OSM(MOD_RALT), KC_LCTL                          , KC_RCTL, KC_LALT, KC_RALT, KC_RSFT, MO(2)  ,

                                                            KC_LGUI,
                                                            KC_V,
                                                            KC_G,
                                                            KC_B,
                                                            KC_5,
                                                                        KC_6,
                                                                        KC_J,
                                                                        KC_Y,
                                                                        KC_K,
                                                                        KC_SPC
                ),

    [FUN] = LAYOUT_ortho(
        RESET  , KC_F1  , KC_F2  , KC_F3  , KC_F4                              , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11,
        KC_HOME, KC_NO  , KC_MS_U, KC_WH_U, KC_MS_BTN2                         , KC_LCBR, KC_RCBR, KC_LBRC, KC_RBRC, KC_F12,
        KC_DEL , KC_MS_L, KC_MS_D, KC_MS_R, KC_MS_BTN1                         , KC_DOWN, KC_UP  , KC_RGHT, KC_PGUP, KC_PGDN,
        KC_END , KC_PSCR, KC_NO  , KC_WH_D, KC_MS_BTN3                         , KC_VOLD, KC_VOLU, KC_NO  , KC_BSLS, KC_PIPE,

        KC_NO  , KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS                            , KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,

                                                            KC_TRNS,
                                                            KC_TRNS,
                                                            KC_BRID,
                                                            KC_BRIU,
                                                            KC_F5,
                                                                        KC_F6,
                                                                        KC_MPRV,
                                                                        KC_LEFT,
                                                                        KC_MUTE,
                                                                        KC_ENT
                ),
};
