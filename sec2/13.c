#include<stdio.h>
int main()
{
	int i,n,lar,temp=1;
	for(i=1;i<=10;i++)
	{
		printf("Enter number %d: ",i);
		scanf("%d",&n);
		if(temp>n)
		lar=temp;
		else
		temp=n;
	}
	if(n>lar)
		printf("%d is the largest.",n);
	else
		printf("%d is the largest.",lar);
}
