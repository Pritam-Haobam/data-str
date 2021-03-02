#include<stdio.h>
int main()
{
  int sales [5][3], i, j, total = 0;
  printf("Enter the data:\n");
  for(i=0;i<5;i++)
  {
    printf("Enter the sales of 3 items sold by salesman %d: ", i+1);
    for(j=0;j<3;j++)
      scanf("%d", &sales[i][j]);
  }
  for(i=0;i<5;i++)
  {
    total = 0;
    for(j=0;j<3;j++)
    {
      total+=sales[i][j];
    }
    printf("Total Sales By Salesman %d = %d\n", i+1, total);
  }
  for(i=0;i<3;i++)
  {
    total = 0;
    for(j=0;j<5;j++)
    {
      total += sales[j][i];
    }
    printf("Total sales of item %d = %d\n", i+1, total);
  }
  
  return 0;
}
