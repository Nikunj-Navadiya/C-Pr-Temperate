#include<stdio.h>

//Write C program to count number of digits in a number.

void main(){
	int no,cou=0;
	
	printf("Enter Number :- ");
	scanf("%d",&no);
	
	 while(no!=0){
       no=no/10;  
       cou++;  
   }  
   printf("Count Number of digits :- %d",cou);  
}
