#pragma once

/* USB Device descriptor parameters */
// #define VENDOR_ID       0xFEED
// #define PRODUCT_ID      0x0081
// #define DEVICE_VER      0x0001
// #define MANUFACTURER    Nicholas
// #define PRODUCT         Barracuda81

/* Key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 18

/* Pin assignments */
#define MATRIX_ROW_PINS { F0, F1, F4, F5, F6 }
#define MATRIX_COL_PINS { D0, D1, D2, D3, D5, C7, C6, B6, B5, B4, D7, D6, D4, F7, B0, B1, B2, B3 }

// #define DIODE_DIRECTION COL2ROW

#define DEBOUNCE 5

#define LOCKING_SUPPORT_ENABLE
#define LOCKING_RESYNC_ENABLE

#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0