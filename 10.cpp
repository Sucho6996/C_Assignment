/*
Write a program to reverse a given integer
*/
#include<stdio.h>

int reverse(int num){
	int rev,temp;
	while(num>0){
		temp=num%10;
		rev=(rev*10)+temp;
		num/=10;
	}
	return rev;
}

int main(){
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	printf("Reverse of %d is %d",n,reverse(n));
	return 0;
}