#include<iostream>
using namespace std;
int main()
{
	int *a=new int(50);
	int *b=new int[5];
	int i;
	cout<<"Enter array elements:\n";
	for(i=0;i<5;i++)
	cin>>*(b+i);
	cout<<"Array elements are ";
	for(i=0;i<5;i++)
	cout<<"\n"<<*(b+i);
	cout<<"\nValue of a is: "<<*a;
	delete a;
	delete[]b;
	return 0;
}
