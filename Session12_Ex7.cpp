#include <stdio.h>
void createMatrix(int rows,int cols){
	int matrix[rows][cols];
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			printf("Nhap gia tri matrix[%d][%d]:",i,j);
			scanf("%d",&matrix[i][j]);
		}
	}
}

void printfMatrix(int rows, int cols){
	int matrix[rows][cols];
	printf("Ma tran:\n");
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			printf("%4d",matrix[i][j]);
		}
		printf("\n");
	}
}

int main(){
	int rows,cols;
	printf("Nhap so hang: ");
	scanf("%d",&rows);
	printf("Nhap so cot: ");
	scanf("%d",&cols);
	int matrix[rows][cols];
	createMatrix(rows,cols);
	printfMatrix(rows,cols);
	return 0;
}
