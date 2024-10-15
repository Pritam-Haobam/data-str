#include<stdio.h>
#include<ctype.h>
float fer(float a);
float cel(float b);
int main()
{
	float x,y;
	char c;
	inp1: printf("Enter between C and F for temperature conversion: ");
	scanf(" %c",&c);
	if(isalpha(c))
	{
		switch(c)
		{
			case 'c':
			case 'C':
				printf("The temperature in Celcius is %.2f",cel(x));
				break;
			case 'f':
			case 'F':
				printf("The temperature in Fahrenheit is %.2f",fer(y));
				break;
			default:
				printf("Please enter either C or F.\n");
				goto inp1;
		}
	}
	else if(isdigit(c))
	{
		printf("Please enter either C or F.\n");
		goto inp1;
	}
	else
	{
		printf("Please enter either C or F.\n");
				goto inp1;
	}
}
float fer(float a)
{
	float x;
	printf("Enter the Temperature in Celcius: ");
	scanf("%f",&x);
	a=(x*9/5)+32;
	return a;
}
float cel(float b)
{
	float y;
	printf("Enter the Temperature in Fahrenheit: ");
	scanf("%f",&y);
	b=(y-32)*5/9;
	return b;
}
