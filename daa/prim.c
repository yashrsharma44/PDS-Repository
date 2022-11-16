#include<stdio.h>
#define INTMAX 9999

void *makequeue(int *V,int *Q, int n)
{
	
	int i;
	for(i=0;i<n;i++)
	{
		Q[i] = V[i];
	}

	//Sorting the array
	int j;
	for(i=1;i<n;i++)
	{
		int key = Q[i];
		j = i-1;
		while(j>=0 && Q[j] > key)
		{
			Q[j+1] = Q[j];
			j = j-1;
		}
		Q[j+1] = key;
	}
}

int extract_min(int *Q)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(Q[i]!=-1)
		{
			int val = Q[i];
			Q[i] = -1;
			return(val);
		}
	}
}


void prim(int *graph,int V, int n)
{
	int key[n];
	key[0] = 0;
	int i;
	for(i=1;i<n;i++)
	{
		key[i]=INTMAX;
	}

	int Q[n];
	makequeue(V,Q,n);




}

void main()
{
	int i;
	printf("Enter the size\n");
	int n;
	scanf("%d",&n);
	printf("Enter the Vertices\n");
	int V[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&V[i]);
	}
	printf("Enter the Adjacency Matrix\n");
	int G[n][n];
	int j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&G[i][j]);
		}
	}
	prim(G,V,n);
}