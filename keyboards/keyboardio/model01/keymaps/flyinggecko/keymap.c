/* Copyright 2018 James Laird-Wah
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

/* layer constants */
enum {
  EN = 0,
  WORKMAN,
  FUN,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[EN] = LAYOUT(
  KC_GRV , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                      KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , TO(WORKMAN),
  KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , RGB_MOD,    _______, KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_EQL ,
  KC_BSPC, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , KC_TAB ,    KC_ENT , KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT,
  KC_ESC , KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , KC_ESC ,    KC_RALT, KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_MINS,
                                         OSM(MOD_RALT),                           KC_LALT,
                                            KC_LCTL,                           KC_RCTL,
                                               KC_LGUI,                     KC_SPC ,
                                                  KC_LSFT,               KC_RSFT,
                                      MO(FUN),                                        MO(FUN)
  ),
[WORKMAN] = LAYOUT(
  KC_GRV , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                      KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , TO(EN),
  KC_TAB , KC_Q   , KC_D   , KC_R   , KC_W   , KC_B   , RGB_MOD,    _______, KC_J   , KC_F   , KC_U   , KC_P   , KC_SCLN, KC_EQL ,
  KC_BSPC, KC_A   , KC_S   , KC_H   , KC_T   , KC_G   , KC_TAB ,    KC_ENT , KC_Y   , KC_N   , KC_E   , KC_O   , KC_I   , KC_QUOT,
  KC_ESC , KC_Z   , KC_X   , KC_M   , KC_C   , KC_V   , KC_ESC ,    KC_RALT, KC_K   , KC_L   , KC_COMM, KC_DOT , KC_SLSH, KC_MINS,
                                         OSM(MOD_RALT),                           KC_LALT,
                                            KC_LCTL,                           KC_RCTL,
                                               KC_LGUI,                     KC_SPC ,
                                                  KC_LSFT,               KC_RSFT,
                                      MO(FUN),                                        MO(FUN)
  ),
[FUN] = LAYOUT(
  RESET  , KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  ,                      KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 ,
  KC_HOME, _______, KC_MS_U, KC_WH_U, KC_BTN2, _______, RGB_TOG,    KC_MPRV, KC_MNXT, KC_LCBR, KC_RCBR, KC_LBRC, KC_RBRC, KC_F12 ,
  KC_DEL , KC_MS_L, KC_MS_D, KC_MS_R, KC_BTN1, _______, _______,    KC_MPLY, KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, KC_PGDN, KC_PGUP,
  KC_END , KC_PSCR, KC_INS , KC_WH_D, KC_BTN3, _______, _______,    _______, KC_MUTE, KC_VOLD, KC_VOLU, _______, KC_BSLS, KC_PIPE,
                                         _______,                                 _______,
                                            _______,                           _______,
                                               _______,                     KC_ENT  ,
                                                  _______,               _______,
                                      MO(FUN),                                        MO(FUN)
  )
};

/* template for new layouts:
LAYOUT(
  _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, _______, _______,
                                         _______,                                 _______,
                                            _______,                           _______,
                                               _______,                     _______,
                                                  _______,               _______,
                                      _______,                                        _______
  )
*/

/* static void set_numpad_colours(int on, void (*write)(int, uint8_t, uint8_t, uint8_t)) { */
/*   if (!on) { */
/*     for (int i=44; i<=60; i++) */
/*       write(i, 0, 0, 0); */
/*     write(63, 0, 0, 0); */
/*     return; */
/*   } */

/*   /\* main number keys *\/ */
/*   for (int i=44; i<=47; i++) */
/*     write(i, 255, 0, 0); */
/*   for (int i=49; i<=54; i++) */
/*     write(i, 255, 0, 0); */

/*   /\* accessory keys *\/ */
/*   write(48, 128, 128, 0); */
/*   for (int i=55; i<=59; i++) */
/*     write(i, 128, 128, 0); */

/*   // enter */
/*   write(63, 0, 128, 0); */

/*   // num key */
/*   write(60, 128, 0, 128); */
/* } */

/* #ifdef RGB_MATRIX_ENABLE */
/* /\* the RGB matrix effects will overwrite the numpad indicator. */
/*  * this handy mechanism allows to override the matrix effects. */
/*  *\/ */
/* void rgb_matrix_indicators_user(void) { */
/*   if (layer_state & (1<<NUM)) { */
/*     set_numpad_colours(1, &rgb_matrix_set_color); */
/*   } */
/* } */
/* #else   /\* no RGB matrix support *\/ */

/* layer_state_t layer_state_set_user(layer_state_t state) { */
  /* if (state & (1<<NUM)) { */
    /* set_numpad_colours(1, &set_led_to); */
  /* } else { */
    /* set_numpad_colours(0, &set_led_to); */
  /* } */

  /* return state; */
/* } */
/* #endif */

/* vim: set ts=2 sw=2 et: */
