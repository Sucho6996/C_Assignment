/*
Write a program to add, subtract, multiply and divide two integers using userdefined type function with
return type.
*/

#include<stdio.h>
int sum(int a,int b){
	return a+b;
}
int sub(int a,int b){
	return a-b;
}
int mul(int a,int b){
	return a*b;
}
int div(int a,int b){
	return a/b;
}

int main(){
	int a,b,c;
	printf("Enter 2 numbers: \n");
	scanf("%d %d",&a,&b);
	printf("\npress 1 to add\npress 2 to substract\npress 3 to multiply\npress 4 to divide\nYour choice: ");
	scanf("%d",&c);
	switch(c){
		case 1:
			printf("Sum = %d",sum(a,b));
			break;
		case 2:
			printf("Differnce = %d",sub(a,b));
			break;
		case 3:
			printf("Product = %d",mul(a,b));
			break;
		case 4:
			printf("Qutaint = %d",div(a,b));
			break;
		default:
			printf("Wrong input!!!");
			break;
	}
	return 0;
}