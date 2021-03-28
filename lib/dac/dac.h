/*

Name : dac.h
Created : 03/2021
Author : Guilhem Dasque
Purpose : Develop functions which can control DAC
          For STM32F072RB

*/

#include <stm32f0xx.h>


void DAC_Configuration(uint8_t channel_number);
void TIMER_DAC_Configuration(void);