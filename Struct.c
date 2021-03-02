#include<stdio.h>
struct student
{
	char name[30];
	int reg;
	char branch[5];
};
int main()
{
	struct student student1,student2,student3;
	//student1=("Pritam",116,"CSE");
	printf("Enter the details of the second student ");
	scanf("%s",&student1.name);
	scanf("%d",&student1.reg);
	scanf("%s",&student1.branch);
}
