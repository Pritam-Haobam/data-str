#include<stdio.h>
int main()
{
	char c;
	int i,n1,n2;
	float res;
	do
	{
		inp1: printf("Choose any one of the following:\n1)+\n2)-\n3)/\n4)*\nPress 1 to exit the calculator\n");
		scanf(" %c",&c);
		switch(c)
		{
			case '+':
				printf("Enter the first number: ");
				scanf("%d",&n1);
				printf("Enter the second number: ");
				scanf("%d",&n2);
				res=n1+n2;
				printf("The sum of %d and %d is %.2f\n",n1,n2,res);
				break;
			case '-':
				printf("Enter the first number: ");
				scanf("%d",&n1);
				printf("Enter the second number: ");
				scanf("%d",&n2);
				res=n1-n2;
				printf("The difference of %d and %d is %.2f\n",n1,n2,res);
				break;
			case '/':
				printf("Enter the first number: ");
				scanf("%d",&n1);
				printf("Enter the second number: ");
				scanf("%d",&n2);
				res=(float)n1/(float)n2;
				printf("The division of %d and %d is %.2f\n",n1,n2,res);
				break;
			case '*':
				printf("Enter the first number: ");
				scanf("%d",&n1);
				printf("Enter the second number: ");
				scanf("%d",&n2);
				res=n1*n2;
				printf("The multiplication of %d and %d is %.2f\n",n1,n2,res);
				break;
			case '1':
				printf("You have exited successfully.");
				break;
			default:
				printf("Please choose the correct option\n");
				goto inp1;
				break;
		}
	}while(c!='1');
}
