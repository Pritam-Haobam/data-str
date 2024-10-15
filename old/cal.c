#include<stdio.h>
int main()
{
	char operator;
	float i,j;
	printf("Enter an operator: ");
	scanf("%c", &operator);
	printf("Enter two operands");
	scanf("%f %f", &i,&j);

	switch(operator){
		case '+':
			printf("%f + %f = %f",i,j,i+j);
			break;
		case '-':
			printf("%f - %f = %f",i,j,i-j);
			break;
		case '*':
			printf("%f * %f = %f",i,j,i*j);
			break;
		case '/':
			printf("%f / %f = %f",i,j,i/j);
			break;
		default:
			printf("Error! Operator is not correct");
	}
	return 0;
}


