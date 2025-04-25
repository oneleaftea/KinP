#include "quantum.h"

#define LED_LAYER GP12

void keyboard_pre_init_user(void) {
gpio_set_pin_output(LED_LAYER);   
}
layer_state_t layer_state_set_user(layer_state_t state) {
    if(IS_LAYER_ON_STATE(state, 1)) { 
        gpio_write_pin_low(LED_LAYER); 
    } 
    else { 
        gpio_write_pin_high(LED_LAYER);
    } 
return state; 
}

