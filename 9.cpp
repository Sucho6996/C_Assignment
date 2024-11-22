/*
Write a program to count number of digits in a given integer
*/

#include<stdio.h>

int count(int num){
	int count=0;
	while(num>0){
		count++;
		num=num/10;
	}
	return count;
}
int main(){
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	printf("Total digits in %d is %d",n,count(n));
	return 0;
}