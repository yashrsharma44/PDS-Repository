#include<stdio.h>
int main()
{
	int prod=1,count=0;
	printf("Enter a sequence of positive integers: \n");
	do
	{
		int a,flag=0;
		scanf("%d",&a);
		if(a==prod)
		{
			printf("The product pf the prime numbers entered so far is %d\n",prod);
			break;
		}
		
		for(int i=2;i<a;i++)
		{
			if(a%i == 0)
			{
				flag=1;
				break;
			}
			
		}
		if(flag==0)
		{
			prod *= a;
			count+=1;
		}
		if(count == 5)
			{
				printf("You have alreadt input 5 prime numbers\n");
				break;
			}


	}while(1);
	return 0;
}