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

	/* 
        Those folowing function permit to enable the specified GPIO with the following parameters :

        1/ Configure the mode of the selected GPIO 
        InputOutput variable need to be set to those values depending on the application :

        0 = Input 
        1 = Output
        2 = Alternate fonction  
        3 = Analog mode

        2/ Set the selected GPIO  to push-pull or open drain 
        mode2 varaible permit to select the chosen mode

        1 = open drain
        other value = push-pull

        3/ Set the speed of the selected GPIO  

        1 = Medium Speed
        2 = High Speed

        4/ Configure the push pull or pull down option

        1 = Pull-up
        2 = Pull-down
        other value = no pull up or pull down

    */

void gpioA0_configuration (uint8_t InputOutput, uint8_t mode2, uint8_t speed_configuration, uint8_t configuration_up_down)
{
	RCC->AHBENR |= RCC_AHBENR_GPIOAEN;


	GPIOA->MODER &= ~GPIO_MODER_MODER0_Msk;

    if(InputOutput == 0)
	    GPIOA->MODER |= (0x00 <<GPIO_MODER_MODER0_Pos);
    if(InputOutput == 1)
        GPIOA->MODER |= (0x01 <<GPIO_MODER_MODER0_Pos);
    if(InputOutput == 2)
        GPIOA->MODER |= (0x10 <<GPIO_MODER_MODER0_Pos);
    if(InputOutput == 3)
        GPIOA->MODER |= (0x11 <<GPIO_MODER_MODER0_Pos);


   GPIOA->OTYPER &= ~GPIO_OTYPER_OT_0;

   if(mode2 == 1)
    GPIOA->OTYPER |= (0x01 << GPIO_OTYPER_OT_0);
	    

	GPIOA->OSPEEDR &= ~GPIO_OSPEEDR_OSPEEDR0_Msk;

    if(speed_configuration == 1 )
	    GPIOA->OSPEEDR |= (0x01 <<GPIO_OSPEEDR_OSPEEDR0_Pos);
    if(speed_configuration == 2 )
	    GPIOA->OSPEEDR |= (0x11 <<GPIO_OSPEEDR_OSPEEDR0_Pos);


	GPIOA->PUPDR &= ~GPIO_PUPDR_PUPDR0_Msk;

    if(configuration_up_down == 1 )
	    GPIOA->PUPDR |= (0x01 <<GPIO_PUPDR_PUPDR0_Pos);
    if(configuration_up_down == 2 )
	    GPIOA->PUPDR |= (0x10 <<GPIO_PUPDR_PUPDR0_Pos);


	GPIOA->BSRR = GPIO_BSRR_BR_0;
}

void gpioA1_configuration (uint8_t InputOutput, uint8_t mode2, uint8_t speed_configuration, uint8_t configuration_up_down)
{
	RCC->AHBENR |= RCC_AHBENR_GPIOAEN;


	GPIOA->MODER &= ~GPIO_MODER_MODER1_Msk;

    if(InputOutput == 0)
	    GPIOA->MODER |= (0x00 <<GPIO_MODER_MODER1_Pos);
    if(InputOutput == 1)
        GPIOA->MODER |= (0x01 <<GPIO_MODER_MODER1_Pos);
    if(InputOutput == 2)
        GPIOA->MODER |= (0x10 <<GPIO_MODER_MODER1_Pos);
    if(InputOutput == 3)
        GPIOA->MODER |= (0x11 <<GPIO_MODER_MODER1_Pos);


   GPIOA->OTYPER &= ~GPIO_OTYPER_OT_1;

   if(mode2 == 1)
    GPIOA->OTYPER |= (0x01 << GPIO_OTYPER_OT_1);
	    

	GPIOA->OSPEEDR &= ~GPIO_OSPEEDR_OSPEEDR1_Msk;

    if(speed_configuration == 1 )
	    GPIOA->OSPEEDR |= (0x01 <<GPIO_OSPEEDR_OSPEEDR1_Pos);
    if(speed_configuration == 2 )
	    GPIOA->OSPEEDR |= (0x11 <<GPIO_OSPEEDR_OSPEEDR1_Pos);


	GPIOA->PUPDR &= ~GPIO_PUPDR_PUPDR1_Msk;

    if(configuration_up_down == 1 )
	    GPIOA->PUPDR |= (0x01 <<GPIO_PUPDR_PUPDR1_Pos);
    if(configuration_up_down == 2 )
	    GPIOA->PUPDR |= (0x10 <<GPIO_PUPDR_PUPDR1_Pos);


	GPIOA->BSRR = GPIO_BSRR_BR_1;
}

