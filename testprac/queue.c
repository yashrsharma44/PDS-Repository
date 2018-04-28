#include<stdio.h>
#include<stdlib.h>

struct node{
	char name[20];
	int vot;
	struct node *next;
};

struct node *queueA=NULL, *queueB=NULL, *queueC=NULL;

void displayQueue(struct node *queue)
{
	struct node *temp = queue;
	if(temp!=NULL)
	{
	printf("---------------\n");
	while(temp!=NULL)
	{
		
		printf("Name : %s Voter ID: %d\n",temp->name,temp->vot);
		temp = temp->next;
	}
	printf("---------------\n");
	}
	else printf("EMPTY\n");	
}

int displayNumber(struct node *queue)
{
	int n=0;
	struct node *temp=queue;
	while(temp!=NULL)
	{
		n++;
		temp = temp->next;
	}
	return(n);
}

struct node *addPerson(struct node *queue)
{
	printf("Enter the Name and Voter ID\n");
	struct node *temp;
	temp = (struct node *)malloc(sizeof(struct node));
	scanf("%s%d",temp->name,&temp->vot);
	temp->next = queue;
	return temp;

}

void enqueue(struct node *queueA,struct node *queueB,struct node *queueC)
{
	
	

	int a = displayNumber(queueA);
	int b = displayNumber(queueB);
	int c = displayNumber(queueC);
	printf("a %d b %d c %d\n",a,b,c);
	int min = a;
	int dig = 1;
	if(b<min)
	{
		if(c<min)
		{
			dig = 3;
		}
		else
			dig = 2;
	}
	if(dig==1){
		printf("In dig A\n");
		queueA = addPerson(queueA);
	}
	else if(dig==2){
		queueB = addPerson(queueB);
	}
	else{
		queueC = addPerson(queueC);
	}

	

}

void dequeue(struct node *queue)
{
	struct node *temp = queue, *prev;
	while(temp!=NULL)
	{
		prev = temp;
		temp = temp->next;

	}
	
	
	free(prev);
	
}

int main()
{
	struct node *queueA=NULL, *queueB=NULL, *queueC=NULL;
	printf("There are 3 queues present.Choose the following options\n");
	printf("Option 1 for displaying members for 3 queues\n");
	printf("Option 2 for displaying the number of members in each queue\n");
	printf("Option 3 for adding queue to the shortest queue\n");
	printf("Option 4 for removing member from a given queue\n");
	printf("Option 5 for exit\n");
	while(1)
	{
		printf("-------------------\n");
		printf("Enter the option\n");
		int n;
		scanf("%d",&n);
		if(n==1)
		{	
			printf("-------------------\n");
			printf("QueueA\n");
			displayQueue(queueA);
			printf("QueueB\n");
			displayQueue(queueB);
			printf("QueueC\n");
			displayQueue(queueC);
			printf("-------------------\n");
		}
		else if(n==2)
		{
			printf("-------------------\n");
			printf("QueueA ");
			printf("%d\n",displayNumber(queueA));
			printf("QueueB ");
			printf("%d\n",displayNumber(queueB));
			printf("QueueC ");
			printf("%d\n",displayNumber(queueC));
			printf("-------------------\n");
		}
		else if(n==3)
		{
			int a = displayNumber(queueA);
	int b = displayNumber(queueB);
	int c = displayNumber(queueC);
	printf("a %d b %d c %d\n",a,b,c);
	int min = a;
	int dig = 1;
	if(b<min)
	{
		if(c<min)
		{
			dig = 3;
		}
		else
			dig = 2;
	}
	if(dig==1){
		printf("In dig A\n");
		queueA = addPerson(queueA);
	}
	else if(dig==2){
		queueB = addPerson(queueB);
	}
	else{
		queueC = addPerson(queueC);
	}
			printf("Display QUEUE A\n");

			struct node *temp = queueA;
	if(temp!=NULL)
	{
	printf("---------------\n");
	while(temp!=NULL)
	{
		
		printf("Name : %s Voter ID: %d\n",temp->name,temp->vot);
		temp = temp->next;
	}
	printf("---------------\n");
	}
	else printf("EMPTY\n");	

		}
		else if(n==4)
		{
			printf("Enter option no. of which queue needs to release a person\n");
			int n;
			scanf("%d",&n);
			if(n==1)
			{
				dequeue(queueA);
			}
			if(n==2)
			{
				dequeue(queueB);
			}
			if(n==3)
			{
				dequeue(queueC);
			}
		}
		else if(n==5)
		{
			printf("Exiting..\n");
			break;
		}
	}
	return 0;
}