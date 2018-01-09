#include<stdio.h>
int main()
{
	char fname[10], lname[10];
	printf("Enter your name\n");
	scanf("%s %s",fname,lname);
	printf("First name:%sLast name:%s\n",fname,lname);
	return 0;
}