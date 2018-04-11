#include<stdio.h>

int *rotate(int *A, int size, int k)
{
	int i=0;
	int temp;
	for(i=0;i<size;i++)
	{
		temp = A[k+i];
		A[k+i] = A[k+i-1];
		A[k+i-1] = temp;
	}
	return(A);
}
void printArray(int A[100], int size)
{
	int i=0;
	for(i=0;i<size;i++)
	{
		printf("%d ",A[i]);
	}
	printf("\n");
}

int main()
{
	printf("Enter the size of Array\n");
	int size;
	scanf("%d",&size);
	int i=0;
	int A[size];
	printf("Enter the values in the array\n");
	for(i=0;i<size;i++)
	{
		printf("Enter the %d th value\n",(i+1));
		scanf("%d",&A[i]);
	}
	printf("Rotation after first sort");
	int *B;
	B = rotate(A,size,1);
	printArray(B,size);
	int *C = rotate(A,size,1);
	printArray(C,size);
	return 0;
}