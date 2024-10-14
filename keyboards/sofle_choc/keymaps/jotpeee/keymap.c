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


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [L_QWERTY] = LAYOUT(
    KC_NUBS,  KC_1,         KC_2,         KC_3,         KC_4,         KC_5,                     KC_6,   KC_7,         KC_8,         KC_9,         KC_0,     DF(L_VIDEO),
    KC_TAB,   KC_Q,         KC_W,         KC_E,         KC_R,         KC_T,                     KC_Y,   KC_U,         KC_I,         KC_O,         KC_P,     KC_LCTL,
    KC_ESC,   KC_A,         KC_S,         KC_D,         KC_F,         KC_G,                     KC_H,   KC_J,         KC_K,         KC_L,         KC_SCLN,    KC_QUOT,
    KC_LSFT,  KC_Z,         KC_X,         KC_C,         KC_V,         KC_B, KC_MUTE,  KC_MPLY,  KC_N,   KC_M,         KC_COMM,      KC_DOT,       KC_SLSH,  KC_RSFT,
                                        KC_LGUI, KC_MEH, KC_LCTL, TL_LOWR,  KC_SPC,   KC_ENT,   KC_BSPC,  TL_UPPR,  KC_LCTL, KC_NO
  ),
  [L_VIDEO] = LAYOUT(
    KC_NUBS,        KC_1,         KC_2,         KC_3,         KC_4,         KC_5,                     KC_6,     KC_7,     KC_8,         KC_9,         KC_0,           DF(L_QWERTY),
    KC_TAB,         KC_Q,         KC_E,         KC_F,         KC_P,         KC_O,                     KC_DOWN,  KC_RIGHT, KC_U,         KC_Y,         KC_SCLN,        KC_LCTL,
    KC_ESC,         KC_A,         KC_R,         KC_S,         KC_T,         KC_I,                     KC_LEFT,  KC_N,     KC_E,         KC_I,         KC_O,           KC_QUOT,
    KC_LSFT,        KC_Z,         KC_X,         KC_C,         KC_D,         KC_V, KC_MUTE,  KC_MPLY,  KC_UP,    KC_M,     KC_COMM,      KC_DOT,       KC_SLSH,        KC_RSFT,
                                              KC_LALT, KC_LCTL, KC_LGUI, TL_LOWR, KC_SPC,   KC_SPC,   TL_UPPR,  KC_RALT,  KC_LCTL, KC_NO
  ),
  [L_COLEMAK_DH] = LAYOUT(
    KC_NUBS,        KC_1,         KC_2,         KC_3,         KC_4,         KC_5,                     KC_6, KC_7,         KC_8,         KC_9,         KC_0,           DF(L_QWERTY),
    KC_TAB,         KC_Q,         KC_W,         KC_F,         KC_P,         KC_B,                     KC_J, KC_L,         KC_U,         KC_Y,         KC_SCLN,        KC_LCTL,
    KC_ESC,         KC_A,         KC_R,         KC_S,         KC_T,         KC_G,                     KC_H, KC_N,         KC_E,         KC_I,         KC_O,           KC_QUOT,
    KC_LSFT,        KC_Z,         KC_X,         KC_C,         KC_D,         KC_V, KC_MUTE,  KC_MPLY,  KC_K, KC_M,         KC_COMM,      KC_DOT,       KC_SLSH,        KC_RSFT,
                                                KC_LCTL, KC_MEH, KC_LGUI, TL_LOWR, KC_SPC,  KC_ENT,   KC_BSPC,  TL_UPPR,  KC_RALT, KC_NO
  ),
  [L_LOWER] = LAYOUT(
    QK_RBT,           KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,                      KC_F6,      KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_F11,
    KC_NUBS,          S(KC_1),    S(KC_2),    S(KC_3),    S(KC_4),    S(KC_5),                    S(KC_6),    S(KC_7),    S(KC_8),    S(KC_9),    S(KC_0),    KC_LCTL,
    KC_ESC,           KC_1,       KC_2,       KC_3,       KC_4,       KC_5,                       KC_EQL,     KC_MINS,    S(KC_5),    KC_LBRC,    KC_RBRC,    KC_BSLS,
    KC_LSFT,          KC_6,       KC_7,       KC_8,       KC_9,       KC_0,   KC_MUTE,  KC_MPLY,  S(KC_EQL),  S(KC_MINS), S(KC_NUBS), S(KC_LBRC), S(KC_RBRC),  KC_RSFT,
                                        KC_LCTL,  G(C(KC_Q)), KC_NO, TL_LOWR, KC_ENT,   G(KC_SPC),  A(KC_BSPC),  TL_UPPR,    KC_LCTL,  KC_RCTL
  ),
  [L_UPPER] = LAYOUT(
    KC_NO,            KC_F12, KC_F13,   KC_F14,     KC_F15,       KC_F16,                         KC_F17,       KC_F18,     KC_F19,     KC_F20,     KC_F21,   DF(L_COLEMAK_DH),
    S(KC_NUBS),       KC_F11, KC_F12,   C(KC_LEFT), C(KC_RIGHT),  KC_NO,                          KC_NO,        KC_NO,      KC_NO,      KC_NO,      KC_NO,    KC_NO,
    KC_ESC,           KC_F1,  KC_F2,    KC_F3,      KC_F4,        KC_F5,                          KC_LEFT,      KC_DOWN,    KC_UP,      KC_RIGHT,   KC_NO,    KC_NO,
    KC_LSFT,          KC_F6,  KC_F7,    KC_F8,      KC_F9,        KC_F10,   KC_MUTE,  KC_MPLY,    KC_NO,        KC_NO,      KC_NO,      KC_NO,      KC_NO,    KC_RSFT,
                                    KC_LALT,  KC_HYPR,  KC_MEH, TL_LOWR, A(KC_BSPC),  KC_SPC,  KC_NO,    TL_UPPR,    KC_SPC,      KC_RCTL
  ),
  [L_ADJUST] = LAYOUT(
    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,                  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,  KC_NO,
    KC_NO,    KC_NO,    KC_ACL2,  KC_ACL1,  KC_ACL2,  KC_NO,                  KC_NO,    KC_BTN1,  KC_MS_U,  KC_BTN2,  KC_NO,  KC_ACL2,
    KC_ACL1,  KC_NO,    KC_ACL1,  KC_PGDN,  KC_PGUP,  KC_NO,                  KC_NO,    KC_MS_L,  KC_MS_D,  KC_MS_R,  KC_NO,  KC_ACL1,
    KC_NO,    KC_NO,    KC_ACL2,  KC_WH_D,  KC_WH_U,  KC_NO,  KC_NO,  KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,  KC_NO,
                            KC_NO,  KC_NO,  KC_NO,  TL_LOWR,  KC_NO,  KC_NO,  KC_NO,  TL_UPPR,  KC_NO,    KC_NO
  ),
};

bool rgb_matrix_indicators_user(void) {
  switch (get_highest_layer(layer_state)) {
    case L_LOWER:
      rgb_matrix_set_color_all(0x00, 0xff, 0x00);
      break;
    case L_UPPER:
      rgb_matrix_set_color_all(0x00, 0x00, 0xff);
      break;
    case L_ADJUST:
      rgb_matrix_set_color_all(0x80, 0x00, 0x80);
      break;
    default:
      switch (biton32(default_layer_state)) {
        case L_QWERTY:
          // rgb_matrix_set_color_all(0x00, 0x05, 0x00);
          break;
        case L_VIDEO:
          rgb_matrix_set_color_all(0x00, 0x40, 0x40);
          break;
        case L_COLEMAK_DH:
          rgb_matrix_set_color_all(0x05, 0x05, 0x00);
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
