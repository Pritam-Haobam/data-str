#include<stdio.h>
int main()
{
	int *pa[3];
	int i,a=5,b=6,c=7;
	pa[0]=&a;
	pa[1]=&b;
	pa[2]=&c;
	for(i=0;i<3;i++)
	{
		printf("pa[%d]%p\n",i,pa[i]);
		printf("pa[%d]%p\n",i,*pa[i]);
	}
}
