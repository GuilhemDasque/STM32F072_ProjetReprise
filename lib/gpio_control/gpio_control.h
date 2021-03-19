/*

Name : gpio_control.h
Created : 03/2021
Author : Guilhem Dasque
Purpose : Develop functions which can control GPIO
          For STM32F072RB

*/

#include "stm32f0xx.h"

void gpioA0_configuration (uint8_t InputOutput, uint8_t mode2, uint8_t speed_configuration, uint8_t configuration_up_down); 
void gpioA1_configuration (uint8_t InputOutput, uint8_t mode2, uint8_t speed_configuration, uint8_t configuration_up_down);
void gpioA2_configuration (uint8_t InputOutput, uint8_t mode2, uint8_t speed_configuration, uint8_t configuration_up_down);
void gpioA3_configuration (uint8_t InputOutput, uint8_t mode2, uint8_t speed_configuration, uint8_t configuration_up_down);
void gpioA4_configuration (uint8_t InputOutput, uint8_t mode2, uint8_t speed_configuration, uint8_t configuration_up_down);
void gpioA5_configuration (uint8_t InputOutput, uint8_t mode2, uint8_t speed_configuration, uint8_t configuration_up_down);
void gpioA6_configuration (uint8_t InputOutput, uint8_t mode2, uint8_t speed_configuration, uint8_t configuration_up_down);

/*To implement
void gpioA0_configuration (uint8_t InputOutput, uint8_t mode2, uint8_t speed_configuration, uint8_t configuration_up_down); 
void gpioA7_configuration (uint8_t InputOutput, uint8_t mode2, uint8_t speed_configuration, uint8_t configuration_up_down);
void gpioA8_configuration (uint8_t InputOutput, uint8_t mode2, uint8_t speed_configuration, uint8_t configuration_up_down);
void gpioA9_configuration (uint8_t InputOutput, uint8_t mode2, uint8_t speed_configuration, uint8_t configuration_up_down);
void gpioA10_configuration (uint8_t InputOutput, uint8_t mode2, uint8_t speed_configuration, uint8_t configuration_up_down);
void gpioA12_configuration (uint8_t InputOutput, uint8_t mode2, uint8_t speed_configuration, uint8_t configuration_up_down);
void gpioA13_configuration (uint8_t InputOutput, uint8_t mode2, uint8_t speed_configuration, uint8_t configuration_up_down);
void gpioA14_configuration (uint8_t InputOutput, uint8_t mode2, uint8_t speed_configuration, uint8_t configuration_up_down);
void gpioA15-configuration (uint8_t InputOutput, uint8_t mode2, uint8_t speed_configuration, uint8_t configuration_up_down);
void gpioA16_configuration (uint8_t InputOutput, uint8_t mode2, uint8_t speed_configuration, uint8_t configuration_up_down);
void gpioA17_configuration (uint8_t InputOutput, uint8_t mode2, uint8_t speed_configuration, uint8_t configuration_up_down);
*/
void gpio_channel_enable(char channel_choisi);
