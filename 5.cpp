/*
Write a program to input two numbers and display the maximum number.
*/
#include<stdio.h>

int max(int i,int j){
	if(i>j)
		return i;
	else
		return j;
}

int main(){
	int i,j;
	printf("Enter two digits:");
	scanf("%d",&i);
	scanf("%d",&j);
	printf("Larger number is %d",max(i,j));
}