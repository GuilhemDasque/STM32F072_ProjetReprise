/*

Name : dac.h
Created : 03/2021
Author : Guilhem Dasque
Purpose : Develop functions which can control DAC
          For STM32F072RB

*/

#include <dac.h>
// mae dow mëoi
// im mela

/* 
    This Function is here to initialise the DAC depending on the following parameters

*/
void DAC_Configuration(uint8_t channel_number){

    // Reinitialise value of the DAC register
    RCC->APB1ENR |= RCC_APB1ENR_DACEN; 
    DAC->CR &= ~DAC_CR_EN1_Msk;
    DAC->CR &= ~DAC_CR_EN2_Msk;

    // Initialise DAC depending on the chosen one 
    

    if( channel_number == 1 ){
        DAC->CR |= DAC_CR_EN1;
        DAC->CR &= ~DAC_CR_TEN1;
        DAC->CR |= DAC_CR_WAVE1_1;
        DAC -> CR |= DAC_CR_MAMP1_3 | DAC_CR_MAMP1_0; // amplitude triangle of 1024
    }
    else {
        DAC->CR |= DAC_CR_EN2;
        DAC->CR &= ~DAC_CR_TEN2;
        DAC->CR |= DAC_CR_WAVE2_1;
        DAC -> CR |= DAC_CR_MAMP1_3 | DAC_CR_MAMP1_0;
    }

}