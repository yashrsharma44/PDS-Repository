#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node
{
	int data;
	struct node *next;
}stud;
int main()
{
	int i, n;
	stud *head=NULL, *p,*prev;
	
	printf("Enter the value of size of link-list\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		p = (stud *)(malloc(sizeof(stud)));
		scanf("%d",&p->data);
		p->next = NULL;
		if(head == NULL) head = p;
		else prev->next = p;
		prev = p;
	}

	p = head;
	while(p!=NULL)
	{
		printf("%d ",p->data);
		p = p->next;
	}


	return 0;
}