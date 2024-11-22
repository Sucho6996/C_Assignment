/*
If a four-digit number is input through the keyboard, write a program to obtain the sum of the first and
last digit of this number
*/

#include<stdio.h>

int sumFirstLast(int num){
	int temp,total=0;
	for(int i=0;i<4;i++){
		temp=num%10;
		if(i==0 | i==3){
			total+=temp;
		}
		num/=10;
	}
	return total;
}

int main(){
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	printf("Sum of 1st and 4Th digit is %d",sumFirstLast(n));
	return 0;
}