#include<stdio.h>
struct emp
{
	int age,phone_no,salary;
	char name[25];
}emp[20];
void main()
{
	int i,n;
	printf("Enter the no of employees\n");
	scanf("%d",&n);
	printf("Enter info as name, age, phone number, salary\n");
	for(i=0;i<n;i++)
	{
		scanf("%s %d %d %d",&emp[i].name,&emp[i].age,&emp[i].phone_no,&emp[i].salary);
	}
	printf("\nEMP_NAME\tEMP_AGE\t\tEMP_PHONE_NO\tEMP_SALARY");
	for(i=0;i<n;i++)
	{
		printf("\n%s\t\t%d\t\t%d\t%d\n",emp[i].name,emp[i].age,emp[i].phone_no,emp[i].salary);
	}
}
