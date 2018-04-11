#include<stdio.h>
int reverse(int);
int isPowerOfTwo(int);
int main()
{
	int a;
	printf("Enter an integer\n");
	scanf("%d",&a);
	int rev = reverse(a);
	printf("%d\n",rev );
	if(isPowerOfTwo(a)==1)
		printf("%d is a power of two\n",a);
	else
		printf("%d is not a power of two\n",a);
	if(isPowerOfTwo(rev)==1)
		printf("%d is a power of two\n",rev);
	else
		printf("%d is not a power of two\n",rev);
	return 0;
}

int reverse(int a)
{
	int copy = a,val=0;
	while(copy!=0)
	{
		val = (val*10) + (copy%10);
		copy/=10;
	}	
	return val;
}
int isPowerOfTwo(int v)
{	
	int flag=0;
	while(v!=0)
	{
		if(v%2!=0)
		{
			flag=1;
		}
		v = v/2;
	}
	if(flag==0)
		return 1;
	else
		return 0;
}