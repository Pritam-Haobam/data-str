#include<stdio.h>
int main()
{
	int i,n,temp=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			if(n==i)
			continue;
			temp+=i;
		}
	}
	if(n==temp)
	{
		printf("%d is a perfect number.",n);
	}
	else
	{
		printf("%d is not a perfect number.",n);
	}
}