void gpioA2_configuration (uint8_t InputOutput, uint8_t mode2, uint8_t speed_configuration, uint8_t configuration_up_down)
{
	RCC->AHBENR |= RCC_AHBENR_GPIOAEN;


	GPIOA->MODER &= ~GPIO_MODER_MODER2_Msk;

    if(InputOutput == 0)
	    GPIOA->MODER |= (0x00 <<GPIO_MODER_MODER2_Pos);
    if(InputOutput == 1)
        GPIOA->MODER |= (0x01 <<GPIO_MODER_MODER2_Pos);
    if(InputOutput == 2)
        GPIOA->MODER |= (0x10 <<GPIO_MODER_MODER2_Pos);
    if(InputOutput == 3)
        GPIOA->MODER |= (0x11 <<GPIO_MODER_MODER2_Pos);


   GPIOA->OTYPER &= ~GPIO_OTYPER_OT_2;

   if(mode2 == 1)
    GPIOA->OTYPER |= (0x01 << GPIO_OTYPER_OT_2);
	    

	GPIOA->OSPEEDR &= ~GPIO_OSPEEDR_OSPEEDR2_Msk;

    if(speed_configuration == 1 )
	    GPIOA->OSPEEDR |= (0x01 <<GPIO_OSPEEDR_OSPEEDR2_Pos);
    if(speed_configuration == 2 )
	    GPIOA->OSPEEDR |= (0x11 <<GPIO_OSPEEDR_OSPEEDR2_Pos);


	GPIOA->PUPDR &= ~GPIO_PUPDR_PUPDR2_Msk;

    if(configuration_up_down == 1 )
	    GPIOA->PUPDR |= (0x01 <<GPIO_PUPDR_PUPDR2_Pos);
    if(configuration_up_down == 2 )
	    GPIOA->PUPDR |= (0x10 <<GPIO_PUPDR_PUPDR2_Pos);


	GPIOA->BSRR = GPIO_BSRR_BR_2;
}

void gpioA3_configuration (uint8_t InputOutput, uint8_t mode2, uint8_t speed_configuration, uint8_t configuration_up_down)
{
	RCC->AHBENR |= RCC_AHBENR_GPIOAEN;


	GPIOA->MODER &= ~GPIO_MODER_MODER3_Msk;

    if(InputOutput == 0)
	    GPIOA->MODER |= (0x00 <<GPIO_MODER_MODER3_Pos);
    if(InputOutput == 1)
        GPIOA->MODER |= (0x01 <<GPIO_MODER_MODER3_Pos);
    if(InputOutput == 2)
        GPIOA->MODER |= (0x10 <<GPIO_MODER_MODER3_Pos);
    if(InputOutput == 3)
        GPIOA->MODER |= (0x11 <<GPIO_MODER_MODER3_Pos);


   GPIOA->OTYPER &= ~GPIO_OTYPER_OT_3;

   if(mode2 == 1)
    GPIOA->OTYPER |= (0x01 << GPIO_OTYPER_OT_3);
	    

	GPIOA->OSPEEDR &= ~GPIO_OSPEEDR_OSPEEDR3_Msk;

    if(speed_configuration == 1 )
	    GPIOA->OSPEEDR |= (0x01 <<GPIO_OSPEEDR_OSPEEDR3_Pos);
    if(speed_configuration == 2 )
	    GPIOA->OSPEEDR |= (0x11 <<GPIO_OSPEEDR_OSPEEDR3_Pos);


	GPIOA->PUPDR &= ~GPIO_PUPDR_PUPDR3_Msk;

    if(configuration_up_down == 1 )
	    GPIOA->PUPDR |= (0x01 <<GPIO_PUPDR_PUPDR3_Pos);
    if(configuration_up_down == 2 )
	    GPIOA->PUPDR |= (0x10 <<GPIO_PUPDR_PUPDR3_Pos);


	GPIOA->BSRR = GPIO_BSRR_BR_3;
}

