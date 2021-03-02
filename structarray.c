#include<stdio.h>
struct student
{
	char name[30];
	int reg;
	char branch[5];
};
int main()
{
	struct student[10];
	int i;
	for(i=0;i<10;i++)
	{
	printf("Enter the details of all the students");
	scanf("%s",&student[i].name);
	scanf("%d",&student[i].reg);
	scanf("%s",&student[i].branch);
	}
	for(i=0;i<10;i++)
	{
		printf("%s %d %s",&std[i].name,&std[i].reg,&std[i].branch);
	}
}
