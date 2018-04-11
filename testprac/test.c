#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
	int pow;
	int coef;
	struct Node* next;
}node;

node* head;
node* read_poly()
{
	node* temp;
	temp = (node*)malloc(sizeof(node));
	int co,po;
	printf("Enter the Coefficiennt and power\n");
	scanf("%d%d",co,po);
	temp->pow = po;
	temp->coef = co;
	temp->next = head;
	return temp;
	
}

void print_poly(node* head)
{
	node *p=head;
	printf("List={");
	while(p!=NULL){
		printf("(%d^%d)+",p->coef,p->pow);
		
		p = p->next;
	}
	printf("}\n");
}


int main()
{
	printf("Enter the Values of Polynomials as follows\n");
	head = NULL;
	printf("Enter the values of coeff and pow. Enter 999 to exit\n");
	int val=0;
	scanf("%d",&val);
	while(val!=999)
	{
	read_poly();
	
	print_poly(head);
	}
	return 0;
}