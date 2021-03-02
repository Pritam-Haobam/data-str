#include<stdio.h>
int main()
{
	int i,j,k;
	printf("Enter the numbers:");
	scanf("%d %d %d",&i,&j,&k);
	if(i>j && i>k)
	{
		printf("%d is the greatest",i);
	}
	else if(j>i && j>k)
	{
		printf("%d is the greatest",j);
	}
	else
	{
		printf("%d is the greatest",k);
	}
	return 0;
}
