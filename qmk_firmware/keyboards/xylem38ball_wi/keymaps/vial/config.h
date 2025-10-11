#pragma once

#define VIAL_KEYBOARD_UID {0x9a, 0x90, 0x91, 0xb9, 0x9b, 0x35, 0x5f, 0x21}
#define VIAL_TAP_DANCE_ENTRIES 8
#define VIAL_COMBO_ENTRIES 8
#define PICO_FLASH_SIZE_BYTES (1 * 1024 * 1024)
#define POINTING_DEVICE_INVERT_X
#define POINTING_DEVICE_INVERT_Y

// 既存の #define の下に追加
#define PMW3360_CPI 1200        // トラックボールの解像度
#define SCROLL_SCALE_NUM 3
#define SCROLL_SCALE_DEN 8


// レイヤー数を6つとする。
#define DYNAMIC_KEYMAP_LAYER_COUNT 6
