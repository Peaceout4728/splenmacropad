// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT(
        KC_P7, KC_P8, KC_P9,
        KC_PSLS, KC_P4, KC_P5,
        KC_P6
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    return true;
}

const uint16_t PROGMEM encoder_map[][1][2] = {
    [0] = { ENCODER_CCW_CW(KC_WH_U, KC_WH_D) }
};