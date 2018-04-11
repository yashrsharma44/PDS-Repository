#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};

int main()
{
	struct node *head=NULL;
	printf("Enter 1 to insert a node at front, 2 to print the linked list, 3 to search for an element, 4 to insert at the end, 5 to insert at sorted order, 6 to delete the list, and 7 to exit\n");
	while(1)
	{
		printf("Enter the option\n");
		int n;
		scanf("%d",&n);
		if(n==1)
		{
			struct node *temp,*prev;
			temp = (struct node *)malloc(sizeof(struct node));
			printf("Enter the data\n");
			scanf("%d",&temp->data);
			temp->next = NULL;
			if(head==NULL){
				
				head = temp;
			}
			
			else
			{
				prev->next = temp;
				
			}
			prev= temp;
			
		}
		else if(n==2)
		{
			struct node *temp=head;
			while(temp!=NULL)
			{
				printf("%d->",temp->data);
				temp = temp->next;
			}
		}
		else if(n==3)
		{
			printf("Enter the value to be searched \n");
			int val,flag=0;
			scanf("%d",&val);
			struct node *temp=head;
			while(temp!=NULL)
			{
				if(temp->data == val)
				{
					printf("Data is Present\n");
					flag=1;
					break;
				}
				temp = temp->next;
			}
			printf("h");
			if(!flag)
				printf("Data is absent\n");

		}
		else if(n==4)
		{
			printf("Enter the data to be inserted at the end\n");
			int val;
			scanf("%d",&val);
			struct node *temp = head, *r;
			r = (struct node *)malloc(sizeof(struct node));
			while(temp!=NULL)
				temp = temp->next;
			r->data = val;
			r->next = NULL;
			temp->next = r;



		}
		else if(n==5)
		{
			printf("Insert in ascending order\n");

		}
		else if(n==6)
		{
			printf("Delete the list\n");
		}
		else if(n==7)
		{
			printf("Exiting ...\n");
			break;
		}

	}
}