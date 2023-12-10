#include<stdio.h>

//Write C program to calculate factorial of a number.

void main(){
	int i,fact=1,no;  
	   
 	printf("Enter a number: ");    
 	scanf("%d",&no); 
	     
    for(i=1; i<=no; i++){    
      	fact=fact*i;    
 	}    
  	printf("Factorial of is: %d",fact);    
}

