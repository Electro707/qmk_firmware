/* Copyright %YEAR% %YOUR_NAME%
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

#include "e707_macro.h"

#ifdef RGB_MATRIX_ENABLE
led_config_t g_led_config = { {
  // Key Matrix to LED Index
  {   8, 0,   1 },
  {   7, 2,   3 },
  {   6, 4,   5 },
}, {
  // LED Index to Physical Position
  { 112, 28 }, { 244,  28 }, { 112,  46 }, { 244,  46 }, {  112,  64 }, {  244,  64 } , { 0,  64 }, {  0,  46 }, {  0,  28 }, { 0, 0 }, { 244,  0 }
}, {
  // LED Index to Flag
  4, 4, 4, 4, 4, 4, 4, 4, 4, 0, 4
} };

const is31_led PROGMEM g_is31_leds[DRIVER_LED_TOTAL] = {
    {0, OUT_1, OUT_2, OUT_3},
    {0, OUT_4, OUT_5, OUT_6},
    {0, OUT_7, OUT_8, OUT_9},
    {0, OUT_10, OUT_11, OUT_12},
    {0, OUT_13, OUT_14, OUT_15},
    {0, OUT_16, OUT_17, OUT_18},
    {0, OUT_19, OUT_20, OUT_21},
    {0, OUT_22, OUT_23, OUT_24},
    {0, OUT_25, OUT_26, OUT_27},
    {0, OUT_28, OUT_29, OUT_30},
//     {0, OUT_31, OUT_32, OUT_33},
    {0, OUT_34, OUT_35, OUT_36},
};
#endif

void keyboard_pre_init_user(void){
    // Set C7 as an input as C6 will be shorted to it for PWM speaker reason
    setPinInput(C7);
    setPinInput(C6);
    // Set B6 as an output and set it to HIGH. Used for the IS31FL3236 Shutdown pin
    setPinOutput(B6);
    writePinHigh(B6);
}

void keyboard_post_init_user(){
#ifdef RGB_MATRIX_ENABLE
    rgb_matrix_enable();
    rgb_matrix_sethsv(85, 255, 255);
    rgb_matrix_mode(RGB_MATRIX_SOLID_REACTIVE_SIMPLE);
//     rgb_matrix_set_color(2, 0, 255, 0);
#endif
}
