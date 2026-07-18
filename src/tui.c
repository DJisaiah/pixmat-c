typedef enum {
    STATE_EXIT,
    STATE_NO_IMAGE_LOADED,
    STATE_IMAGE_LOADED,
    STATE_OPERATION1
} MenuState;

void greeter() {
// do this next. make header and test in main
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
