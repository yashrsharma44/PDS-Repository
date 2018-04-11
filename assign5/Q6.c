#include<stdio.h>
#include<string.h>
char join(char *, char *, int);
int main()
{
	int n;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	printf("Enter two strings\n");
	char a[n+1],b[n+1];
	scanf("%s%s",a,b);
	char c[2*n+1];
	c = join(a,b,n);
	printf("%s\n",c );
	return 0;

}
char join(char *a, char *b, int s )
{
	if(s==0)
		return(a[0]+b[0]);
	else
		return(a[s]+b[s]+join(a+1,b+1,s-1));
}