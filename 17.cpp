/*
Program: Write a program to display the following pattern.
*
*
*
* *
* * * *
*/
#include<stdio.h>
int main(){
	for(int i=0;i<=5;i++){
		if(i<4){
			printf("*\n");
		}
		else{
			for(int j=0;j<((i==4)?2:4);j++){
				printf("* ");
			}
			printf("\n");
		}
	}
	return 0;
}