/* 1. Write a c++ program to take an array from the user 
and copy that in another array*/
#include<iostream>
using namespace std;
int main()
{
	int a[100],b[100],size,i;
	cout<<"Enter the Size of An Array [100]:";
	cin>>size;
	for(i=0;i<size;i++)
	{
		cout<<"Enter the Element of A ["<<i<<"]=";
		cin>>a[i];
		b[i] = a[i];
	}
	cout<<"\nArray A:";
	for(i=0;i<size;i++)
	{
		cout<<a[i];
	}
	cout<<"\nArray B:";
	for(i=0;i<size;i++)
	{
		cout<<b[i];
	}
	return 0;
}
