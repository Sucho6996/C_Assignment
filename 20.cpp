/*
Write a Program for deletion of an element from the specified location from Array
*/

#include<stdio.h>

int main(){
	int num[]={42,87,16,93,56,24,67,35,78,12};
	int n=sizeof(num)/sizeof(num[0]);
	
	printf("\nActual array\n");
	for(int i=0;i<n;i++){
	printf("%d ",num[i]);
	}
	
	int pos;
	printf("\nWhich position of array you wanna delete(array index start from 0): ");
	scanf("%d",&pos);
	
	for(int i=pos;i<=n;i++){
		num[i]=num[i+1];
	}
	
	printf("\nAfter Deletion at %d\n",pos);
	for(int i=0;i<n;i++){
	printf("%d ",num[i]);
	}
}