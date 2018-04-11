#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the length\n");
	scanf("%d",&n);
	printf("Enter two strings\n");
	char a[n+1];
	char b[n+1];
	scanf("%s",a);
	scanf("%s",b);
	char c[(2*n)+1];
	for(i=0;i<(2*n);i+=2)
	{
		if(i%2==0)
		{
		c[i] = a[(i/2)];
		c[i+1] = b[(i/2)];
		}
		else
		{
			c[i] = a[(i/2)+1];
			c[i+1] = a[(i/2)+1];
		}
	}
	printf("%s\n",c);
	return 0;
}
