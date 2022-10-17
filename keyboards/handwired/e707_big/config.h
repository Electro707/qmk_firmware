// Copyright 2022 Electro707 (@Electro707)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
// #define NO_PRINT

/* disable action features */
// #define NO_ACTION_LAYER
// #define NO_ACTION_TAPPING
// #define NO_ACTION_ONESHOT

#define DRIVER_ADDR_1 0b1010101
#define DRIVER_ADDR_2 0b1011111
#define DRIVER_ADDR_3 0b1010000
#define DRIVER_COUNT 3
#define DRIVER_1_LED_TOTAL 21
#define DRIVER_2_LED_TOTAL 35
#define DRIVER_3_LED_TOTAL 48
#define DRIVER_LED_TOTAL (DRIVER_1_LED_TOTAL + DRIVER_2_LED_TOTAL + DRIVER_3_LED_TOTAL)
#define RGB_MATRIX_LED_COUNT DRIVER_LED_TOTAL
#define ISSI_GLOBALCURRENT 0xAF

#define I2C_DRIVER I2CD1
// #define I2C1_SCL_PIN B6
// #define I2C1_SDA_PIN B7
#define I2C1_CLOCK_SPEED 400000
#define I2C1_DUTY_CYCLE FAST_DUTY_CYCLE_16_9

#define ENABLE_RGB_MATRIX_CYCLE_ALL

#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x0B91
#define DEVICE_VER      0x0001
#define MANUFACTURER "Electro707"
#define PRODUCT "E707Big"
#define USB_MAX_POWER_CONSUMPTION 100

#define DIODE_DIRECTION COL2ROW

#define MATRIX_ROWS 8
#define MATRIX_COLS 13

#define MATRIX_ROW_PINS { A10, A9, A8, B15, B14, B10, A13, H1}
#define MATRIX_COL_PINS { A0, A1, A2, A3, A4, A5, A6, A7, B0, B1, B2, B12, B13}

#define EARLY_INIT_PERFORM_BOOTLOADER_JUMP TRUE
