#include QMK_KEYBOARD_H

#define LAYOUT( \
    /* Row 0 */ \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, K0F, K0G, K0H, \
    /* Row 1 */ \
    K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, K1E, K1F, K1G, K1H, \
    /* Row 2 */ \
    K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C,      K2D, K2E, K2F, \
    /* Row 3 */ \
    K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C,      K3D, K3E, K3F, K3G, \
    /* Row 4 */ \
    K40, K41, K42,                K43,                K44, K45, K46, K47, K48, K49, K4A, K4B \
) \
{ \
    /* Row 0 */ { K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, K0F, K0G, K0H }, \
    /* Row 1 */ { K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, K1E, K1F, K1G, K1H }, \
    /* Row 2 */ { K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, KC_NO, K2D, K2E, K2F, KC_NO }, \
    /* Row 3 */ { K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, KC_NO, K3D, K3E, K3F, K3G }, \
    /* Row 4 */ { K40, K41, K42, KC_NO, KC_NO, K43, KC_NO, KC_NO, K44, K45, K46, K47, K48, KC_NO, K49, K4A, K4B, KC_NO } \
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[0] = LAYOUT(
    /* Row 0 */
    KC_ESC, KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,    KC_0,   KC_MINS,KC_EQL, KC_BSPC,        KC_NUM, KC_PSLS,KC_PAST,KC_PMNS,

    /* Row 1 */
    KC_TAB, KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,    KC_P,   KC_LBRC,KC_RBRC,KC_BSLS,        KC_P7,  KC_P8,  KC_P9,  KC_PPLS,

    /* Row 2 */
    KC_CAPS,KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,  KC_QUOT,  KC_ENT,              KC_P4,  KC_P5,  KC_P6,

    /* Row 3 */
    KC_LSFT,KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,  KC_DOT,  KC_SLSH,  KC_RSFT,      KC_UP,        KC_P1,  KC_P2,  KC_P3,  KC_PENT,

    /* Row 4 */
    KC_LCTL,KC_LGUI,KC_LALT,                 KC_SPC,                 KC_RALT,  KC_RGUI,  KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT,    KC_P0,  KC_PDOT
)

};