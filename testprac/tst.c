#include<stdio.h>
#include<stdlib.h>

struct node{
	
	int vot;
	struct node *next;
};

struct node *addPerson(struct node *queue)
{
	printf("Enter the Voter ID\n");
	struct node *temp;
	temp = (struct node *)malloc(sizeof(struct node));
	scanf("%d",&temp->vot);
	temp->next = queue;
	return temp;

}
int main()
{
	struct node *head=NULL;
	printf("Enter 1 to push and 2 print\n");
	while(1)
	{
		printf("Enter\n");
		int n;
		scanf("%d",&n);
		if(n==1)
		{
			head = addPerson(head);
		}
		else if(n==2)
		{
			struct node *t = head;
			while(t!=NULL)
			{
				printf("%d ->",t->vot);
				t = t->next;
			}
		}
		else if(n==3)
		{
			printf("Exiting\n");
			break;
		}
	}
}