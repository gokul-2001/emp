#include<stdio.h>
#include<stdlib.h>
struct employee {
	char name[50];
	int age;
	int phone_no;
	float salary;
    struct employee *next;
};
int main()
{
	struct employee emp;
	int i=0;
	printf("ENTER DETAILS OF EMPLOYEES");
	for(i=0;i<=20;i++)
	{
		printf("\n\nName:-");
		scanf("%s",&emp.name);
		printf("Age:-");
		scanf("%d",&emp.age);
		printf("Phone no:-");
		scanf("%d",&emp.phone_no);
		printf("Salary:-");
		scanf("%f",&emp.salary);
	}
	printf("DETAILS OF ALL EMPLOYEE");
	for(i=0;i<=20;i++)
	{
		printf("\nNAME\t\tAGE\t\tPHONE NO\t\tSalary",emp.name,emp.age,emp.phone_no,emp.salary);
	}
	return 0;
}
