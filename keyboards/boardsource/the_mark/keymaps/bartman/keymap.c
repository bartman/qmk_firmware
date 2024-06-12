#include QMK_KEYBOARD_H

/*
 * This layout uses split backspace and split spacebar.
 *
 * There are 3 layers, entered by pressing:
 *   - Fn                - enters layer 1 (function keys, HJKL arrows)
 *   - Fn + LGui         - enters layer 2 (RGB controls)
 *   - Fn + LGui + LAlt  - enters layer 3 (bootloader, debug, flash erase)
 *
 * Bootloader mode is entered with Fn+LGui+LAlt+Esc.
 */

enum {
    _BASE,
    _FN,
    _RGB,
    _DBG

};

// tap for mute, hold for layer _FN
#define FN_MUTE LT(_FN, KC_MUTE)

// tap for space, hold for layer _FN
#define FN_SPC LT(_FN, KC_SPC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE]  =  LAYOUT_all(
    //┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐ ┌─────────┐
        KC_ESC  ,   KC_1  ,   KC_2  ,   KC_3  ,   KC_4  ,   KC_5  ,   KC_6  ,   KC_7  ,   KC_8  ,   KC_9  ,   KC_0  , KC_MINS ,  KC_EQL , KC_BSLS , KC_GRV  ,   KC_VOLU ,
    //├─────────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴─────────┤ ┌─────────┐
        KC_TAB       ,   KC_Q  ,   KC_W  ,   KC_E  ,   KC_R  ,   KC_T  ,   KC_Y  ,   KC_U  ,   KC_I  ,   KC_O  ,   KC_P  , KC_LBRC , KC_RBRC ,  KC_BSPC     ,   KC_VOLD ,
    //├──────────────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──────────────┤ ┌─────────┐
        KC_LCTL         ,   KC_A  ,   KC_S  ,   KC_D  ,   KC_F  ,   KC_G  ,   KC_H  ,   KC_J  ,   KC_K  ,   KC_L  , KC_SCLN , KC_QUOT ,         KC_ENT      ,   FN_MUTE ,
    //├─────────────────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴─────────┐      ┌─────────┐
        KC_LSFT ,  KC_LSFT   ,   KC_Z  ,   KC_X  ,   KC_C  ,   KC_V  ,   KC_B  ,   KC_N  ,   KC_M  , KC_COMM , KC_DOT  , KC_SLSH ,   KC_RSFT    ,         KC_UP  ,
    //├────────────┬─────────┴──┬──────┴─────┬───┴─────────┴─────┬───┴─────────┬─────────┴─────────┴────┬────┴────┬────┴────┬────┴────┐    ┌─────────┬─┴───────┬─┴───────┐
          MO(_FN)  ,  KC_LGUI   ,  KC_LALT   ,       KC_SPC      ,    FN_SPC   ,        KC_SPC          , KC_RALT , KC_RGUI , KC_APP  ,      KC_LEFT , KC_DOWN , KC_RGHT
    //└────────────┴────────────┴────────────┴───────────────────┴─────────────┴────────────────────────┴─────────┴─────────┴─────────┘    └─────────┴─────────┴─────────┘
    ),
    [_FN]  =  LAYOUT_all(
    //┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐ ┌─────────┐
        KC_GRV  ,  KC_F1  ,  KC_F2  ,  KC_F3  ,  KC_F4  ,  KC_F5  ,  KC_F6  ,  KC_F7  ,  KC_F8  ,  KC_F9  ,  KC_F10 ,  KC_F11 ,  KC_F12 , KC_INS  , KC_PSCR ,   KC_BRIU ,
    //├─────────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴─────────┤ ┌─────────┐
        _______      , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , KC_MPLY , KC_MRWD , KC_MFFD , KC_DEL       ,   KC_BRID ,
    //├──────────────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──────────────┤ ┌─────────┐
        _______         , _______ , _______ , _______ , _______ , _______ , KC_LEFT , KC_DOWN , KC_UP ,   KC_RGHT , _______ , _______ ,       _______       ,   RGB_TOG ,
    //├─────────────────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴─────────┐      ┌─────────┐
        _______  ,  _______  , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ ,   _______    ,        KC_PGUP ,
    //├────────────┬─────────┴──┬──────┴─────┬───┴─────────┴─────┬───┴─────────┬─────────┴─────────┴────┬────┴────┬────┴────┬────┴────┐    ┌─────────┬─┴───────┬─┴───────┐
        _______    ,  MO(_RGB)  ,  _______   ,       _______     ,   _______   ,       _______          , _______ , _______ , _______ ,      KC_HOME , KC_PGDN , KC_END
    //└────────────┴────────────┴────────────┴───────────────────┴─────────────┴────────────────────────┴─────────┴─────────┴─────────┘    └─────────┴─────────┴─────────┘
    ),
    [_RGB]  =  LAYOUT_all(
    //┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐ ┌─────────┐
        XXXXXXX , RGB_M_P , RGB_M_B , RGB_M_R , RGB_M_SW, RGB_M_SN, RGB_M_K , RGB_M_X , RGB_M_G , RGB_M_T , XXXXXXX , RGB_SPD , RGB_SPI , XXXXXXX , XXXXXXX ,   RGB_VAI ,
    //├─────────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴─────────┤ ┌─────────┐
        XXXXXXX      , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , RGB_RMOD, RGB_MOD , XXXXXXX      ,   RGB_VAD ,
    //├──────────────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──────────────┤ ┌─────────┐
        XXXXXXX         , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,        XXXXXXX      ,   RGB_TOG ,
    //├─────────────────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴─────────┐      ┌─────────┐
        XXXXXXX  ,   XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,    XXXXXXX   ,        RGB_SAI ,
    //├────────────┬─────────┴──┬──────┴─────┬───┴─────────┴─────┬───┴─────────┬─────────┴─────────┴────┬────┴────┬────┴────┬────┴────┐    ┌─────────┬─┴───────┬─┴───────┐
        XXXXXXX    ,  _______   ,  MO(_DBG)  ,      XXXXXXX      ,    XXXXXXX  ,         XXXXXXX        , XXXXXXX , XXXXXXX , XXXXXXX ,      RGB_HUI , RGB_SAD , RGB_HUD
    //└────────────┴────────────┴────────────┴───────────────────┴─────────────┴────────────────────────┴─────────┴─────────┴─────────┘    └─────────┴─────────┴─────────┘
    ),
    [_DBG]  =  LAYOUT_all(
    //┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐ ┌─────────┐
        QK_BOOT , DB_TOGG , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,   XXXXXXX ,
    //├─────────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴─────────┤ ┌─────────┐
        XXXXXXX      , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , RGB_MOD ,    EE_CLR    ,   XXXXXXX ,
    //├──────────────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──────────────┤ ┌─────────┐
        XXXXXXX         , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,        XXXXXXX      ,   RGB_TOG ,
    //├─────────────────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴─────────┐      ┌─────────┐
        XXXXXXX  ,   XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,    XXXXXXX   ,        XXXXXXX ,
    //├────────────┬─────────┴──┬──────┴─────┬───┴─────────┴─────┬───┴─────────┬─────────┴─────────┴────┬────┴────┬────┴────┬────┴────┐    ┌─────────┬─┴───────┬─┴───────┐
        XXXXXXX    ,    XXXXXXX ,  _______   ,      XXXXXXX      ,    XXXXXXX  ,         XXXXXXX        , XXXXXXX , XXXXXXX , XXXXXXX ,      XXXXXXX , XXXXXXX ,  KC_NO
    //└────────────┴────────────┴────────────┴───────────────────┴─────────────┴────────────────────────┴─────────┴─────────┴─────────┘    └─────────┴─────────┴─────────┘
    )
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
