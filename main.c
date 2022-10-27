/*
Author      : Andrew Adams
date        : null
Discription : Just testing code for STM32F4 board: 
              *blink PA5
          
*/

/*
BASE ADDRESS
*/
#define AHB1_BASE     0x40020000UL
#define GPIOA_BASE   (AHB1_BASE)
#define GPIOB_BASE   (AHB1_BASE  +400)
#define GPIOC_BASE   (GPIOB_BASE +400)
#define GPIOD_BASE   (GPIOC_BASE +400)
#define GPIOE_BASE   (GPIOD_BASE +400)
#define RCC_BASE     (AHB1_BASE  + 0x00003800)


/*
SUB ADDRESSES
*/
#define RCC_AHB1      (*(volatile unsigned int *)(RCC_BASE+0x30))
#define GPIOA_MOD     (*(volatile unsigned int *)(GPIOA_BASE +0x00))
#define GPIOA_ODR     (*(volatile unsigned int *)(GPIOA_BASE +0x14))





#include <stdio.h>


int main(){
   printf("end of program");
   
  while(1){
      
  }
 
  return 0;
}

