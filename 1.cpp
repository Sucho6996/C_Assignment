/*
Write a program to calculate simple and compound interest
*/

#include<stdio.h>
#include <math.h>

float simpleInterest(float principle,int roi,int time){
	return ((principle*roi*time)/100);
}
double compoundInterest(float principle,int roi,int n,int time){
	float r=(float)roi/100;
	double a=principle*pow((1+(r/n)),n*time);
	return a-principle;                          
}

int main(){
	int c,r,t,n;
	float p;
	printf("press 1 to calculate simple interest\npress 2 to calculate compound interest\nyour choice:");
	scanf("%d",&c);
	printf("Enter Priciple: ");
	scanf("%f",&p);
	printf("Enter Rate of Interest: ");
	scanf("%d",&r);
	printf("Enter Time: ");
	scanf("%d",&t);
	if(c==2){
		printf("Enter Term: ");
		scanf("%d",&n);
		printf("%.2lf",compoundInterest(p,r,n,t));
	}
	else if(c==1){
		printf("%.2lf",simpleInterest(p,r,t));
	}
	return 0;
}