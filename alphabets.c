#include<stdio.h>

//Write C program to print all alphabets from a to z. using do while loop

void main (){
	char ch;
	printf("Alphabets from A to Z :- \n");
	ch='A';
	
	do{
		printf("%c ",ch);
		ch++;
	}while(ch<='Z');
}
