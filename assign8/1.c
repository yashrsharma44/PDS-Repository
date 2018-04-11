#include<stdio.h>
void getMat(int A[][3],int row, int col);
void printMat(int A[][3], int row, int col);
int main()
{
	printf("Enter the number of rows and columns\n");
	static int row, col;
	scanf("%d%d",&row,&col);
	int A[row][col];
	getMat(A,row,col);
	printMat(A,row,col);
	return 0;

}
void getMat(int A[][3], int row, int col)
{
	printf("Enter the Values of Matrix\n");
	int i=0,j=0;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d row %d col",i,j);
			scanf("%d",&A[i][j]);
		}
	}

}
void printMat(int A[][3],int row, int col)
{
	printf("Printing the elements!..\n");
	int i=0,j=0;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
}