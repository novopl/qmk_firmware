// vim: set sw=2 ts=2:
/* Copyright 2023 Brian Low
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
 * You should hav received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H



// #define M_LSFT(KEY)  MT(MOD_LSFT, KEY)
// #define M_LCTL(KEY)  MT(MOD_LCTL, KEY)
// #define M_LOPT(KEY)  MT(MOD_LALT, KEY)
// #define M_LCMD(KEY)  MT(MOD_LGUI, KEY)
// #define M_RSFT(KEY)  MT(MOD_RSFT, KEY)
// #define M_RCTL(KEY)  MT(MOD_RCTL, KEY)
// #define M_ROPT(KEY)  MT(MOD_RALT, KEY)
// #define M_RCMD(KEY)  MT(MOD_RGUI, KEY)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [L_COLEMAK_DH] = LAYOUT(
    KC_NUBS,        KC_1,         KC_2,         KC_3,         KC_4,         KC_5,                     KC_6, KC_7,         KC_8,         KC_9,         KC_0,           KC_BSPC,
    KC_TAB,         KC_Q,         KC_W,         KC_F,         KC_P,         KC_B,                     KC_J, KC_L,         KC_U,         KC_Y,         KC_SCLN,        KC_BSPC,
    LCTL_T(KC_ESC), KC_A,         KC_R,         KC_S,         KC_T,         KC_G,                     KC_H, KC_N,         KC_E,         KC_I,         KC_O,           KC_QUOT,
    KC_LSFT,        LCTL_T(KC_Z), KC_X,         KC_C,         KC_D,         KC_V, KC_MUTE,  KC_MPLY,  KC_K, KC_M,         KC_COMM,      KC_DOT,       KC_SLSH,        KC_RSFT,
                                        KC_LALT, KC_LCTL, KC_LGUI, TL_LOWR, KC_SPC,   KC_ENT,   TT(L_UPPER),  KC_RALT,  KC_LCTL, DF(L_GAME)
  ),
  [L_COLEMAK] = LAYOUT(
    KC_NUBS,  KC_1,         KC_2,         KC_3,         KC_4,         KC_5,                     KC_6, KC_7,         KC_8,         KC_9,         KC_0,           KC_BSPC,
    KC_TAB,   KC_Q,         KC_W,         KC_F,         KC_P,         KC_B,                     KC_J, KC_L,         KC_U,         KC_Y,         KC_SCLN,        KC_BSPC,
    KC_ESC,   KC_A,         KC_R,         KC_S,         KC_T,         KC_G,                     KC_H, KC_N,         KC_E,         KC_I,         KC_O,           KC_QUOT,
    KC_LSFT,  KC_Z,         KC_X,         KC_C,         KC_D,         KC_V, KC_MUTE,  KC_MPLY,  KC_K, KC_M,         KC_COMM,      KC_DOT,       KC_SLSH,        KC_RSFT,
                                        KC_LALT, KC_LCTL, KC_LGUI, TL_LOWR, KC_SPC,   KC_ENT,   TT(L_UPPER),  KC_RALT,  KC_LCTL, DF(L_GAME)
  ),
  [L_GAME] = LAYOUT(
    KC_NUBS,  KC_1,         KC_2,         KC_3,         KC_4,         KC_5,                     KC_6, KC_7,         KC_8,         KC_9,         KC_0,           KC_BSPC,
    KC_TAB,   KC_Q,         KC_W,         KC_UP,        KC_P,         KC_B,                     KC_J, KC_L,         KC_U,         KC_Y,         KC_SCLN,        KC_BSPC,
    KC_ESC,   KC_A,         KC_LEFT,      KC_DOWN,      KC_RIGHT,     KC_G,                     KC_H, KC_N,         KC_E,         KC_I,         KC_O,           KC_QUOT,
    KC_LSFT,  KC_Z,         KC_X,         KC_C,         KC_D,         KC_V, KC_MUTE,  KC_MPLY,  KC_K, KC_M,         KC_COMM,      KC_DOT,       KC_SLSH,        KC_RSFT,
                                        KC_LALT, KC_LCTL, KC_LGUI, TL_LOWR, KC_SPC,   KC_ENT,   TT(L_UPPER),  KC_RALT,  KC_LCTL, DF(L_COLEMAK_DH)
  ),
  // [L_COLEMAK] = LAYOUT(
  //   KC_NUBS,  KC_1,         KC_2,         KC_3,         KC_4,         KC_5,                     KC_6, KC_7,         KC_8,         KC_9,         KC_0,           KC_BSPC,
  //   KC_TAB,   KC_Q,         KC_W,         KC_F,         KC_P,         KC_G,                     KC_J, KC_L,         KC_U,         KC_Y,         KC_SCLN,        KC_BSPC,
  //   KC_ESC,   KC_A,         KC_R,         KC_S,         KC_T,         KC_D,                     KC_H, KC_N,         KC_E,         KC_I,         KC_O,           KC_QUOT,
  //   KC_LSFT,  LCTL_T(KC_Z), KC_X,         KC_C,         KC_V,         KC_B, KC_MUTE,  KC_MPLY,  KC_K, KC_M,         KC_COMM,      KC_DOT,       KC_SLSH,        KC_RSFT,
  //                                       KC_LALT, KC_LCTL, KC_LGUI, TL_LOWR, KC_SPC,   KC_ENT,   TT(L_UPPER),  KC_RALT,  KC_LCTL, DF(L_COLEMAK_DH)
  // ),
  // COLEMAK-DH
  // [L_COLEMAK] = LAYOUT(
  //   KC_NUBS,  KC_1,         KC_2,         KC_3,         KC_4,         KC_5,                     KC_6, KC_7,         KC_8,         KC_9,         KC_0,           KC_BSPC,
  //   KC_TAB,   KC_Q,         KC_W,         KC_F,         KC_P,         KC_B,                     KC_J, KC_L,         KC_U,         KC_Y,         KC_SCLN,        KC_BSPC,
  //   KC_ESC,   KC_A,         KC_R,         KC_S,         KC_T,         KC_G,                     KC_M, KC_N,         KC_E,         KC_I,         KC_O,           KC_QUOT,
  //   KC_LSFT,  KC_X,         KC_C,         KC_D,         KC_V,         KC_Z, KC_MUTE,  KC_MPLY,  KC_K, KC_H,         KC_COMM,      KC_DOT,       KC_SLSH,        KC_RSFT,
  //                                   KC_LALT, KC_LCTL, KC_LGUI, MO(L_LOWER), KC_SPC,   KC_ENT,   MO(L_UPPER),  KC_RALT,  KC_LCTL, DF(L_QWERTY)
  // ),
  // QWERTY
  // [L_QWERTY] = LAYOUT(
  //   KC_NUBS,  KC_1,         KC_2,         KC_3,         KC_4,         KC_5,                     KC_6, KC_7,         KC_8,         KC_9,         KC_0,     KC_BSPC,
  //   KC_TAB,   KC_Q,         KC_W,         KC_E,         KC_R,         KC_T,                     KC_Y, KC_U,         KC_I,         KC_O,         KC_P,     KC_BSPC,
  //   KC_ESC,   KC_A,         KC_S,         KC_D,         KC_F,         KC_G,                     KC_H, KC_J,         KC_K,         KC_L,         KC_NO,    KC_QUOT,
  //   KC_LSFT,  KC_Z,         KC_X,         KC_C,         KC_V,         KC_B, KC_MUTE,  KC_MPLY,  KC_N, KC_M,         KC_COMM,      KC_DOT,       KC_SLSH,  KC_RSFT,
  //                                       KC_LCTL, KC_LCTL, KC_LGUI, TL_LOWR, KC_SPC,   KC_ENT,   TL_UPPR,  KC_RALT,  KC_LCTL, DF(L_COLEMAK)
  // ),
  // QWERTY row mods
  // [L_QWERTY] = LAYOUT(
  //   KC_NUBS,  KC_1,         KC_2,         KC_3,         KC_4,         KC_5,                     KC_6, KC_7,         KC_8,         KC_9,         KC_0,             KC_BSPC,
  //   KC_TAB,   KC_Q,         KC_W,         KC_E,         KC_R,         KC_T,                     KC_Y, KC_U,         KC_I,         KC_O,         KC_P,             KC_BSPC,
  //   KC_ESC,   M_LOPT(KC_A), M_LSFT(KC_S), M_LCTL(KC_D), M_LCMD(KC_F), KC_G,                     KC_H, M_RCMD(KC_J), M_RCTL(KC_K), M_RSFT(KC_L), M_ROPT(KC_SCLN),  KC_QUOT,
  //   KC_LSFT,  KC_Z,         KC_X,         KC_C,         KC_V,         KC_B, KC_MUTE,  KC_MPLY,  KC_N, KC_M,         KC_COMM,      KC_DOT,       KC_SLSH,          KC_RSFT,
  //                                   KC_LALT, KC_LCTL, KC_LGUI, MO(L_LOWER), KC_SPC,   KC_ENT,   MO(L_UPPER),  KC_RALT,  KC_RCMD, DF(L_COLEMAK)
  // ),
  [L_LOWER] = LAYOUT(
    QK_RBT,     KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,                          KC_F6,    KC_F7,      KC_F8,    KC_F9,    KC_F10,     KC_F11,
    G(KC_TAB),  KC_1,       KC_2,       KC_3,       KC_4,       KC_5,                           KC_6,     KC_7,       KC_8,     KC_9,     KC_0,       KC_BSPC,
    KC_ENT,     S(KC_1),    S(KC_LBRC), S(KC_9),    S(KC_0),    S(KC_RBRC),                     S(KC_6),  S(KC_7),    S(KC_8),  KC_NO,    S(KC_SCLN), KC_BSLS,
    KC_LSFT,    S(KC_DOT),  KC_MINS,    KC_LBRC,    KC_RBRC,    KC_NO ,   KC_MUTE,  KC_MPLY,    KC_NO,    KC_NO,      KC_COMM,    KC_DOT,   KC_NO,      KC_RSFT,
                                    G(C(KC_Q)),  KC_UP,  KC_ENT, KC_NO,   KC_ENT,   G(KC_SPC),  TL_UPPR,  KC_RALT,    KC_LCTL,  KC_RCTL
  ),
  [L_UPPER] = LAYOUT(
    KC_NUBS,    KC_F12,   KC_F13,     KC_F14,     KC_F15,   KC_F16,                         KC_F17,   KC_F18,     KC_F19,       KC_F20,     KC_F21,     KC_F22,
    S(KC_NUBS), KC_NO,    KC_NO,      KC_NO,      KC_NO,    KC_NO,                          KC_DOWN,  KC_RIGHT,   S(KC_MINS),   KC_EQL,     KC_NO,      KC_BSPC,
    KC_NUBS,    S(KC_1),  S(KC_2),    S(KC_3),    S(KC_4),  S(KC_5),                        KC_LEFT,  KC_NO,      KC_MINS,      S(KC_EQL),  S(KC_SCLN), S(KC_BSLS),
    KC_LSFT,    KC_ACL2,  S(KC_MINS), KC_LBRC,    KC_RBRC,  S(KC_EQL),  KC_MUTE,  KC_MPLY,  KC_UP,    KC_NO,      KC_NO,        KC_NO,      KC_NO,      KC_RSFT,
                                  KC_LALT,  KC_LCTL,  KC_LCMD, TL_LOWR, A(KC_BSPC),  KC_SPC,  TT(L_UPPER),    KC_RALT,    KC_LCTL,      KC_RCTL
  ),
  [L_ADJUST] = LAYOUT(
    KC_NO,  KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,                      KC_NO,        C(A(KC_MINS)),  C(A(KC_EQL)),   KC_NO,          KC_NO,      KC_NO,
    KC_NO,  KC_NO,  KC_BTN1,  KC_MS_U,  KC_BTN2,  KC_WH_U,                    C(A(KC_D)),   C(A(KC_U)),     C(A(KC_UP)),    C(A(KC_I)),     C(A(KC_T)), KC_NO,
    KC_NO,  KC_NO,  KC_MS_L,  KC_MS_D,  KC_MS_R,  KC_WH_D,                    KC_ACL1,      C(A(KC_LEFT)),  C(A(KC_BSPC)),  C(A(KC_RIGHT)), C(A(KC_D)), KC_NO,
    KC_NO,  KC_NO,  KC_NO,    KC_WH_D,  KC_WH_U,  C(KC_LEFT), KC_NO,  KC_NO,  C(KC_RIGHT),  C(A(KC_J)),     C(A(KC_DOWN)),  C(A(KC_K)),     KC_NO,      KC_NO,
                              KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,    KC_NO
  ),
};


bool rgb_matrix_indicators_user(void) {
  switch (get_highest_layer(layer_state)) {
    case L_LOWER:
      rgb_matrix_set_color_all(0x20, 0x00, 0x00);
      break;
    case L_UPPER:
      rgb_matrix_set_color_all(0x00, 0x00, 0x20);
      break;
    case L_ADJUST:
      rgb_matrix_set_color_all(0x20, 0x00, 0x20);
      break;
    default:
      switch (biton32(default_layer_state)) {
        case L_QWERTY:
          rgb_matrix_set_color_all(0xCC, 0x20, 0x00);
          break;
        case L_COLEMAK_DH:
          // rgb_matrix_set_color_all(0x00, 0x40, 0x00);
          rgb_matrix_set_color_all(0x00, 0x20, 0x00);
          // rgb_matrix_sethsv(0x78, 0x64, 0x0d);
          break;
        case L_COLEMAK:
          rgb_matrix_set_color_all(0x20, 0x20, 0x00);
          break;
        case L_GAME:
          rgb_matrix_set_color_all(0x00, 0x20, 0x20);
          break;
      }
  }
  return false;
}


#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT) },
};
#endif
