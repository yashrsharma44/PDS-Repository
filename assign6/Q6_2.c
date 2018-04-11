#include<stdio.h>
#include<string.h>
#include<stdlib.h>


char* isPigLatin(char *word)
{
	int len = strlen(word);
	char *real = (char *)malloc(sizeof(char));
	char a = word[0];
	if((a=='a')||(a=='e')||(a=='i')||(a=='o')||(a=='u')||(a=='A')||(a=='E')||(a=='I')||(a=='O')||(a=='U'))
	{
		real[len] = 'w';
		real[len+1] = 'a';
		real[len+2] = 'y';
		real[len+3] = '\0';
		return(real);
	}
	else
	{
		int index=0,j=0;
		for(int i=0;i<len;i++)
		{
			if((a=='a')||(a=='e')||(a=='i')||(a=='o')||(a=='u'))
			{
				index = i;
				break;
			}
		}
		int i = index;
		while(i<len)
		{
			real[j] = word[i];
			i++;
			j++;
		}
		i = 0;
		while(i<index)
		{
			real[j] = word[i];
			i++;
			j++;
		}
		real[j] = '\0';
		return (real);

	}
}
int main()
{
	printf("Enter a sentence\n");
	char word[100];
	int i=0,j=0;
	scanf("%s",word);
	char a = word[0];
	char wd[20];
	while(a!='\0')
	{
		a = word[i];

		if(a!=' ')
		{
			wd[j] = word[i];
			i++;
			j++;
		}
		else
		{
			wd[j+1] = '\0';
			char* rel = isPigLatin(wd);
			printf("%d ", *rel);

		}
	}
	return 0 ;
}