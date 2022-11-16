#include<stdio.h>

void *insertionSort(int *B,int *A, int n)
{
	


	int i,j;
	for(i=0;i<n;i++)
	{
		int c = B[i];
		A[i] = c;
	}
	for(i=1;i<n;i++)
	{
		int key = A[i];
		j = i-1;
		while(j>=0 && A[j] > key)
		{
			A[j+1] = A[j];
			j = j-1;
		}
		A[j+1] = key;
	}
	
}

void main()
{
	printf("Enter the size\n");
	int n;
	scanf("%d",&n);
	int A[n];
	printf("Enter the values of the array\n");

	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	int B[n];
	insertionSort(A,B,n);
	printf("Sorted Array\n");
	for(i=0;i<n;i++)
		printf("%d ",B[i]);

}