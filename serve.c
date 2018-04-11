#include<stdio.h>
void serve(int num_tasks)
{
	static int server = 1;
	int taskid = 1;

	printf("Starting %d tasks\n",num_tasks);

	for(int i = 0; i<num_tasks;i++)
	{
		printf("Task %d - Server %d \n", taskid, server );
		++server;
		if(server>5)
			server= 1;
		taskid++;
	}
	printf("Done\n");
}
int main()
{
	serve(3);
	serve(4);
	return 0;
}