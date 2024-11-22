/*
Write a program for addition of two matrices of any order in C.
*/
#include<stdio.h>

int main(){
	
	int row=3;
	int col=3;
	
	int nums[row][col]={
					{1,2,3},{4,5,6},{7,8,9}
	};
	
	int nums2[row][col]={
					{1,2,3},{4,5,6},{7,8,9}
	};
	
	printf("1st 2D Array:\n");
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("%d ",nums[i][j]);
		}
		printf("\n");
	}
	
	printf("\n2nd 2D Array:\n");
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("%d ",nums2[i][j]);
		}
		printf("\n");
	}
	
	printf("\nSum of those 2D Array:\n");
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("%d ",nums[i][j]+nums2[i][j]);
		}
		printf("\n");
	}
	return 0;
	
}