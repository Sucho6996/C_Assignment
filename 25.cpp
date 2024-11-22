/*
Write a program to accept a string and count the number of vowels present in this String
*/
#include<stdio.h>

int countVowel(char s[],int len){
	int count=0;
	for(int i=0;i<len;i++){
		if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
			count++;
	}
	return count;
}

int main(){
	char s[100];
	int len=0;
	printf("Enter a String: ");
	scanf("%s",&s);
	while(s[len]!='\0'){
		len++;
	}
	printf("Number of vowel is %d",countVowel(s,len));
	return 0;
}