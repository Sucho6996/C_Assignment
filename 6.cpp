#include<stdio.h>

int main(){
	int a,b,c,l;
	
	printf("Enter 3 digits:");
	scanf("%d %d %d",&a,&b,&c);
	
	l=(a>b)?((a>c)?a:c):((b>c)?b:c);
	printf("Largest = %d",l);
}