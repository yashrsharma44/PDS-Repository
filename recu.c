#include<stdio.h>
int main()
{
	printf("Enter a Number and Power\n");
	int n,p;
	scanf("%d%d",&n,&p);
	int val = recur(n,p);
	printf("POW %d\n",val );
}
int recur(int num, int pow)
{
	if(pow==1)
		return (num);
	else
	{
		if(pow%2==0)
		{
			return(recur(num,(pow/2)) * recur(num, (pow/2)));
		}
		else
		{
			return(num * recur(num,(pow/2)) * recur(num, (pow/2)));
		}
	}
}