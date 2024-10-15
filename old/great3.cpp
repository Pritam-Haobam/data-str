#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	cout<<"Enter the value of i: ";
	cin>>i;
	cout<<"Enter the value of j: ";
	cin>>j;
	cout<<"Enter the value of k: ";
	cin>>k;
	if(i>j&&i>k)
	{
		cout<<i<<" is the greatest";
	}
	else if(j>i&&j>k)
	{
		cout<<j<<" is the greatest";
	}
	else
	{
		cout<<k<<" is the greatest";
	}
}
