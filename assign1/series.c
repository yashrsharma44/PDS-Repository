#include<stdio.h>
int main()
{
	int a;
	int codd=0,ceve=0,index=0,length=0,startindex=0,max_length=0,final_index=0;
	int sum=0;
	scanf("%d",&a);
	while(a!=0)
	{
		index++;
		sum = sum + a;
		if(a%2!=0)
		{
			codd++;
			if (length==0)
				startindex = index;
			length +=1;
			if(length>max_length)
			{
				max_length = length;
				final_index = startindex;
			}


		}
		if(a%2==0)
		{
			ceve++;
			if(length!=0)
				length=0;
		}
		if(final_index==0)
			final_index = startindex;
		scanf("%d",&a);
	}
	printf("Sum is :%d\n",sum);
	printf("Number of odd:%d and even:%d\n",codd,ceve);
	printf("Max Length: %d\n",max_length);
	printf("Starting Index: %d\n",final_index);
	return 0;
}