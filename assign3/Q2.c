#include<stdio.h>
int main()
{
	char val[15];
	char v[3] = {'e','n','d'};
	printf("Enter a string: \n");
	do
	{
		scanf("%s",val);

	}while(!((val[0]==v[0])&&(val[1]==v[1])&&(val[2]==v[2])));
	printf("*** I am quitting ***\n");
	return 0;
}