/*
Write a program to swap values of two variables with and without using third variable
*/
#include<stdio.h>
void swap(int *p,int *q){
	*p=*p+*q;
	*q=*p-*q;
	*p=*p-*q;
	printf("Result 1st=%d & 2nd= %d",*p,*q);
}

int main(){
	int i,j;
	printf("Enter 1st number: ");
	scanf("%d",&i);
	printf("Enter 2nd number: ");
	scanf("%d",&j);
	printf("Result 1st=%d & 2nd= %d\n",i,j);
	swap(&i,&j);
}