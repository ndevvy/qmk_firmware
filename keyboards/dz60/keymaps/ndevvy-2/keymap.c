#include QMK_KEYBOARD_H

#define ______ KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* LAYOUT_60_ansi
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │00 │01 │02 │03 │04 │05 │06 │07 │08 │09 │0a │0b │0c │0e     │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │10   │12 │13 │14 │15 │16 │17 │18 │19 │1a │1b │1c │1d │1e   │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤
 * │20    │22 │23 │24 │25 │26 │27 │28 │29 │2a │2b │2c │2d      │
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────────┤
 * │30      │32 │33 │34 │35 │36 │37 │38 │39 │3a │3b │3d        │
 * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │40  │41  │43  │46                      │4a  │4b  │4d  │4e  │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
*/

  LAYOUT_60_ansi(
      KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC,
      LT(1, KC_TAB), KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,
      KC_ESC, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, LT(1, KC_SCLN), KC_QUOT, KC_ENT,
      KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT,  KC_SLSH,  KC_RSFT,
      KC_LCTL, KC_LALT, KC_LGUI, KC_SPC,  KC_RGUI, KC_RALT, MO(1), KC_RCTL
      ),

/* FN Layer
 * -----------------------------------------------------------------------------------------.
 * | Esc | BL- | BL+ | BL  |     |     |     |     |     |     | 🔇  |  🔉  |  🔊| ⏹   |  ⏯   |
 * |-----------------------------------------------------------------------------------------+
 * |        |RBGM |     |     |     |     |     |     |     |     |     | Val+ | Val- |RBGTOG|
 * |-----------------------------------------------------------------------------------------+
 * |         | Hue+| Hue-| Sat+| Sat-|     |  <  |  V  |  ^  |  >  |     |     |             |
 * |------------------------------------------------------------------------------------------+
 * |           |     |     |     |     |     |     |     |     | ⏮   | ⏭   |     | Ctrl|     |
 * |-----------------------------------------------------------------------------------------+
 * |      |       |       |                                   |     |      |     |     |     |
 * `-----------------------------------------------------------------------------------------'
 */

  LAYOUT_60_ansi( KC_ESC, BL_TOGG, BL_STEP, BL_DEC, BL_INC, ______, ______, ______, ______, ______, KC_MUTE, KC_VOLD, KC_VOLU, KC_MEDIA_PLAY_PAUSE,
      ______, RGB_MOD, ______, ______, ______, ______, ______, ______, ______, ______, ______, RGB_VAI, RGB_VAD, RGB_TOG,
      ______, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, ______, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, ______, ______,
      ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______,
      ______, ______, ______, ______, ______, ______, ______, ______, ______ ),
};

