/*

*/

#include <LED_Mode.h>

void LED_On(uint8_t number){

    if( number == 0 )GPIOA->ODR = GPIO_ODR_0; 
    if( number == 1 )GPIOA->ODR = GPIO_ODR_1; 
    if( number == 2 )GPIOA->ODR = GPIO_ODR_2; 
    if( number == 3 )GPIOA->ODR = GPIO_ODR_3; 
    if( number == 4 )GPIOA->ODR = GPIO_ODR_4; 
    if( number == 5 )GPIOA->ODR = GPIO_ODR_5; 
    if( number == 6 )GPIOA->ODR = GPIO_ODR_6; 
    if( number == 7 )GPIOA->ODR = GPIO_ODR_7; 
    if( number == 8 )GPIOA->ODR = GPIO_ODR_8; 
    if( number == 9 )GPIOA->ODR = GPIO_ODR_9; 
    if( number == 10 )GPIOA->ODR = GPIO_ODR_10; 
    if( number == 11 )GPIOA->ODR = GPIO_ODR_11; 
    if( number == 12 )GPIOA->ODR = GPIO_ODR_12; 
    if( number == 13 )GPIOA->ODR = GPIO_ODR_13; 
    if( number == 14 )GPIOA->ODR = GPIO_ODR_14; 
    if( number == 15 )GPIOA->ODR = GPIO_ODR_15;


}

void LED_Off(uint8_t number){

    if( number == 0 )GPIOA->ODR = !GPIO_ODR_0; 
    if( number == 1 )GPIOA->ODR = !GPIO_ODR_1; 
    if( number == 2 )GPIOA->ODR = !GPIO_ODR_2; 
    if( number == 3 )GPIOA->ODR = !GPIO_ODR_3; 
    if( number == 4 )GPIOA->ODR = !GPIO_ODR_4; 
    if( number == 5 )GPIOA->ODR = !GPIO_ODR_5; 
    if( number == 6 )GPIOA->ODR = !GPIO_ODR_6; 
    if( number == 7 )GPIOA->ODR = !GPIO_ODR_7; 
    if( number == 8 )GPIOA->ODR = !GPIO_ODR_8; 
    if( number == 9 )GPIOA->ODR = !GPIO_ODR_9; 
    if( number == 10 )GPIOA->ODR = !GPIO_ODR_10; 
    if( number == 11 )GPIOA->ODR = !GPIO_ODR_11; 
    if( number == 12 )GPIOA->ODR = !GPIO_ODR_12; 
    if( number == 13 )GPIOA->ODR = !GPIO_ODR_13; 
    if( number == 14 )GPIOA->ODR = !GPIO_ODR_14; 
    if( number == 15 )GPIOA->ODR = !GPIO_ODR_15;
     

}