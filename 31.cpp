/*
Write a program to read an integer number and print the reverse of that number using recursion
*/
#include<stdio.h>
int revRec(int num){
	static int rev=0;
	if(num>0){
		rev=(rev*10)+(num%10);
		revRec(num/10);
	}
	return rev;
}

int main(){
	int n;
	printf("Enter number: ");
	scanf("%d",&n);
	
	printf("Reverse of %d is %d",n,revRec(n));
	return 0;
}