/* 
 * File:   Application.c
 * Author: Kareem Taha Abdelfatah Mohammed
 * https://www.linkedin.com/in/kareem-taha-ba451621a/
 * Created on September 13, 2022, 9:10 PM
 */

#include "Application.h"

STD_ReturnType ret = E_OK;

keypad_t kaypad_1 = {
    .keypad_row_pins[0].pin = GPIO_PIN0,
    .keypad_row_pins[1].pin = GPIO_PIN1,
    .keypad_row_pins[2].pin = GPIO_PIN2,
    .keypad_row_pins[3].pin = GPIO_PIN3,
    .keypad_row_pins[0].port = PORTC_INDEX,
    .keypad_row_pins[1].port = PORTC_INDEX,
    .keypad_row_pins[2].port = PORTC_INDEX,
    .keypad_row_pins[3].port = PORTC_INDEX,
    .keypad_row_pins[0].logic = GPIO_LOW,
    .keypad_row_pins[1].logic = GPIO_LOW,
    .keypad_row_pins[2].logic = GPIO_LOW,
    .keypad_row_pins[3].logic = GPIO_LOW,
    .keypad_row_pins[0].direction = GPIO_OUTPUT_DIRECTION,
    .keypad_row_pins[1].direction = GPIO_OUTPUT_DIRECTION,
    .keypad_row_pins[2].direction = GPIO_OUTPUT_DIRECTION,
    .keypad_row_pins[3].direction = GPIO_OUTPUT_DIRECTION,
    .keypad_colomns_pins[0].pin = GPIO_PIN4,
    .keypad_colomns_pins[1].pin = GPIO_PIN5,
    .keypad_colomns_pins[2].pin = GPIO_PIN6,
    .keypad_colomns_pins[3].pin = GPIO_PIN7,
    .keypad_colomns_pins[0].port = PORTC_INDEX,
    .keypad_colomns_pins[1].port = PORTC_INDEX,
    .keypad_colomns_pins[2].port = PORTC_INDEX,
    .keypad_colomns_pins[3].port = PORTC_INDEX,
    .keypad_colomns_pins[0].logic = GPIO_LOW,
    .keypad_colomns_pins[1].logic = GPIO_LOW,
    .keypad_colomns_pins[2].logic = GPIO_LOW,
    .keypad_colomns_pins[3].logic = GPIO_LOW,
    .keypad_colomns_pins[0].direction = GPIO_INPUT_DIRECTION,
    .keypad_colomns_pins[1].direction = GPIO_INPUT_DIRECTION,
    .keypad_colomns_pins[2].direction = GPIO_INPUT_DIRECTION,
    .keypad_colomns_pins[3].direction = GPIO_INPUT_DIRECTION,
};

uint8 val = 0; 
int main() { 
    Application_initialize();
    while(1){
       ret =  keypad_get_value(&kaypad_1, &val);
    }
    return (EXIT_SUCCESS);
}

/* initialize any pin with direction & logic */
void Application_initialize(void){
    ret = keypad_initialize(&kaypad_1);
}