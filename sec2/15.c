#include<stdio.h>
int main()
{
	float x,sum=1,term;
	int fact=1,i,n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	inp1: printf("Enter the value of x: ");
	scanf("%f",&x);
	if((x>0)&&(x<1))
	{
	for(i=1;i<=n;i++)
		{
			fact*=i;
			term=(x*(float)n)/fact;
			sum=sum+term;
		}
	}
	else
	{
		printf("Value of x should be between 1 and 0.\n");
		goto inp1;
	}
	printf("The sum of the series is %.2f",sum);
	return 0;
}
