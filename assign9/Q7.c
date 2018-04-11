#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};

int main()
{
	printf("Enter the values in the link list\n");
	int i,j,n;
	struct node *head=NULL, *p,*prev;
	//head = (struct node *)malloc(sizeof(struct node));
	printf("Enter the size of link list\n");
	scanf("%d",&n);
	//Accept the elements
	for(i=0;i<n;i++)
	{
		p = (struct node *)malloc(sizeof(struct node));
		printf("Enter the value\n");
		scanf("%d",&p->data);
		p->next = NULL;
		if(head==NULL){head = p;}
		else prev->next = p;
		prev = p;
	}
	//Print the elements

	printf("JJJJJJJJ\n");
	struct node *pp = head;
	while(pp!=NULL)
	{
		printf("%d\n",pp->data);
		pp = pp->next;
	}
	//Searching a given element
	printf("Enter the element to be searched!..\n");
	scanf("%d",&j);
	p = head;
	while(p!=NULL)
	{
		if(p->data == j){
			i = 0;
			printf("Present\n");}
		p = p->next;
	}
	if(i!=0)
		printf("Absent\n");
	return 0;

}