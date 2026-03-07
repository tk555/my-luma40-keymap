/* Copyright 2025 Carlos Eduardo de Paula <carlosedp@gmail.com>
 * Copyright 2025 EPOMAKER <https://github.com/Epomaker>
 * Copyright 2023 LiWenLiu <https://github.com/LiuLiuQMK>
 * Copyright 2021 QMK <https://github.com/qmk/qmk_firmware>
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
#include "rdmctmzt_common.h"

#define MY_VLEFT LGUI(LCTL(KC_LEFT))
#define MY_TASKV LGUI(KC_TAB)
#define MY_VRIGHT LGUI(LCTL(KC_RIGHT))

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_tkl_ansi(
        KC_Q,    KC_W,    KC_E,      KC_R,     KC_T,       KC_TAB,       KC_Y,     KC_U,    KC_I,    KC_O,     KC_P,     KC_LBRC,
        KC_A,    KC_S,    KC_D,      KC_F,     KC_G,       KC_LALT,      KC_H,     KC_J,    KC_K,    KC_L,     KC_SCLN,  KC_QUOT,
        KC_Z,    KC_X,    KC_C,      KC_V,     KC_B,       KC_LGUI,      KC_N,     KC_M,    KC_COMM, KC_DOT,   KC_SLSH,  KC_BSLS,
        MO(4),   KC_LCTL, KC_LSFT,   MO(1),    KC_SPC,                   KC_ENT,   MO(2),   KC_LCTL, KC_INS,   KC_PSCR,  KC_PAUS
    ),
    [1] = LAYOUT_tkl_ansi(
        LCTL(KC_Q), LCTL(KC_W), LCTL(KC_E),LCTL(KC_R),LCTL(KC_T), KC_INS,   KC_APP, KC_F7, KC_F8, KC_F9, KC_F10, KC_ESC,
        LCTL(KC_A), LCTL(KC_S), LCTL(KC_D), LCTL(KC_F),LCTL(KC_G),_______,   KC_PGUP, KC_F4, KC_F5, KC_F6, KC_F11, KC_F14,
        LCTL(KC_Z), LCTL(KC_X), LCTL(KC_C),LCTL(KC_V), LCTL(KC_B),_______,   KC_PGDN, KC_F1, KC_F2, KC_F3, KC_F12, KC_F13,
        _______   , _______,    _______, _______, _______, LSFT(LCTL(KC_ENT)), _______,    _______,    _______, _______, _______ 
    ),
    [2] = LAYOUT_tkl_ansi(
        KC_1,    KC_2,    KC_3,    KC_4,    KC_5,  _______,   KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_RBRC,
        MY_VLEFT,  MY_TASKV,  MY_VRIGHT, _______,_______,_______,KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, KC_MINS,  KC_EQL,
        KC_F15,   KC_F16,   KC_F17,  KC_F18,   KC_F19,_______,   KC_BSPC,  KC_DEL, KC_HOME,  KC_END,  KC_GRV, KC_RSFT,
        _______, _______, _______, _______, KC_TAB, _______, _______, _______, _______, _______, _______
    ),
    [3] = LAYOUT_tkl_ansi(
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, XXXXXXX, XXXXXXX,  XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, XXXXXXX, XXXXXXX,  XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, XXXXXXX, XXXXXXX,  XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX,
        _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______
    ),
    [4] = LAYOUT_tkl_ansi(
        KC_TAB,  MD_BLE1, MD_BLE2,   MD_BLE3,  MD_24G,     RM_NEXT,   _______,  _______,   KC_LBRC, KC_RBRC,  KC_BSLS,  RM_TOGG,
        KC_ESC,  KC_1,    KC_2,      KC_3,     KC_4,       KC_5,      KC_6,     KC_7,    KC_8,    KC_9,     KC_0,     KC_MINS,
        KC_LSFT, KC_INS,  KC_DEL,    KC_HOME,  KC_END,     KC_PGUP,   KC_PGDN,  RM_SATD, RM_HUED, RM_HUEU,  RM_VALU , QK_BAT,
        KC_NO,   KC_DEL,  KC_GRV,    KC_LGUI,  KC_LALT,               EE_CLR,   RM_SATU, KC_EQL,  RM_SPDD,  RM_VALD,  RM_SPDU
    )
};
// clang-format on
