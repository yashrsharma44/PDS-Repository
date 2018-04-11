#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct Student
{
	char name[50];
	int age;
	char roll[20];
	int cgpa;
}stud;

stud **acceptValue(stud **stu_dep_inst,int n_dep, int stu_arr[20])
{
	int i;
	
	for(i=0;i<n_dep;i++)
	{
		int n_stu=0,j;
		printf("Enter the number of students in Department--(__%d__)--",(i+1));
		scanf("%d",&n_stu);
		stu_arr[i] = n_stu;
		stu_dep_inst[i] = (stud *)(malloc(sizeof(n_stu)));
		printf("Enter the details of students in department--(%d)--",(i+1));
		for(j=0;j<n_stu;j++)
		{
			char n[50],r[20];
			printf("Enter the name of student\n");
			scanf("%s",n);
			strcpy(stu_dep_inst[i][j].name,n);
			printf("Enter the age of student\n");
			scanf("%d",&stu_dep_inst[i][j].age);
			printf("Enter the roll of student\n");
			scanf("%s",r);
			strcpy(stu_dep_inst[i][j].roll,r);
			printf("Enter the cgpa of student\n");
			scanf("%d",&stu_dep_inst[i][j].cgpa);
			
		}
	}
	return(stu_dep_inst);

}


int main()
{
	printf("Welcome to Insti-Dep details page\n");
	printf("Enter the Number of Departments in the institute\n");
	int n_dep;
	
	scanf("%d",&n_dep);
	int stu_arr[n_dep];
	stud **stu_dep_inst;
	stu_dep_inst = (stud **)(malloc(n_dep));
	
	printf("Allocated the array! Now enter the individual elements!\n");
	stud **acc_det;
	acc_det = acceptValue(stu_dep_inst, n_dep, stu_arr);
	printf("Details are printed are as follows\n");
	int i,j;
	for(i=0;i<n_dep;i++)
	{
		for(j=0;j<stu_arr[i];j++)
		{
			printf("Name %s\n",acc_det[i][j].name);
			printf("Age %d\n",acc_det[i][j].age);
			printf("Cgpa %d\n",acc_det[i][j].cgpa);
			printf("Roll %s\n",acc_det[i][j].roll);
		}
		printf("--------------------------------\n");
	}
	return 0;
}