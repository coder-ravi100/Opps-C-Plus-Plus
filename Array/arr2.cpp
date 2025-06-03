/*Write a c++ program to take 2 arrays from the user 
and merge them in third array*/
#include<iostream>
using namespace std;
int main()
{
	int a[100],b[100],c[200],sizea,sizeb,i;
	cout<<"\n Enter the size of A = [200] :";
	cin>>sizea;
	for(i=0;i<sizea;i++)
	{
		cout<<"\n Enter The Element of A ["<<i<<"]";
		cin>>a[i];
		c[i] = a[i];	
	}	
	cout<<"\n Enter the size of B = [200] :";
	cin>>sizeb;
	for(i=0;i<sizeb;i++)
	{
		cout<<"\n Enter The Element of B ["<<i<<"]";
		cin>>b[i];	
	}
	cout<<"\n Array A :";
	for(i=0;i<sizea;i++)
	{
		cout<<a[i]<<" ";	
	}
	cout<<"\n Array B :";
	for(i=0;i<=sizeb;i++)
	{
		cout<<b[i]<<" ";
	}	
	for(i=0;i<sizeb;i++)
	{
		c[sizea] =b[i];
		sizea++;
	}
	cout<<"\n Array C:";
	for(i=0;i<sizea;i++)
	{
		cout<<c[i]<<" ";
	}
	return 0;
}
