/*
Write a program to check whether a number is Palindrome or not.
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
	int n,rev;
	printf("Enter a number: ");
	scanf("%d",&n);
	rev=n;
	if(n==reverse(rev))
		printf("%d is palindrome",n);
	else
		printf("%d is not palindrome",n);
	return 0;
}