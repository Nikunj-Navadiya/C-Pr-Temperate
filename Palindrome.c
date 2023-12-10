#include<stdio.h>

// Write C program to enter a number and print its reverse & check weather num is palindrome or not?

void main (){
	int no,r,rev=0,a;
	printf("Enter Number :- ");
	scanf("%d",&no);
	a=no;
	
	while(no>0){
		r=no%10;
		rev=rev*10+r;
		no=no/10;
	}
	if(rev==a){
		printf("Palindrome Number");
	}else{
		printf("Not Palindrome Number");
	}
}
