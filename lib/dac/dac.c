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
    DAC1 : PA4
    DAC2 : PA5

*/

void DAC_Configuration(uint8_t channel_number){
	
    // Enable GPIOA clock
	RCC->AHBENR |= RCC_AHBENR_GPIOAEN;

    if( channel_number == 1 ){
        GPIOA->MODER &= ~GPIO_MODER_MODER4_Msk;
	    GPIOA->MODER |= (0x03 <<GPIO_MODER_MODER4_Pos);
    }
    else {
	    GPIOA->MODER &= ~GPIO_MODER_MODER5_Msk;
	    GPIOA->MODER |= (0x03 <<GPIO_MODER_MODER5_Pos);
    }

    // Enable DAC Clock

    RCC->APB1ENR |= RCC_APB1ENR_DACEN; 

    // Reinitialise value of the DAC register

    DAC->CR &= 0x00;

    // Initialise DAC depending on the chosen one 
    

    if( channel_number == 1 ){
        DAC->CR &= ~DAC_CR_TEN1;
        DAC->CR |= DAC_CR_WAVE1_1;
        DAC -> CR |= DAC_CR_MAMP1_3 | DAC_CR_MAMP1_0; // amplitude triangle of 1024
        DAC->CR |= DAC_CR_EN1;

    }
    else {
        DAC->CR &= ~DAC_CR_TEN2;
        DAC->CR |= DAC_CR_WAVE2_1;
        DAC -> CR |= DAC_CR_MAMP1_3 | DAC_CR_MAMP1_0;
        DAC->CR |= DAC_CR_EN2;

    }

}

void TIMER_DAC_Configuration(void){

    // Enable TIM6 Clock 
    RCC->APB1ENR |= RCC_APB1ENR_TIM6EN;

    // Reset Timer Registers

    TIM6->CR1 = 0x00;
    TIM6->CR2 = 0x00;

    // Set TIM6 prescaler
	// Fck = 48MHz -> /48000 = 1KHz counting frequency

	TIM6->PSC = (uint16_t) 48000 -1;

	// Set TIM6 auto-reload register for 1s
	TIM6->ARR = (uint16_t) 1000 -1;

    // Enable auto reload  preload

    TIM6->CR1 |= TIM_CR1_ARPE;

    // Counter Enable 

    TIM6->CR1 |= TIM_CR1_CEN;
}