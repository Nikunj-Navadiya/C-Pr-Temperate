#include<stdio.h>

// Write C program to find sum of first and last digit of a number.

void main(){
	  int num, sum, a, z;

    printf("Enter number :- ");
    scanf("%d", &num);
    
   	z = num % 10;
    
    while(num >= 10){
        num = num / 10;
    }
    a = num;

    sum = a + z;

    printf("First and Last Digit Total = %d", sum);
}
