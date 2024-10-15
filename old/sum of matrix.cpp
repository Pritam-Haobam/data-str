#include<stdio.h>
int main()
{
	int i,j,a[10][10],b[10][10],r,c,sum[10][10];
	printf("Enter the number of rows:");
	scanf("%d",&r);
	printf("Enter the number of columns:");
	scanf("%d",&c);
	printf("Enter the elements of the first matrix:\n");
	for(i=0;i<r;++i)
		for(j=0;j<c;++j)
		{
			printf("Enter element a%d%d: ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	printf("Enter the elements of the second matrix:\n");
	for(i=0;i<r;++i)
		for(j=0;j<c;++j)
		{
			printf("Enter element a%d%d: ",i+1,j+1);
			scanf("%d",&b[i][j]);
		}
	for(i=0;i<r;++i)
		for(j=0;j<c;++j)
		{
			sum[i][j]=a[i][j]+b[i][j];
		}	
	printf("\nSum of two matrices: \n");
	for(i=0;i<r;++i)
		for(j=0;j<c;++j)
		{
			printf("%d\t\t",sum[i][j]);
			if(j==c-1)
			{
				printf("\n\n");
			}
		}
	return 0;		
}
