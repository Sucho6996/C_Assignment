/*
Write a program to read a string and check for palindrome without using string related function (a string
is palindrome if its half is mirror by itself eg: abcdcba).
*/

#include<stdio.h>

void palindromeCheck(char s[],int n){
	
	int count=0;
	int i=0;
	int j=n-1;
	for(int i=0;(i<n/2);i++){
		if(s[i]!=s[n-1-i]){
			count++;
			break;
		}
	}
	if(count==0){
		printf("The Word is Palindrome");
	}
	else
		printf("Not a palindrome Word");
}

int main(){
	char s[100];
	int len=0;
	printf("Enter a String: ");
	scanf("%s",&s);
	while(s[len]!='\0'){
		len++;
	}
	palindromeCheck(s,len);
	return 0;
}