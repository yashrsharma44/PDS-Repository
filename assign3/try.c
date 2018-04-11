#include<stdio.h>
int main()
{
	char val[3] = {'e','n','d'};
	char inp[10];
	scanf("%s",inp);
	if((inp[0]==val[0])&&(inp[1]==val[1])&&(inp[2]==val[2]))
	printf("Success\n");
	printf("Failure\n");
	}