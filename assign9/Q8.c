#include<stdio.h>
#include<stdlib.h>

//Create,insert, print, 

struct node 
{
	int data;
	struct node *next;

};


struct node *createLinkList(struct node *head,int size)
{
	struct node *p,*prev,*q;

	p = head;
	int i;
	for(i=0;i<size;i++)
	{
		q= (struct node*)malloc(sizeof(struct node));
		printf("Enter the data\n");
		scanf("%d",&q->data);
		q->next = NULL;
		if(p==NULL)p=q;
		else prev->next = q;
		prev = q;
	}
	return p;
}

void printLinkList(struct node *head)
{
	printf("Printing the Values in the Link List\n");
	struct node *p = head;
	while(p!=NULL)
	{
		printf("%d-->",p->data);
		p = p->next;
	}
	printf("\n");
}

struct node *insertNodeFront(struct node *head)
{
	struct node *q, *p = head;
	q = (struct node *)malloc(sizeof(struct node));
	printf("Enter the element\n");
	scanf("%d",&q->data);
	q->next = p;
	return q;
}

struct node *insertNodeBack(struct node *head)
{
	struct node *q, *p = head;
	q = (struct node *)malloc(sizeof(struct node));
	while(p->next!=NULL)
		p = p->next;
	printf("Enter the element to be inserted at the back\n");
	scanf("%d",&q->data);
	q->next = NULL;
	p->next = q;
	return head;
}

void searchElement(struct node *head, int val)
{
	struct node *p=head;
	int flag;
	while(p!=NULL)
	{
		if(p->data == val)
		{
			printf("Present\n");
			flag=1;
		}
		p = p->next;
	}
	if(flag!=1)
		printf("Absent\n");
}


int main()
{
	printf("Link List Function..\n");
	printf("Enter the number to be inserted\t");
	printf("Enter option 1 for creating list,\t option 2 to print, option 3 for inserting node at front,\toption 4 for inserting at the back,\toption 5 for searching a given element,\toption 6 for deleting a given element,\toption 7 for exiting from the menu driven program!..\n ");
	struct node *head=NULL;
	while(1)
	{
		int n;
		printf("Enter the Option..\n");
		scanf("%d",&n);
		if(n==1)
		{
			printf("Enter the initial size of list\n");
			int size;
			scanf("%d",&size);
			
			head = createLinkList(head,size);
			printf("Created\n");
		}
		else if(n==2)
		{
			printf("Printing Link List..\n");
			printLinkList(head);
		}
		else if(n==3)
		{
			//printf("Enter the value to be inserted at front\n");
			//int value;
			//scanf("%d",&value);
			head = insertNodeFront(head);
		}
		else if(n==4)
		{
			//printf("Enter the value to be inserted at the bottom of list\n");
			//int value;
			//scanf("%d",&value)
			head = insertNodeBack(head);
		}
		else if(n==5)
		{
			printf("Enter the element to be searched..\n");
			int value;
			scanf("%d",&value);
			searchElement(head,value);
		}
		else if(n==6)
		{
			printf("Element to be deleted\n");

		}
		else 
		{
			printf("Exiting from the loop..\n");
			break;
		}

	}


}