/* Copyright 2018 MechMerlin
 * Copyright 2018 Logan Huskins
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

#define ______ KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /*
  -------------------------------------------------------------------------------------------
  |GvEsc|  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |  =  | Backspace |
  -------------------------------------------------------------------------------------------
  |  Tab   |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |  [  |  ]  |   \    |
  -------------------------------------------------------------------------------------------
  |  Ctrl   |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  |  '  |    Enter    |
  -------------------------------------------------------------------------------------------
  |    Shift    |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |  /  |  Shift  |     |
  -------------------------------------------------------------------------------------------
  | Fn1   |  GUI  |  Alt  |              Space              |  Alt  |  Fn1  |  Fn1  | Ctrl  |
  -------------------------------------------------------------------------------------------
  */
  [0] = LAYOUT_60_ansi(
    KC_GESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
    KC_TAB,  KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
    KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
    KC_LSFT,       KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
    MO(1), KC_LGUI, KC_LALT,         KC_SPC,     KC_RALT, MO(1), MO(2), KC_RCTL
  ),
  /*
  -------------------------------------------------------------------------------------------
  |  `  | F1  | F2  | F3  | F4  | F5  | F6  | F7  | F8  | F9  | F10 | F11 | F12 |  Delete   |
  -------------------------------------------------------------------------------------------
  | TAB    |Home | Up | End  |PgUp |     |     |     |     |     |     |     |     | PrtSc  |
  -------------------------------------------------------------------------------------------
  |  Ctrl   |Left |Down |Right |PgDn |    |     |     |     |     |     |     |      Enter  |
  -------------------------------------------------------------------------------------------
  |    Shift    |     |     |     |     |     |     |     |     |     |     |  Shift  |     |
  -------------------------------------------------------------------------------------------
  | Fn1   |  GUI  |  Alt  |              Space              |  Alt  |       |       | Ctrl  |
  -------------------------------------------------------------------------------------------
  */
  [1] = LAYOUT_60_ansi(
    KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,
    KC_TAB,  KC_HOME, KC_UP,   KC_END,  KC_PGUP, _______, _______, _______, _______, _______, _______, _______, _______, KC_PSCR,
    KC_LCTL, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, _______, _______, _______, _______, _______, _______, _______, KC_ENT,
    KC_LSFT, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_RSFT,
    _______, KC_LGUI, KC_LALT,       KC_SPC,     KC_RALT, _______, _______, KC_RCTL
  ),
  /*
  -------------------------------------------------------------------------------------------
  |     |Stati|Breat|Rainb|Swirl|Snake|Knigh|Xmas |Gradi|Test |     |     |     |  Delete   |
  -------------------------------------------------------------------------------------------
  | TAB    |Hue- |Hue+ |     |     |Toggl|     |     |     |     |     |     |     | PrtSc  |
  -------------------------------------------------------------------------------------------
  |  Ctrl   |Sat- |Sat+ |     |     |     |     |     |     |     |     |     |      Enter  |
  -------------------------------------------------------------------------------------------
  |    Shift    |Brig-|Brig+|     |     |     |     |Mode+|     |     |     |  Shift  |     |
  -------------------------------------------------------------------------------------------
  | Fn1   |  GUI  |  Alt  |              Space              |  Alt  |       |       | Ctrl  |
  -------------------------------------------------------------------------------------------
  */
  [2] = LAYOUT_60_ansi(
    _______, RGB_M_P,  RGB_M_B,  RGB_M_R, RGB_M_SW, RGB_M_SN, RGB_M_K, RGB_M_X, RGB_M_G, RGB_M_T, _______, _______, _______,  _______,
    KC_TAB,  RGB_HUD,  RGB_HUI,  _______, _______,  RGB_TOG,  _______, _______, _______, _______, _______, _______, _______, KC_PSCR,
    KC_LCTL, RGB_SAD,  RGB_SAI,  _______, _______,  _______,  _______, _______, _______, _______, _______, _______, KC_ENT,
    KC_LSFT, RGB_VAD,  RGB_VAI,  _______,  _______, _______,  _______, RGB_MOD, _______, _______, _______, KC_RSFT,
    _______, KC_LGUI,  KC_LALT,       KC_SPC,     KC_RALT, _______, _______, KC_RCTL
  )
};
