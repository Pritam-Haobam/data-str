#include<stdio.h>
int main()
{
	int n;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	int arr[n];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Reversed array is:\n");
	for(i=n-1;i>=0;i--)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}
