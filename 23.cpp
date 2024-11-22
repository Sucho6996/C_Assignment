/*
Write a Program to multiply two 3 X 3 Matrices
*/
#include<stdio.h>

int main(){
	
	int row=3;
	int col=3;
	
	int nums[row][col]={
					{1,2,3},{4,5,6},{7,8,9}
	};
	
	int nums2[row][col]={
					{9,8,7},{6,5,4},{3,2,1}
	};
	int product[3][3];
	
	
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
	
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			product[i][j]=0;
			for(int k=0;k<row;k++){
				product[i][j]+=nums[i][k]*nums2[k][j];
			}
		}
	}
	
	printf("\nProduct of those 2D Array:\n");
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("%d ",product[i][j]);
		}
		printf("\n");
	}
		
	return 0;
	
}