/*
Write a program to print number in reverse order with a difference of 2.
*/
#include<stdio.h>

void revPrint(int upperBound){
	for(int i=upperBound;i>=0;i-=2){
		printf("%d\t",i);
	}
}

int main(){
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	revPrint(n);
	return 0;
}