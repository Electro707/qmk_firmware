/* Copyright 2021 Electro707
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

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE
};

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
    QMKBEST = SAFE_RANGE,
    FRANK,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_BASE] = LAYOUT(
        QMKBEST, FRANK, LSFT(KC_F6),
        XXXXXXX, RESET, XXXXXXX,
        RGB_MODE_SWIRL, RGB_MODE_RAINBOW, RGB_MODE_PLAIN
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case QMKBEST:
            if (record->event.pressed) {
//                 when keycode QMKBEST is pressed
                SEND_STRING("QMK is the best thing ever!");
            } else {
//                 when keycode QMKBEST is released
            }
            break;
        case FRANK:
            if (record->event.pressed) {
//                 when keycode QMKURL is pressed
                SEND_STRING("Hello Franks...My PCBs are better");
            } else {
//                 when keycode QMKURL is released
            }
            break;
    }
    return true;
}

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { /* First encoder */
        if (clockwise) {
            tap_code(KC__VOLUP);
        } else {
            tap_code(KC__VOLDOWN);
        }
    }
    return false;
}
