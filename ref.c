#include<stdio.h>
void swap(int a, int b)
{
    int i;
    i=b;
    b=a;
    a=i;
    printf("Values of\n a=%d\n  b=%d\n",a,b);
}
int main()
{
    int x,y;
    printf("Enter the values of x and y\n");
    scanf("%d%d",&x,&y);
    printf("Before swapping\nx=%d\ny=%d\n",x,y);
    swap(x,y);
    printf("After swapping\nx=%d\ny=%d\n",x,y);
    return 0;
}

