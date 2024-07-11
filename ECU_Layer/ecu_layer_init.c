/* 
 * File:   ecu_layer_init.c
 * Author: Ahmed Fathy
 */

#include "ecu_layer_init.h"
void Ecu_layer_intialize(void){
    
    
           
    led_t led_red = {.port_name = PORTC_INDEX, .pin = GPIO_PIN4, .led_status = GPIO_LOW};
    led_t led_green = {.port_name = PORTC_INDEX, .pin = GPIO_PIN5, .led_status = GPIO_LOW};
    segment_t segmet = {.segment_pins[0].port = PORTC_INDEX ,.segment_pins[0].pin = GPIO_PIN0,
                        .segment_pins[0].direction = GPIO_DIRECTION_OUTPUT ,.segment_pins[0].logic = GPIO_LOW,
                        .segment_pins[1].port = PORTC_INDEX ,.segment_pins[1].pin = GPIO_PIN1,
                        .segment_pins[1].direction = GPIO_DIRECTION_OUTPUT ,.segment_pins[1].logic = GPIO_LOW,
                        .segment_pins[2].port = PORTC_INDEX ,.segment_pins[2].pin = GPIO_PIN2,
                        .segment_pins[2].direction = GPIO_DIRECTION_OUTPUT ,.segment_pins[2].logic = GPIO_LOW,
                        .segment_pins[3].port = PORTC_INDEX ,.segment_pins[3].pin = GPIO_PIN3,
                        .segment_pins[3].direction = GPIO_DIRECTION_OUTPUT ,.segment_pins[3].logic = GPIO_LOW,
                        .segment_type = SEGMENT_COMMON_CATHODE,
    
 };
  button_t button = { .button_pin.port =PORTA_INDEX, .button_pin.pin = GPIO_PIN0, 
                      .button_pin.direction =GPIO_DIRECTION_INPUT,.button_pin.logic = GPIO_LOW,
                       .button_connection = BUTTON_ACTIVE_HIGH ,.button_state = BUTTON_RELEASED,
                       };  
  dc_motor_t Motor = {.dc_motor_pin[0].port = PORTD_INDEX , .dc_motor_pin[0].pin = GPIO_PIN0 ,
                      .dc_motor_pin[0].direction = GPIO_DIRECTION_OUTPUT ,.dc_motor_pin[0].logic = GPIO_LOW,
                      .dc_motor_pin[1].port = PORTD_INDEX , .dc_motor_pin[1].pin = GPIO_PIN1 ,
                      .dc_motor_pin[1].direction = GPIO_DIRECTION_OUTPUT ,.dc_motor_pin[1].logic = GPIO_LOW,};  
}