/*
Write a program to find sum of digits of the number using Recursive Function
*/
#include<stdio.h>

int sum(int num){
	static int total=0;
	if(num>0){
		total+=num%10;
		return sum(num/10);
	}
	
	return total;
}

int main(){
	int n;
	printf("Enter number: ");
	scanf("%d",&n);
	
	printf("Total is %d",sum(n));
	return 0;
}

