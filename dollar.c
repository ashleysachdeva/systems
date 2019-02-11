#include <stdio.h>
#include <stdlib.h>

int totalAmount;
int currentAmount;
int twenty;
int ten;
int five;
int one;
void calculateBills(int totalAmount);

int main(void){
    //printf("please enter amount of money");
    //scanf("%d", &totalAmount);
    totalAmount = 150;
    calculateBills(int totalAmount);
    printf("twenty: %d,ten: %d, five: %d, one: %d", twenty, ten, five, one);
    
    
}

void calculateBills(int totalAmount){
    twenty = totalAmount / 20;
    currentAmount = totalAmount - (twenty*20);
    ten = currentAmount /10;
    currentAmount = currentAmount - (ten*10);
    five = currentAmount/5;
    currentAmount = currentAmount - (five*5);
    one = currentAmount/1;
    
    
}

