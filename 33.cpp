/*
Write a C program to check whether a number is even or odd using functions.
*/

#include<stdio.h>

void oddEven(int num){
	if(num%2==0)
		printf("Even");
	else
		printf("Odd");
}

int main(){
	int n;
	printf("Enter number: ");
	scanf("%d",&n);
	
	oddEven(n);
}