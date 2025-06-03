//program 4:Write a c++ program to find whether a given year is  a leap year or not.
#include<iostream>
using namespace std;
int main()
{
	int year;
	cout<<"Enter the Year:";
	cin>>year;
	if(year %4 == 0 && year %100 != 0 || year %400 == 0)
	{
		cout<<"Leap year:"<<year;
	}
	else
	{
		cout<<"Not  Leap Year:"<<year;
	}
	return 0;
}
