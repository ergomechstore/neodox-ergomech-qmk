/*
Copyright 2018 Mattia Dal Ben <matthewdibi@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once


/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 10
#define MATRIX_COLS 7

// wiring of each half
#define MATRIX_ROW_PINS { GP5, GP6, GP14, GP26, GP28 }
#define MATRIX_ROW_PINS_RIGHT {GP14, GP12, GP6, GP4, GP2}
#define MATRIX_COL_PINS { GP1, GP2, GP3, GP4, GP12, GP27,GP29 }
#define MATRIX_COL_PINS_RIGHT {GP29, GP28, GP27, GP26, GP5, GP3, GP1}
// #define MATRIX_COL_PINS { B6, B2, B3, B1, F7, F6, F5} //uncomment this line and comment line above if you need to reverse left-to-right key order
//#define MATRIX_COL_PINS {GP28, GP27, GP26, GP24, GP23, GP22, GP16, GP13, GP7, GP6, GP5, GP4, GP3, GP2}
/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* number of backlight levels */
// #define BACKLIGHT_LEVELS 3

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5
#define WS2812_DI_PIN GP15
#define RGBLED_NUM 80
#define RGBLED_SPLIT {40, 40}
#define RGBLIGHT_LED_COUNT RGBLED_NUM
/* serial.c configuration for split keyboard */
//#define WS2812_PIO_USE_PIO1 // Force the usage of PIO1 peripheral, by default the WS2812 implementation uses the PIO0 peripheral
/* #define SERIAL_USART_FULL_DUPLEX   // Enable full duplex operation mode. */
#define SERIAL_USART_TX_PIN GP8     // USART TX pin
/* #define SERIAL_USART_RX_PIN GP9     // USART RX pin */
#define SERIAL_PIO_USE_PIO1
#define PICO_XOSC_STARTUP_DELAY_MULTIPLIER 64

//
#define I2C_DRIVER I2CD1
#define I2C1_SDA_PIN GP11
#define I2C1_SCL_PIN GP10
#define ENCODERS_PAD_A { GP7 }
#define ENCODERS_PAD_B { GP13 }
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET // Activates the double-tap behavior
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200U // Timeout window in ms in which the double tap can occur.