void gpioA4_configuration (uint8_t InputOutput, uint8_t mode2, uint8_t speed_configuration, uint8_t configuration_up_down)
{
	RCC->AHBENR |= RCC_AHBENR_GPIOAEN;


	GPIOA->MODER &= ~GPIO_MODER_MODER4_Msk;

    if(InputOutput == 0)
	    GPIOA->MODER |= (0x00 <<GPIO_MODER_MODER4_Pos);
    if(InputOutput == 1)
        GPIOA->MODER |= (0x01 <<GPIO_MODER_MODER4_Pos);
    if(InputOutput == 2)
        GPIOA->MODER |= (0x10 <<GPIO_MODER_MODER4_Pos);
    if(InputOutput == 3)
        GPIOA->MODER |= (0x11 <<GPIO_MODER_MODER4_Pos);


   GPIOA->OTYPER &= ~GPIO_OTYPER_OT_4;

   if(mode2 == 1)
    GPIOA->OTYPER |= (0x01 << GPIO_OTYPER_OT_4);
	    

	GPIOA->OSPEEDR &= ~GPIO_OSPEEDR_OSPEEDR4_Msk;

    if(speed_configuration == 1 )
	    GPIOA->OSPEEDR |= (0x01 <<GPIO_OSPEEDR_OSPEEDR4_Pos);
    if(speed_configuration == 2 )
	    GPIOA->OSPEEDR |= (0x11 <<GPIO_OSPEEDR_OSPEEDR4_Pos);


	GPIOA->PUPDR &= ~GPIO_PUPDR_PUPDR4_Msk;

    if(configuration_up_down == 1 )
	    GPIOA->PUPDR |= (0x01 <<GPIO_PUPDR_PUPDR4_Pos);
    if(configuration_up_down == 2 )
	    GPIOA->PUPDR |= (0x10 <<GPIO_PUPDR_PUPDR4_Pos);


	GPIOA->BSRR = GPIO_BSRR_BR_4;
}
    
void gpioA5_configuration (uint8_t InputOutput, uint8_t mode2, uint8_t speed_configuration, uint8_t configuration_up_down)
{
    // Enable GPIOA clock
	RCC->AHBENR |= RCC_AHBENR_GPIOAEN;



	GPIOA->MODER &= ~GPIO_MODER_MODER5_Msk;

    if(InputOutput == 0)
	    GPIOA->MODER |= (0x00 <<GPIO_MODER_MODER5_Pos);
    if(InputOutput == 1)
        GPIOA->MODER |= (0x01 <<GPIO_MODER_MODER5_Pos);
    if(InputOutput == 2)
        GPIOA->MODER |= (0x10 <<GPIO_MODER_MODER5_Pos);
    if(InputOutput == 3)
        GPIOA->MODER |= (0x11 <<GPIO_MODER_MODER5_Pos);

    GPIOA->OTYPER &= ~GPIO_OTYPER_OT_5;

    if(mode2 == 1)
        GPIOA->OTYPER |= (0x01 << GPIO_OTYPER_OT_5);
	    

	GPIOA->OSPEEDR &= ~GPIO_OSPEEDR_OSPEEDR5_Msk;
    if(speed_configuration == 1 )
	    GPIOA->OSPEEDR |= (0x01 <<GPIO_OSPEEDR_OSPEEDR5_Pos);
    if(speed_configuration == 2 )
	    GPIOA->OSPEEDR |= (0x11 <<GPIO_OSPEEDR_OSPEEDR5_Pos);


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
	RCC->AHBENR |= RCC_AHBENR_GPIOAEN;


	GPIOA->MODER &= ~GPIO_MODER_MODER6_Msk;

    if(InputOutput == 0)
	    GPIOA->MODER |= (0x00 <<GPIO_MODER_MODER6_Pos);
    if(InputOutput == 1)
        GPIOA->MODER |= (0x01 <<GPIO_MODER_MODER6_Pos);
    if(InputOutput == 2)
        GPIOA->MODER |= (0x10 <<GPIO_MODER_MODER6_Pos);
    if(InputOutput == 3)
        GPIOA->MODER |= (0x11 <<GPIO_MODER_MODER6_Pos);


   GPIOA->OTYPER &= ~GPIO_OTYPER_OT_6;

   if(mode2 == 1)
    GPIOA->OTYPER |= (0x01 << GPIO_OTYPER_OT_6);
	    

	GPIOA->OSPEEDR &= ~GPIO_OSPEEDR_OSPEEDR6_Msk;

    if(speed_configuration == 1 )
	    GPIOA->OSPEEDR |= (0x01 <<GPIO_OSPEEDR_OSPEEDR6_Pos);
    if(speed_configuration == 2 )
	    GPIOA->OSPEEDR |= (0x11 <<GPIO_OSPEEDR_OSPEEDR6_Pos);


	GPIOA->PUPDR &= ~GPIO_PUPDR_PUPDR6_Msk;

    if(configuration_up_down == 1 )
	    GPIOA->PUPDR |= (0x01 <<GPIO_PUPDR_PUPDR6_Pos);
    if(configuration_up_down == 2 )
	    GPIOA->PUPDR |= (0x10 <<GPIO_PUPDR_PUPDR6_Pos);


	GPIOA->BSRR = GPIO_BSRR_BR_6;
}