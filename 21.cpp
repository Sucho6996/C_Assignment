/*
Write a Program to access an element in 2-D Array.
*/
#include<stdio.h>

int main(){
	
	int row=3;
	int col=3;
	
	int nums[row][col]={
					{1,2,3},{4,5,6},{7,8,9}
	};
	
	printf("2D Array:\n");
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("%d ",nums[i][j]);
		}
		printf("\n");
	}
	
	printf("Select the row number and column number you wanna access:\n");
	printf("Row: ");
	scanf("%d",&row);
	printf("Column: ");
	scanf("%d",&col);
	printf("Element in Row %d and Col %d is %d",row,col,nums[row-1][col-1]);
	return 0;
}