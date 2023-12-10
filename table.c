#include<stdio.h>

//Write C program to print multiplication table of any number.

void main(){
	int no,i,ans;
	printf("Enter Number :- ");
	scanf("%d",&no);
	
	for(i=1; i<=10; i++){
		ans = no*i;
		printf("%d * %d = %d\n",no, i,ans);
	}
}
