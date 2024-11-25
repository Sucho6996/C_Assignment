/*
Write a Program to find the largest and smallest element in Array
*/
#include<stdio.h>

int searchSmallest(int num[],int n){
	int s=num[0];
	for(int i=1;i<n;i++){
		if(num[i]<s){
			s=num[i];
		}
	}
	return s;
}

int main(){
	int num[]={42,87,16,93,56,24,67,35,78,12};
	int n=sizeof(num)/sizeof(num[0]);
	printf("Array: \n");
	for(int i=0;i<n;i++){
		printf("%d\t",num[i]);
	}
	printf("\nSmallest elliment is %d",searchSmallest(num,n));
	return 0;
}