#include <stdio.h>
#include <stdlib.h>
typedef struct node {
int data ;
struct node *next ;
} node, *list ;
int printList(list);
int printListR(list);
int printListO(list);
	int main() 
	{ // selfRef5.c
		list l=NULL, current=NULL;
		int n, data;
		printf("Enter data, terminate by Ctrl+D\n");
		if(scanf("%d", &data) != EOF)
		{
			l = (list)malloc(sizeof(node));
			l->data = data;
			current = l;
			printf("--OVER--\n");
			while(scanf("%d", &data) != EOF)
			{
				current -> next = (list)malloc(sizeof(node));
				current = current -> next;
				current->data = data;
			} // First data is at the head of the list
		}
		if(current) current -> next = NULL;
		printf("Input data are: ");
		// n = printList(l);
		// n = printListR(l);
		n = printListO(l);
		//putchar(’\n’);
		printf("Data count: %d\n", n);
		return 0;
		}
	int printList(list l)
	{
		int count=0;
		while(l)
		{
		printf("%d ", l->data);
		l = l -> next;
		++count;
		}
		return count;
	}
	int printListR(list l)
	{
		if(l)
		{
			printf("%d ", l->data);
			return printListR(l->next) + 1;
		}
		return 0;
	}
	int printListO(list l)
	{
		if(l)
		{
			int temp = printListO(l->next) + 1;
			printf("%d ", l->data);
			return temp;
		}
		return 0;
	} // selfRef5.c