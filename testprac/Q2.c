#include<stdio.h>
#include<string.h>
char* ToPigLatin(char* word)
{
	char fi= word[0];
	int siz = strlen(word);
	static char new[100];
	if((fi=='a')||(fi=='i')||(fi=='e')||(fi=='o')||(fi=='u'))
	{
		int i=0;
		while(i<siz)
		{
			new[i] = word[i];
			i++;
		}
		new[siz] = 'w';
		new[siz+1] = 'a';
		new[siz+2] = 'y';
		return(new);
	}
	else
	{
		int a=-1,i=0;
		while(a==-1)
		{
			if((word[i]=='a')||(word[i]=='i')||(word[i]=='e')||(word[i]=='o')||(word[i]=='u'))a=i;
			i++;
		}
	
		int j=a;
		i=0;
		while(j<siz)
		{
			new[i] = word[j];
			i++;
			j++;
		}
		j=0;
		while(i<siz)
		{
			new[i] = word[j];
			i++;
			j++;
		}
		printf("Success i=%d\n",i);
		new[i] = 'a';
		new[i+1] = 'y';
		return(new);
	}
}
int main()
{
	printf("Enter a word\n");
	char c[50];
	scanf("%s",c);
	char *word;
	word = ToPigLatin(c);
	printf("New Word is %s \n",word);
	return 0;
}