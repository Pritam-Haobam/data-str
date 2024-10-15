#include<stdio.h>
#include<stdlib.h>
main()
{
	int *p,n,i;
	printf("Enter the number of integers to be stored ");
	scanf("%d",&n);
	p=(int *)malloc(n*sizeof(int));
	if(p==NULL)
	{
		printf("Memory is not available");
		exit(1);
	}
	for(i=0;i<n;i++)
	{
		printf("Enter the integer");
		sacnf("%d",p+i);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",*(p+i));
	}
}
