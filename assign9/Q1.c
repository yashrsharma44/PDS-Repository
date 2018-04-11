#include<stdio.h>
#include<stdlib.h>

int **enter_matrix(int **x, int m, int n)
{
	int i,j;
	for(i=0;i<m;i++)
	{
		x[i] = (int *)(malloc(n*sizeof(int)));

	}
	printf("Enter the values of the matrix\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&x[i][j]);
		}
	}
	return x;
}

void print_matrix(int **x, int m, int n)
{
	int i,j;
	printf("Values of the matrix are\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",*(*(x+i)+j));
		}
		printf("\n");
	}
	
}

int main()
{
	printf("Enter the row and column of the matrix\n");
	int r, c;
	scanf("%d%d",&r,&c);
	int **x;
	x = (int **)(malloc(r * sizeof(int)));
	int **y = enter_matrix(x,r,c);
	print_matrix(y,r,c);
	return 0;
}