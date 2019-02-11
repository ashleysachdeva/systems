#include <stdio.h>
#include <stdlib.h>


void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main(void){
    int dollars = 0;
    int twenties = 0;
    int tens= 0;
    int fives=0;
    int ones=0;
    printf("please enter amount of money");
    scanf("%d", &dollars);
    dollars = 150;
    //totalAmount = 150;
    pay_amount(dollars, &twenties, &tens, &fives, &ones);
    printf("$20 bills: %d,$10 bills: %d, $5 bills: %d, $1 bills: %d \n", twenties, tens, fives, ones);
    
    
}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones){
    *twenties = dollars / 20;
    dollars = dollars - (*twenties*20);
    *tens = dollars /10;
    dollars = dollars - (*tens*10);
    *fives = dollars/5;
    dollars = dollars - (*fives*5);
    *ones = dollars/1;
}

