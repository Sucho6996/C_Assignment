/*
Write a program to swap two integers using call by value and call by reference methods of passing
arguments to a function.
*/
#include<stdio.h>

void callByReference(int *p,int *q){
	*p=*p+*q;
	*q=*p-*q;
	*p=*p-*q;
	
	printf("After call by reference: %d\t%d",*p,*q);
}

void callByValue(int p,int q){
	p=p+q;
	q=p-q;
	p=p-q;
	
	printf("After call by reference: %d\t%d",p,q);
}

int main(){
	int m,n;
	printf("Enter 1st number: ");
	scanf("%d",&m);
	printf("Enter 2nd number: ");
	scanf("%d",&n);
	callByValue(m,n);
	printf("\nValue of 1st and 2nd number after call by value %d and %d (Remain unchanged in memory)\n",m,n);
	callByReference(&m,&n);
	printf("\nValue of 1st and 2nd number after call by Reference %d and %d (Changed in memory)\n",m,n);
	return 0;
}