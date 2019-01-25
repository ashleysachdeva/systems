#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv){
 int a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15;
 printf("Please enter numbers 1 to 16 in any order");
 scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",&a0, &a1, &a2, &a3,&a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13, &a14, &a15);
 printf("\n %d %d %d %d \n",a0, a1, a2, a3);
 printf("%d %d %d %d \n",a4, a5, a6, a7);
 printf("%d %d %d %d \n",a8, a9, a10, a11);
 printf("%d %d %d %d \n \n",a12, a13, a14, a15);

int row1Sum = a0 + a1 + a2 + a3;
int row2Sum = a4 + a5 + a6 + a7;
int row3Sum = a8 + a9 + a10 + a11;
int row4Sum = a12 + a13+ a14 + a15;
int column1Sum = a0 + a4 + a8 + a12;
int column2Sum = a1 + a5 + a9 + a13;
int column3Sum = a2 + a6 + a10 + a14;
int column4Sum = a3 + a7 + a11 + a15;
int diagonal1Sum = a0 + a5 + a10 + a15;
int diagonal2Sum = a3 + a6 + a9 + a12;

printf("row sums: %d %d %d %d \n", row1Sum, row2Sum, row3Sum, row4Sum);
printf("column sums: %d %d %d %d \n", column1Sum, column2Sum, column3Sum, column4Sum);
printf("diagonal sums: %d %d \n", diagonal1Sum, diagonal2Sum);


 return 0;
}

