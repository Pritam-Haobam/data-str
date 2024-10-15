#include<stdio.h>
#include<ctype.h>
int main()
{
	char c;
	inp1: printf("Enter a Character: ");
	scanf(" %c",&c);
	if(isalpha(c))
	{
		switch(c)
		{
			case 'a':
			case 'A':
			case 'e':
			case 'E':
			case 'i':
			case 'I':
			case 'o':
			case 'O':
			case 'u':
			case 'U':
				printf("%c is a vowel.",c);
				break;
			default:
				printf("%c is a consonant.",c);
				break;
		}
	}
	else if(isdigit(c))
	{
		printf("Enter an Alphabet.\n");
		goto inp1;
	}
	else
	{
		printf("Enter an Alphabet.\n");
		goto inp1;
	}
}
