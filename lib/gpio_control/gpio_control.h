/*

Name : gpio_control.h
Created : 03/2021
Author : Guilhem Dasque
Purpose : Develop functions which can control GPIO
          For STM32F072RB

*/

#include "stm32f0xx.h"

void gpioA5_configuration (uint8_t InputOutput, uint8_t mode2, uint8_t speed_configuration,uint8_t configuration_up_down);
void gpioA6_configuration (uint8_t InputOutput, uint8_t mode2, uint8_t speed_configuration, uint8_t configuration_up_down);
void gpio_channel_enable(char channel_choisi);
