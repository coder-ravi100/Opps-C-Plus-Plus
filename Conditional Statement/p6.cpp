/*
Write a C++ program to check whether a character is an alphabet, 
digit, or special character.
Test Data: @
Expected Output:
This is a special character.
*/
#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"Enter the Value :";
	cin>>ch;
	if((ch >= 'A' && ch <= 'Z') || ( ch >= 'a' && ch <= 'z'))
	{
		cout<<"This Is a Alphabate :"<<ch;
	}
	else if(ch >='0' && ch <='9')
	{
		cout<<"This is a Number :"<<ch;
	}
	else
	{
		cout<<"This Is a Special Charecter :"<<ch;
	}
	return 0;
}
