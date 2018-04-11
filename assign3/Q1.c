#include<stdio.h>
int main()
{
	int n,sum;
	printf("Enter n : \n");
	scanf("%d",&n);
	printf("Number entered is %d \n",n);
	int c=1,d=1;
	double frac = d/c;
	printf("The first %d Fibonacci numbers are %d, %d(%lf),",n,c,d,frac);
	for(int i=2;i<n;i++)
	{
		sum = c + d;
		double frc = ((double)d)/((double)c);
		printf("%d(%lf),",sum,frc);
		c = d;
		d = sum;
	}
	return 0;
}