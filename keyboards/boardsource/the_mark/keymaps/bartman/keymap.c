#include QMK_KEYBOARD_H

/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0]  =  LAYOUT_all(
    //┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐ ┌─────────┐
        KC_ESC  ,   KC_1  ,   KC_2  ,   KC_3  ,   KC_4  ,   KC_5  ,   KC_6  ,   KC_7  ,   KC_8  ,   KC_9  ,   KC_0  , KC_MINS ,  KC_EQL , KC_BSLS , KC_GRV  ,   KC_VOLU ,
    //├─────────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴─────────┤ ┌─────────┐
        KC_TAB       ,   KC_Q  ,   KC_W  ,   KC_E  ,   KC_R  ,   KC_T  ,   KC_Y  ,   KC_U  ,   KC_I  ,   KC_O  ,   KC_P  , KC_LBRC , KC_RBRC ,  KC_BSPC     ,   KC_VOLD ,
    //├──────────────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──────────────┤ ┌─────────┐
        KC_LCTL         ,   KC_A  ,   KC_S  ,   KC_D  ,   KC_F  ,   KC_G  ,   KC_H  ,   KC_J  ,   KC_K  ,   KC_L  , KC_SCLN , KC_QUOT ,         KC_ENT      ,   KC_MUTE ,
    //├─────────────────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴─────────┐      ┌─────────┐
        KC_LSFT ,  KC_LSFT   ,   KC_Z  ,   KC_X  ,   KC_C  ,   KC_V  ,   KC_B  ,   KC_N  ,   KC_M  , KC_COMM , KC_DOT  , KC_SLSH ,   KC_RSFT    ,         KC_UP  ,
    //├────────────┬─────────┴──┬──────┴─────┬───┴─────────┴─────┬───┴─────────┬─────────┴─────────┴────┬────┴────┬────┴────┬────┴────┐    ┌─────────┬─┴───────┬─┴───────┐
          MO(1)    ,  KC_LGUI   ,  KC_LALT   ,       KC_SPC      ,    KC_SPC   ,        KC_SPC          , KC_RALT , KC_RGUI , KC_APP  ,      KC_LEFT , KC_DOWN , KC_RGHT
    //└────────────┴────────────┴────────────┴───────────────────┴─────────────┴────────────────────────┴─────────┴─────────┴─────────┘    └─────────┴─────────┴─────────┘
    ),
    [1]  =  LAYOUT_all(
    //┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐ ┌─────────┐
        KC_GRV  ,  KC_F1  ,  KC_F2  ,  KC_F3  ,  KC_F4  ,  KC_F5  ,  KC_F6  ,  KC_F7  ,  KC_F8  ,  KC_F9  ,  KC_F10 ,  KC_F11 ,  KC_F12 , KC_INS  , KC_PSCR ,   KC_BRIU ,
    //├─────────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴─────────┤ ┌─────────┐
        KC_TRNS      , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_MPLY , KC_MRWD , KC_MFFD , KC_DEL       ,   KC_BRID ,
    //├──────────────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──────────────┤ ┌─────────┐
        KC_TRNS         , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_LEFT , KC_DOWN , KC_UP ,   KC_RGHT , KC_TRNS , KC_TRNS ,       KC_TRNS       ,   RGB_TOG ,
    //├─────────────────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴─────────┐      ┌─────────┐
        KC_TRNS  ,  KC_TRNS  , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS ,   KC_TRNS    ,        KC_PGUP ,
    //├────────────┬─────────┴──┬──────┴─────┬───┴─────────┴─────┬───┴─────────┬─────────┴─────────┴────┬────┴────┬────┴────┬────┴────┐    ┌─────────┬─┴───────┬─┴───────┐
        KC_TRNS    ,  MO(2)     ,  KC_TRNS   ,       KC_TRNS     ,   KC_TRNS   ,       KC_TRNS          , KC_TRNS , KC_TRNS , KC_TRNS ,      KC_HOME , KC_PGDN , KC_END
    //└────────────┴────────────┴────────────┴───────────────────┴─────────────┴────────────────────────┴─────────┴─────────┴─────────┘    └─────────┴─────────┴─────────┘
    ),
    [2]  =  LAYOUT_all(
    //┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐ ┌─────────┐
        KC_NO   , RGB_M_P , RGB_M_B , RGB_M_R , RGB_M_SW, RGB_M_SN, RGB_M_K , RGB_M_X , RGB_M_G , RGB_M_T ,  KC_NO  , RGB_SPD , RGB_SPI ,  KC_NO  ,  KC_NO  ,   RGB_VAI ,
    //├─────────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴─────────┤ ┌─────────┐
        KC_NO        ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  , RGB_RMOD, RGB_MOD , KC_NO        ,   RGB_VAD ,
    //├──────────────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──────────────┤ ┌─────────┐
        KC_NO           ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,        KC_NO        ,   RGB_TOG ,
    //├─────────────────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴─────────┐      ┌─────────┐
        KC_NO    ,   KC_NO   ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,    KC_NO     ,        RGB_SAI ,
    //├────────────┬─────────┴──┬──────┴─────┬───┴─────────┴─────┬───┴─────────┬─────────┴─────────┴────┬────┴────┬────┴────┬────┴────┐    ┌─────────┬─┴───────┬─┴───────┐
        KC_NO      ,  KC_TRNS   ,  MO(3)     ,      KC_NO        ,    KC_NO    ,         KC_NO          ,  KC_NO  ,  KC_NO  ,  KC_NO  ,      RGB_HUI , RGB_SAD , RGB_HUD
    //└────────────┴────────────┴────────────┴───────────────────┴─────────────┴────────────────────────┴─────────┴─────────┴─────────┘    └─────────┴─────────┴─────────┘
    ),
    [3]  =  LAYOUT_all(
    //┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐ ┌─────────┐
        QK_BOOT , DB_TOGG ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,    KC_NO  ,
    //├─────────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴─────────┤ ┌─────────┐
        KC_NO        ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  , KC_NO   , RGB_MOD ,    EE_CLR    ,    KC_NO  ,
    //├──────────────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──────────────┤ ┌─────────┐
        KC_NO           ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,        KC_NO        ,   RGB_TOG ,
    //├─────────────────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴─────────┐      ┌─────────┐
        KC_NO    ,   KC_NO   ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,    KC_NO     ,         KC_NO  ,
    //├────────────┬─────────┴──┬──────┴─────┬───┴─────────┴─────┬───┴─────────┬─────────┴─────────┴────┬────┴────┬────┴────┬────┴────┐    ┌─────────┬─┴───────┬─┴───────┐
        KC_NO      ,    KC_NO   ,  KC_TRNS   ,      KC_NO        ,    KC_NO    ,         KC_NO          ,  KC_NO  ,  KC_NO  ,  KC_NO  ,       KC_NO  ,  KC_NO  ,  KC_NO
    //└────────────┴────────────┴────────────┴───────────────────┴─────────────┴────────────────────────┴─────────┴─────────┴─────────┘    └─────────┴─────────┴─────────┘
    )
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
