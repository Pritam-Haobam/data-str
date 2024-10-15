#include<iostream>
using namespace std;
int main()
{
	int i,j,fact=1;
	cout<<"Enter the number: ";
	cin>>j;
	for(i=1;i<=j;i++)
	fact=fact*i;
	cout<<"The Factorial of "<<j<<" is "<<fact;
	return 0;
}
