/*Write a program to illustrate the use of unary prefix and postfix increment and decrement operators.*/

#include<stdio.h>

int main(){
	
	int x;
	printf("Choose a digit: ");
	scanf("%d",&x);
	printf("Your digit is %d",x);
	printf("\nAfter post increment by 1 = %d",x++);//no change
	printf("\nAfter pre increment by 1 = %d",++x);//increase by 2
	printf("\nAfter post decrement by 1 = %d",x--);//no change
	printf("\nAfter pre decrement by 1 = %d",--x);//increase by 2
}