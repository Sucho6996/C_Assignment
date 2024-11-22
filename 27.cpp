/*
Write a program to calculate sum of first 20 natural numbers using recursive function
*/
#include<stdio.h>

int sum(int limit){
	if(limit<=1){
		return 1;
	}
	else{
		return limit+sum(limit-1);
	}
}

int main(){
	printf("Sum of first 20 natural number is %d",sum(20));
}