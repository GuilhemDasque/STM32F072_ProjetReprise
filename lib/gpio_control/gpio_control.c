/*

Name : gpio_control.c
Created : 03/2021
Author : Guilhem Dasque
Purpose : Develop functions which can control GPIO
          For STM32F072RB

*/

#include "gpio_control.h"

void gpio_channel_enable(char channel_choisi)
{
    if(channel_choisi == 'A'){
        RCC->AHBENR |= RCC_AHBENR_GPIOAEN;
    }
    if(channel_choisi == 'B'){
        RCC->AHBENR |= RCC_AHBENR_GPIOBEN;
    }
    if(channel_choisi == 'C'){
        RCC->AHBENR |= RCC_AHBENR_GPIOCEN;
    }
    if(channel_choisi == 'D'){
        RCC->AHBENR |= RCC_AHBENR_GPIODEN;
    }
    if(channel_choisi == 'E'){
        RCC->AHBENR |= RCC_AHBENR_GPIOEEN;
    }
    if(channel_choisi == 'F'){
        RCC->AHBENR |= RCC_AHBENR_GPIOFEN;
    }
}

void gpioA5_configuration (uint8_t InputOutput, uint8_t mode2, uint8_t speed_configuration, uint8_t configuration_up_down)
{
    // Enable GPIOA clock
	RCC->AHBENR |= RCC_AHBENR_GPIOAEN;

	/* 
        Configure the mode of the selected GPIO 
        InputOutput variable need to be set to those values depending on the application :

        0 = Input 
        1 = Output
        2 = Alternate fonction  
        3 = Analog mode
    */

	GPIOA->MODER &= ~GPIO_MODER_MODER5_Msk;

    if(InputOutput == 0)
	    GPIOA->MODER |= (0x00 <<GPIO_MODER_MODER5_Pos);
    if(InputOutput == 1)
        GPIOA->MODER |= (0x01 <<GPIO_MODER_MODER5_Pos);
    if(InputOutput == 2)
        GPIOA->MODER |= (0x10 <<GPIO_MODER_MODER5_Pos);
    if(InputOutput == 3)
        GPIOA->MODER |= (0x11 <<GPIO_MODER_MODER5_Pos);

	/* 
    Set the selected GPIO  to push-pull or open drain 
    mode2 varaible permit to select the chosen mode

    1 = open drain
    other value = push-pull

    */
   GPIOA->OTYPER &= ~GPIO_OTYPER_OT_5;

   if(mode2 == 1)
    GPIOA->OTYPER |= (0x01 << GPIO_OTYPER_OT_5);
	    

	/*

    Set the speed of the selected GPIO  

    1 = Medium Speed
    2 = High Speed

    */

	GPIOA->OSPEEDR &= ~GPIO_OSPEEDR_OSPEEDR5_Msk;
    if(speed_configuration == 1 )
	    GPIOA->OSPEEDR |= (0x01 <<GPIO_OSPEEDR_OSPEEDR5_Pos);
    if(speed_configuration == 2 )
	    GPIOA->OSPEEDR |= (0x11 <<GPIO_OSPEEDR_OSPEEDR5_Pos);

	/* 

    Configure the push pull or pull down option

    1 = Pull-up
    2 = Pull-down
    other value = no pull up or pull down

    */

	GPIOA->PUPDR &= ~GPIO_PUPDR_PUPDR5_Msk;
    if(configuration_up_down == 1 )
	    GPIOA->PUPDR |= (0x01 <<GPIO_PUPDR_PUPDR5_Pos);
    if(configuration_up_down == 2 )
	    GPIOA->PUPDR |= (0x10 <<GPIO_PUPDR_PUPDR5_Pos);

	// Permit to reinitialise the value of the selected GPIO to 0x00

	GPIOA->BSRR = GPIO_BSRR_BR_5;
}

void gpioA6_configuration (uint8_t InputOutput, uint8_t mode2, uint8_t speed_configuration, uint8_t configuration_up_down)
{
    // Enable GPIOA clock
	RCC->AHBENR |= RCC_AHBENR_GPIOAEN;

	/* 
        Configure the mode of the selected GPIO 
        InputOutput variable need to be set to those values depending on the application :

        0 = Input 
        1 = Output
        2 = Alternate fonction  
        3 = Analog mode
    */

	GPIOA->MODER &= ~GPIO_MODER_MODER6_Msk;

    if(InputOutput == 0)
	    GPIOA->MODER |= (0x00 <<GPIO_MODER_MODER6_Pos);
    if(InputOutput == 1)
        GPIOA->MODER |= (0x01 <<GPIO_MODER_MODER6_Pos);
    if(InputOutput == 2)
        GPIOA->MODER |= (0x10 <<GPIO_MODER_MODER6_Pos);
    if(InputOutput == 3)
        GPIOA->MODER |= (0x11 <<GPIO_MODER_MODER6_Pos);

	/* 
    Set the selected GPIO  to push-pull or open drain 
    mode2 varaible permit to select the chosen mode

    1 = open drain
    other value = push-pull

    */
   GPIOA->OTYPER &= ~GPIO_OTYPER_OT_6;

   if(mode2 == 1)
    GPIOA->OTYPER |= (0x01 << GPIO_OTYPER_OT_6);
	    

	/*

    Set the speed of the selected GPIO  

    1 = Medium Speed
    2 = High Speed

    */

	GPIOA->OSPEEDR &= ~GPIO_OSPEEDR_OSPEEDR6_Msk;
    if(speed_configuration == 1 )
	    GPIOA->OSPEEDR |= (0x01 <<GPIO_OSPEEDR_OSPEEDR6_Pos);
    if(speed_configuration == 2 )
	    GPIOA->OSPEEDR |= (0x11 <<GPIO_OSPEEDR_OSPEEDR6_Pos);

	/* 

    Configure the push pull or pull down option

    1 = Pull-up
    2 = Pull-down
    other value = no pull up or pull down

    */

	GPIOA->PUPDR &= ~GPIO_PUPDR_PUPDR6_Msk;
    if(configuration_up_down == 1 )
	    GPIOA->PUPDR |= (0x01 <<GPIO_PUPDR_PUPDR6_Pos);
    if(configuration_up_down == 2 )
	    GPIOA->PUPDR |= (0x10 <<GPIO_PUPDR_PUPDR6_Pos);

	// Permit to reinitialise the value of the selected GPIO to 0x00

	GPIOA->BSRR = GPIO_BSRR_BR_6;
}