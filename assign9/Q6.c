#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Student
{
	int roll;
	int age;
	char name[20];
	struct Student *next;
};

void display_list(struct Student *head)
{
	struct Student *p;
	p=head;
	while(p!=NULL)
	{
		printf("{%s %d %d}\n",p->name,p->age,p->roll);
		p = p->next;
	}
}

int main()
{
	printf("Hello to the link list !!\n");
	printf("Enter the details as follows!..\n");
	int i;
	struct Student *head=NULL, *p, *prev;
	//head = (struct Student *)(malloc(sizeof(struct Student)));
	printf("Enter the number of Students!..\n");
	int n=5;
	//scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		p = (struct Student *)malloc(sizeof(struct Student));
		printf("Enter the name\n");
		scanf("%s",p->name);
		printf("Enter the roll\n");
		scanf("%d",&p->roll);
		printf("Enter the age\n");
		scanf("%d",&p->age);
		p->next = NULL;
		printf("Name %s\n",p->name);
		printf("Updated List..\n");
		if(head == NULL){
			head=p;
			printf("I %d",i);}
		else prev->next = p;
		prev = p;
		display_list(head);

	}
}