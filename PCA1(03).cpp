/*
Simple calculator
*/

#include<stdio.h>
#include <math.h>
int sum(int a,int b){
	return a+b;
}
int sub(int a,int b){
	return a-b;
}
int mul(int a,int b){
	return a*b;
}
int div2(int a,int b){
	return a/b;
}

double squre(int a, int b){
	double result=1;
	for(int i=0;i<b;i++){
		result=result*a;
	}
	return result;
}
double squreRoot(int a){
	return sqrt(a); 
}
double log(int x){
	return log10(x);
}

int main(){
	int a,b,c;
	
	printf("\npress 1 to add\npress 2 to substract\npress 3 to multiply\npress 4 to divide\npress 5 to get square\npress 6 to get log\nYour choice: ");
	scanf("%d",&c);
	switch(c){
		case 1:
			printf("Enter 2 numbers: \n");
			scanf("%d %d",&a,&b);
			printf("Sum = %d",sum(a,b));
			break;
		case 2:
			printf("Enter 2 numbers: \n");
			scanf("%d %d",&a,&b);
			printf("Differnce = %d",sub(a,b));
			break;
		case 3:
			printf("Enter 2 numbers: \n");
			scanf("%d %d",&a,&b);
			printf("Product = %d",mul(a,b));
			break;
		case 4:
			printf("Enter 2 numbers: \n");
			scanf("%d %d",&a,&b);
			printf("Qutaint = %d",div2(a,b));
			break;
		case 5:
			printf("Enter a number: \n");
			scanf("%d",&a);
			printf("Value = %f",squreRoot(a));
			break;
		case 6:
			printf("Enter a number: \n");
			scanf("%d",&a);
			printf("log of %d = %f",a,log(a));
			break;
		default:
			printf("Wrong input!!!");
			break;
	}
	return 0;
}
