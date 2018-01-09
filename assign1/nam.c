#include<stdio.h>
int main()
{
	char name[20],quar[10],street[100],city[20],pin[10];
	printf("Enter the name: \n");
	scanf("%s",name);
	printf("Enter the quarter: \n");
	scanf("%s",quar);
	printf("Enter the Street name: \n");
	gets(street);
	printf("Enter the City: \n");
	scanf("%s",city);
	printf("Enter the pincode: \n");
	scanf("%s",pin);
	printf("%s\n",name);
	printf("%s, %s\n",quar,street);
	printf("%s, %s\n",city,pin);
	return 0;
}