/*
Write a program to generate Fibonacci series
*/

#include<stdio.h>

int fibo(int num){
	if(num<=1){
		return num;
	}
	else{
		return fibo(num-1)+fibo(num-2);
	}
}

int main(){
	int n;
	printf("Enter number terms: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("%d\t",fibo(i));
	}
	return 0;

}