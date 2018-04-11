#include<stdio.h>
int rever(int);
int main()
{	
	int a=0;
	printf("Enter a number\n");
	scanf("%d",&a);
	int sum = rever(a);
	printf("Sum is %d\n",sum);

	return 0;
}
int rever(int a)
{
	int num=0;
	num = a%10;
	if(a<=9)
	{
		return(a);
	}
	else
	{
		return(num+rever(a/10));
	}
}