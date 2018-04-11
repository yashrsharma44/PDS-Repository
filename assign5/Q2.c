#include<stdio.h>
int gcd(int,int);
int main()
{
	int a,b;
	printf("Enter two numbers\n");
	scanf("%d%d",&a,&b);
	int val = gcd(a,b);
	printf("GCD is %d\n",val);

	return 0;
}
int gcd(int a, int b)
{
	if (b==0)
		return(a);
	else
		return(gcd(b,(a%b)));
}