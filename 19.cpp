/*
Write a Program to reverse the array elements in C Programming.
*/
#include<stdio.h>

int main(){
	int num[]={42,87,16,93,56,24,67,35,78,12};
	int n=sizeof(num)/sizeof(num[0]);
	
	printf("\nActual array\n");
	for(int i=0;i<n;i++){
		printf("%d ",num[i]);
	}
	
	printf("\nReversed array\n");
	for(int i=n-1;i>=0;i--){
		printf("%d ",num[i]);
	}
	return 0;
}