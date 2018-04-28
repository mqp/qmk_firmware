/* -*- Mode:C; c-basic-offset:2; tab-width:2; indent-tabs-mode:nil; evil-indent-convert-tabs:t; -*- */

#include QMK_KEYBOARD_H
#include "action_layer.h"
#include "version.h"

#define BASE 0 /* default layer */
#define UTIL 1 /* media keys, LED controls, fn keys */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* Keymap 0: Basic layer
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * | Grave  |   1  |   2  |   3  |   4  |   5  |   6  |           |  7   |   8  |   9  |   0  |   -  |   =  | BSpace |
 * |--------+------+------+------+------+------+------|           |------+------+------+------+------+------+--------|
 * | Tab    |   Q  |   W  |   E  |   R  |   T  |   {  |           |  }   |   Y  |   U  |   I  |   O  |   P  |   \    |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * | LCtl   |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |   ;  |   '    |
 * |--------+------+------+------+------+------|   [  |           |  ]   |------+------+------+------+------+--------|
 * | LShift |   Z  |   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |   ,  |   .  |   /  | RShift |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      |      |      |Super |  Alt |                                       | Alt  |Super |      |      |      |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        | Ins  |NumClk|       | Home | End  |
 *                                 ,------+------+------|       |------+------+------.
 *                                 |      |      |CapsLk|       | PgUp |      |      |
 *                                 |Space |BSpace|------|       |------|Del   |Enter |
 *                                 |      |      | ~L1  |       | PgDn |      |      |
 *                                 `--------------------'       `--------------------'
 */

[BASE] = LAYOUT_ergodox(
  /* left hand */
  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,
  KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_LCBR,
  KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,
  KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_LBRC,
  KC_TRNS, KC_TRNS, KC_TRNS, KC_LGUI, KC_LALT,
                                               KC_INS,  KC_NLCK,
                                                        KC_CAPS,
                                      KC_SPC,  KC_BSPC, MO(UTIL),
  /* right hand */
  KC_7,    KC_8,   KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
  KC_RCBR, KC_Y,   KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
           KC_H,   KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  KC_RBRC, KC_N,   KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
                   KC_LALT, KC_LGUI, KC_TRNS, KC_TRNS, KC_TRNS,
  KC_HOME, KC_END,
  KC_PGUP,
  KC_PGDN, KC_DEL, KC_ENT
),

/* Keymap 1: F-Keys, media, lighting
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |        |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |           |  F7  |  F8  |  F9  | F10  | F11  | F12  |        |
 * |--------+------+------+------+------+------+------|           |------+------+------+------+------+------+--------|
 * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |      |      |      |      |      |------|           |------|      |      |      |      |      |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      |      |      |      |      |                                       |      |      |      |      |      |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        | +MO  |      |       | Mute |Light |
 *                                 ,------+------+------|       |------+------+------.
 *                                 |      |      |      |       |VolUp |      |      |
 *                                 | -VA  | +VA  |------|       |------| -HU  | +HU  |
 *                                 |      |      |      |       |VolDn |      |      |
 *                                 `--------------------'       `--------------------'
 */

[UTIL] = LAYOUT_ergodox(
  /* left hand */
  KC_TRNS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                               RGB_MOD, KC_TRNS,
                                                        KC_TRNS,
                                      RGB_VAD, RGB_VAI, KC_TRNS,
  /* right hand */
  KC_F7,    KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_TRNS,
  KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
  KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
  KC_MUTE, RGB_TOG,
  KC_VOLU,
  KC_VOLD, RGB_HUD, RGB_HUI
)
};

/* Runs constantly in the background, in a loop. */
void matrix_scan_user(void) {
  uint8_t layer = biton32(layer_state);
  ergodox_board_led_off();
  ergodox_right_led_1_off();
  ergodox_right_led_2_off();
  ergodox_right_led_3_off();
  switch (layer) {
    case 1:
      ergodox_right_led_1_on();
      break;
    case 2:
      ergodox_right_led_2_on();
      break;
    case 3:
      ergodox_right_led_3_on();
      break;
    default:
      /* none */
      break;
  }
};
