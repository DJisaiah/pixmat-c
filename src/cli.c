#include <stdio.h>
#include "logo_asset.h"

typedef enum {
    STATE_EXIT,
    STATE_NO_IMAGE_LOADED,
    STATE_IMAGE_LOADED,
    STATE_OPERATION1
} MenuState;

void greeter() {
    fwrite(assets_logo_txt, 1, assets_logo_txt_len, stdout);
}

void menu_loop(MenuState ms) {
    switch (ms) {
        case STATE_EXIT:
            break;

        case STATE_NO_IMAGE_LOADED:
            break;

        case STATE_IMAGE_LOADED:
            break;
        
        case STATE_OPERATION1:
            break;
    }
}
