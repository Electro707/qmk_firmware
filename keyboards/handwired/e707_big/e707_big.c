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

#include "e707_big.h"

#ifdef RGB_MATRIX_ENABLE
const is31_led PROGMEM g_is31_leds[DRIVER_LED_TOTAL] = {
/* Refer to IS31 manual for these locations
 *   driver
 *   |  R location
 *   |  |       G location
 *   |  |       |       B location
 *   |  |       |       | */
    // Third LED Driver
    {0, A_1,    B_1,    C_1},
    {0, A_2,    B_2,    C_2},
    {0, A_5,    B_5,    C_5},
    {0, A_9,    B_9,    C_9},
    {0, A_10,    B_10,    C_10},
    {0, A_11,    B_11,    C_11},
    {0, A_12,    B_12,    C_12},
    {0, D_1,    E_1,    F_1},
    {0, D_2,    E_2,    F_2},
    {0, D_3,    E_3,    F_3},
    {0, D_4,    E_4,    F_4},
    {0, D_5,    E_5,    F_5},
    {0, G_1,    H_1,    I_1},
    {0, G_2,    H_2,    I_2},
    {0, G_3,    H_3,    I_3},
    {0, G_4,    H_4,    I_4},
    {0, J_1,    K_1,    L_1},
    {0, J_2,    K_2,    L_2},
    {0, J_3,    K_3,    L_3},
    {0, J_4,    K_4,    L_4},
    {0, J_5,    K_5,    L_5},
    // Second LED Driver
    {1, A_1,    B_1,    C_1},
    {1, A_2,    B_2,    C_2},
    {1, A_3,    B_3,    C_3},
    {1, A_4,    B_4,    C_4},
    {1, A_5,    B_5,    C_5},
    {1, A_6,    B_6,    C_6},
    {1, A_7,    B_7,    C_7},
    {1, A_8,    B_8,    C_8},
    {1, A_9,    B_9,    C_9},
    {1, A_10,    B_10,    C_10},
    {1, A_11,    B_11,    C_11},
    {1, A_12,    B_12,    C_12},
    {1, D_1,    E_1,    F_1},
    {1, D_2,    E_2,    F_2},
    {1, D_3,    E_3,    F_3},
    {1, D_4,    E_4,    F_4},
    {1, D_5,    E_5,    F_5},
    {1, D_6,    E_6,    F_6},
    {1, D_7,    E_7,    F_7},
    {1, D_8,    E_8,    F_8},
    {1, D_9,    E_9,    F_9},
    {1, D_10,    E_10,    F_10},
    {1, D_11,    E_11,    F_11},
    {1, D_12,    E_12,    F_12},
    {1, G_1,    H_1,    I_1},
    {1, G_2,    H_2,    I_2},
    {1, G_3,    H_3,    I_3},
    {1, G_4,    H_4,    I_4},
    {1, G_5,    H_5,    I_5},
    {1, J_1,    K_1,    L_1},
    {1, J_2,    K_2,    L_2},
    {1, J_3,    K_3,    L_3},
    {1, J_4,    K_4,    L_4},
    {1, J_5,    K_5,    L_5},
    {1, J_6,    K_6,    L_6},
    // First LED Driver
    {2, A_1,    B_1,    C_1},
    {2, A_2,    B_2,    C_2},
    {2, A_3,    B_3,    C_3},
    {2, A_4,    B_4,    C_4},
    {2, A_5,    B_5,    C_5},
    {2, A_6,    B_6,    C_6},
    {2, A_7,    B_7,    C_7},
    {2, A_8,    B_8,    C_8},
    {2, A_9,    B_9,    C_9},
    {2, A_10,    B_10,    C_10},
    {2, A_11,    B_11,    C_11},
    {2, A_12,    B_12,    C_12},
    {2, D_1,    E_1,    F_1},
    {2, D_2,    E_2,    F_2},
    {2, D_3,    E_3,    F_3},
    {2, D_4,    E_4,    F_4},
    {2, D_5,    E_5,    F_5},
    {2, D_6,    E_6,    F_6},
    {2, D_7,    E_7,    F_7},
    {2, D_8,    E_8,    F_8},
    {2, D_9,    E_9,    F_9},
    {2, D_10,    E_10,    F_10},
    {2, D_11,    E_11,    F_11},
    {2, D_12,    E_12,    F_12},
    {2, G_1,    H_1,    I_1},
    {2, G_2,    H_2,    I_2},
    {2, G_3,    H_3,    I_3},
    {2, G_4,    H_4,    I_4},
    {2, G_5,    H_5,    I_5},
    {2, G_6,    H_6,    I_6},
    {2, G_7,    H_7,    I_7},
    {2, G_8,    H_8,    I_8},
    {2, G_9,    H_9,    I_9},
    {2, G_10,   H_10,   I_10},
    {2, G_11,   H_11,   I_11},
    {2, G_12,   H_12,   I_12},
    {2, J_1,    K_1,    L_1},
    {2, J_2,    K_2,    L_2},
    {2, J_3,    K_3,    L_3},
    {2, J_4,    K_4,    L_4},
    {2, J_5,    K_5,    L_5},
    {2, J_6,    K_6,    L_6},
    {2, J_7,    K_7,    L_7},
    {2, J_8,    K_8,    L_8},
    {2, J_9,    K_9,    L_9},
    {2, J_10,   K_10,   L_10},
    {2, J_11,   K_11,   L_11},
    {2, J_12,   K_12,   L_12},
};

led_config_t g_led_config = { {
  // Key Matrix to LED Index
  {  56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 6},
  {  68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 45},
  {  80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 47},
  {  92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 49},
  {  21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 44},
  {  33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 20, 11},
  {  46, 48, 5, 4, 3, 50, 51, 52, 53, 54, 55, 16, 12},
  {  7, 17, 13, 8, 18, 14, 9, 19, 15, 10, 0, 1, 2},
}, {
  // LED Index to Physical Position
  { 0,  0 }, { 20,  0 }, { 40,  0 }
}, {
  // LED Index to Flag
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4
} };
#endif

void keyboard_post_init_user(){
#ifdef RGB_MATRIX_ENABLE
    rgb_matrix_enable();
    rgb_matrix_mode(RGB_MATRIX_CYCLE_ALL);
#endif
}
