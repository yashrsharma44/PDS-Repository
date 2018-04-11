#include<stdio.h>
int main()
{
	int i,num;
	printf("Enter the number: \n");
	scanf("%d",&num);
	for(i=1;i<=10;i++)
	{
		int prod = num * i;
		printf("%d X %d = %d\n",num,i,prod);
	}
	return 0;
}