#include<stdio.h>
int main()
{
	int n = 100, s;
	for(s=2;n>2;--n)
	{
		s+=2;
		n-=2;
	}
	printf("%d\n",s );
}