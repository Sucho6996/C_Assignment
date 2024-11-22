/*
Write a program to find GCD (greatest common divisor or HCF) and LCM (least common multiple) of
two numbers
*/

#include<stdio.h>

int gcd(int a,int b){
	
	int m;
	m=a%b;
	while(m>0){
		a=b;
		b=m;
		m=a%b;		
	}
	return b;
}

int lcm(int a,int b){
	
	return ((a*b)/gcd(a,b));
	
}

int main(){
	int n,m;
	printf("Enter two number: ");
	scanf("%d %d",&m,&n);
	printf("GCD of %d & %d is %d",m,n,gcd(m,n));
	printf("\nLCM of %d & %d is %d",m,n,lcm(m,n));
	return 0;
}