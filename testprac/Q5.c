#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct student
{
	char name[50];
	int age;
	int cgpa;
	char roll[20];
}stud;

int main()
{
	printf("Welcome to Students detail page!!\n");
	printf("Enter the number of departments in the institute\n");
	int M,i;
	scanf("%d",&M);
	struct student **A;
	int ndep_stu[M];
	A = (struct student **)malloc(M * sizeof(struct student));
	printf("Enter the number of students in each department\n");
	
	for(i=0;i<M;i++)
	{
		printf("Enter the no .of student in department %d\n",(i+1));
		int S;
		scanf("%d",&S);
		ndep_stu[i] = S;
		A[i] = (struct student *)malloc(S*sizeof(struct student));
		int j=0;
		for(j=0;j<S;j++)
		{
			printf("Enter the student details of (%d)\n",(j+1));
			printf("Enter the name\n");
			scanf("%s",A[i][j].name);
			printf("Enter the age\n");
			scanf("%d",&A[i][j].age);
			printf("Enter the cgpa\n");
			scanf("%d",&A[i][j].cgpa);
			printf("Enter the Roll\n");
			scanf("%s",A[i][j].roll);

		}
	}

	printf("----------DETAILS--------\n");
	printf("Printing details of Topper in each department\n");
	int maxcg[M];
	i=0;
	int j;
	for(i=0;i<M;i++)
	{
		maxcg[i] = A[i][0].cgpa;
		for(j=1;j<ndep_stu[i];j++)
		{
			if((A[i][j].cgpa)>maxcg[i])
				maxcg[i] = A[i][j].cgpa;
		}
	}
	for(i=0;i<M;i++)
	{
		for(j=0;j<ndep_stu[i];j++)
		{
			if((A[i][j].cgpa)==maxcg[i])
			{
				printf("Topper--\n");
				printf("Name %s Roll %s Age %d CGPA %d\n",A[i][j].name,A[i][j].roll,A[i][j].age,A[i][j].cgpa);
			}
		}
	}
	struct student instop;
	strcpy(instop.name , A[0][0].name);
	strcpy(instop.roll , A[0][0].roll);
	instop.age = A[0][0].age;
	instop.cgpa = A[0][0].cgpa;
	for(i=0;i<M;i++)
	{
		for(j=1;j<ndep_stu[i];j++)
		{
			if((A[i][j].cgpa)>(instop.cgpa))
			{
				strcpy(instop.name,A[i][j].name);
				strcpy(instop.roll,A[i][j].roll);
				instop.age = A[i][j].age;
				instop.cgpa = A[i][j].cgpa;
			}
		}
	}
	printf("INSTITUTE TOPPPER!!\n");
	printf("Name %s Roll %s Age %d CGPA %d\n",instop.name,instop.roll,instop.age,instop.cgpa);
	return 0;
}