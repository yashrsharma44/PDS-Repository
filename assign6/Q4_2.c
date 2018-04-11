#include<stdio.h>
int isPrime(int );
int main()
{
	int n,prod=1;
	printf("Enter a Number\n");
	scanf("%d",&n);
	for(int i=2;i<=n;i++)
	{
		if(isPrime(i)==1)
			prod *=i;
	}
	printf("Primorial Number %d\n",prod );
	return 0;
}


int isPrime(int n)
{
	int i;
	if(n==2)
		return 1;
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return 1;
}