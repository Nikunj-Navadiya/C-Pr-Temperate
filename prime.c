#include<stdio.h>

//Program Check weather num is prime or not

void main(){
	 int n, i=2, c=0;

    printf("Enter any Number: ");
    scanf("%d", &n);
 
    for (i=2; i<=sqrt(n); i++) {
        if (n % i == 0) {
            c++;
		}
    }

    if (c == 0) {
        printf("Prime Number");
    } else {
        printf(" Not Prime Number");
    }

}
