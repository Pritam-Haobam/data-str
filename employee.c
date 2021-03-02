#include<stdio.h>
struct employee
{
	char name[30];
	int id;
	char address[100];
}e[15];
int main()
{
	int i;
	printf("Enter the details of the employees:\n");
	for(i=0;i<3;++i)
	{
		e[i].id=i+1;
		printf("\nFor id %d,\n",e[i].id);
		printf("Enter Name: ");
		scanf("%s",e[i].name);
		printf("Enter Address: ");
		scanf("%s",e[i].address);
	}
	printf("Displaying Information:\n\n");
	for(i=0;i<3;++i)
	{
		printf("\n id: %d\n",i+1);
		printf("Name: %s",e);
	}
}
