/*
Write a program to print the sum of digits of a number using for loop.
*/
#include<stdio.h>

int main(){
	int n,total=0;
	printf("How many number you want to add: ");
	scanf("%d",&n);
	
	int temp=0;
	for(int i=0;i<n;i++){
		printf("Enter a number: ");
		scanf("%d",&temp);
		total+=temp;
	}
	printf("Total = %d",total);
	return 0;
}