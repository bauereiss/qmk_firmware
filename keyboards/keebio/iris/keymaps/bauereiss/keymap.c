#include QMK_KEYBOARD_H

// UK shifted keycodes
#define UK_AT   LSFT(KC_QUOT)
#define UK_PIPE LSFT(KC_NUBS)
#define UK_TILD LSFT(KC_NUHS)
#define UK_DQUO LSFT(KC_2)

// Home block mods, base layer
#define LA_S  LALT_T(KC_S)
#define LS_D  LSFT_T(KC_D)
#define LC_F  LCTL_T(KC_F)
#define LG_V  LGUI_T(KC_V)

#define LC_J  LCTL_T(KC_J)
#define LS_K  LSFT_T(KC_K)
#define LA_L  LALT_T(KC_L)
#define LG_M  LGUI_T(KC_M)

// Home block mods, num layer
// (only on right hand side, we don't want modifiers on arrow keys)
#define LC_P4 LCTL_T(KC_P4)
#define LS_P5 LSFT_T(KC_P5)
#define LA_P6 LALT_T(KC_P6)
#define LG_P1 LGUI_T(KC_P1)

// Home block mods, media/mouse layer
// (only on right hand side, so that we can have modifiers for mouse actions)
#define LC_MPRV LCTL_T(KC_MPRV)
#define LS_MPLY LSFT_T(KC_MPLY)
#define LA_MNXT LALT_T(KC_MNXT)
#define LG_VOLD LGUI_T(KC_VOLD)

// Mod-tap thumb keys
#define L3_TAB  LT(3, KC_TAB)
#define L2_ESC  LT(2, KC_ESC)
#define L1_ENT  LT(1, KC_ENT)

#define L1_SPC  LT(1, KC_SPC)
#define L2_BSPC LT(2, KC_BSPC)
#define L3_DEL  LT(3, KC_DEL)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
      KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
      KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
      KC_ESC,  KC_A,    LA_S,    LS_D,    LC_F,    KC_G,                               KC_H,    LC_J,    LS_K,    LA_L,    KC_SCLN, KC_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
      KC_LSFT, KC_Z,    KC_X,    KC_C,    LG_V,    KC_B,    TG(1),            KC_RALT, KC_N,    LG_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                     L3_TAB,  L1_ENT,  L2_ESC,                    L2_BSPC, L1_SPC,  L3_DEL
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),
  [1] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            KC_NLCK, KC_TAB,  KC_PSLS, KC_PAST, KC_PMNS, KC_TRNS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
      KC_TRNS, KC_BSPC, KC_PGUP, KC_UP,   KC_PGDN, KC_DEL,                             KC_NUHS, KC_P7,   KC_P8,   KC_P9,   KC_PPLS, KC_TRNS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
      KC_TRNS, KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, KC_END,                             KC_COMM, LC_P4,   LS_P5,   LA_P6,   KC_PENT, KC_TRNS,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
      KC_TRNS, KC_ESC,  KC_TAB,  KC_INS,  KC_ENT,  KC_UNDO, KC_TRNS,          KC_TRNS, KC_PDOT, LG_P1,   KC_P2,   KC_P3,   KC_PEQL, KC_TRNS,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                     KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS, KC_TRNS, KC_P0
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),
  [2] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
      KC_F12,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                              KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
      KC_TRNS, UK_AT,   KC_UNDS, KC_LBRC, KC_RBRC, KC_CIRC,                            KC_EXLM, KC_LT,   KC_GT,   KC_EQL,  KC_AMPR, KC_TRNS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
      KC_TRNS, KC_NUBS, KC_SLSH, KC_LCBR, KC_RCBR, KC_ASTR,                            KC_QUES, KC_LPRN, KC_RPRN, KC_MINS, KC_COLN, UK_AT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
      KC_TRNS, KC_NUHS, KC_DLR,  UK_PIPE, UK_TILD, KC_GRV,  KC_TRNS,          KC_TRNS, KC_PLUS, KC_PERC, UK_DQUO, KC_QUOT, KC_SCLN, KC_TRNS,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                     KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS, KC_TRNS, KC_TRNS
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),
  [3] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
      RESET,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS, KC_PSCR, KC_SLCK, KC_PAUS, RGB_MOD, RGB_TOG,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
      KC_TRNS, KC_TRNS, KC_WH_U, KC_MS_U, KC_WH_D, KC_TRNS,                            KC_TRNS, KC_WBAK, KC_MSTP, KC_WFWD, RGB_HUD, RGB_HUI,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
      KC_CAPS, KC_WH_L, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_R,                            KC_TRNS, LC_MPRV, LS_MPLY, LA_MNXT, RGB_SAD, RGB_SAI,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_BTN3,          KC_TRNS, KC_TRNS, LG_VOLD, KC_VOLU, KC_MUTE, RGB_VAD, RGB_VAI,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                     KC_TRNS, KC_BTN1, KC_BTN2,                   KC_TRNS, KC_TRNS, KC_TRNS
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  )
};

