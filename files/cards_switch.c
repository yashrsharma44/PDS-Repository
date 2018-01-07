#include<stdio.h>
#include<stdlib.h>

int main()
{
	char card_name[3];
	int val=0;
	printf("Enter the card Name: \n");
	scanf("%2s",card_name);
	switch (card_name[0])
	{
		case 'K':
		case 'Q':
		case 'J':
		val+=10;
		break;
		case 'A':
		val+=11;
		break;
		default:
		val = atoi(card_name);

	}
	printf("Value is %i\n",val );
}