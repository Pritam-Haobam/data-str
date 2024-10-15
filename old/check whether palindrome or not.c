#include<stdio.h>
int main()
{
	int i,j,sum=0,x;
	printf("Input a number: ");
	scanf("%d",&i);
	for(x=i;i!=0;i=i/10)
	{
		j=i%10;
		sum=sum*10+j;
	}
	if(x==sum)
		printf("%d is a palindrome number.\n",x);
	else
		printf("%d is not a palindrome number.\n",x);
}
