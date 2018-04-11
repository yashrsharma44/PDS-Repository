#include<stdio.h>
int binomial(int,int);
int fact(int);
int main()
{
	int i,n,j;
	printf("Enter the value of rows\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{

		for(j=0;j<=i;j++)
		{
			printf("%d ",binomial(i,j));
		}
		printf("\n");
	}

	return 0;
}

int binomial(int pre, int pos)
{
	int num =(fact(pre))/((fact(pos))*(fact(pre-pos)));
	return num; 
}
int fact(int n)
{
	if(n==1 || n == 0)
		return 1;
	else
		return(n * fact(n-1));
}