//Write a program in C++ to find the sum of the digits of a given number.
#include<iostream>
using namespace std;
int main()
{
		int num;
		int digit=0,sum=0;
		cout<<"Enter The Number :";
		cin>>num;
		while(num!=0)
		{
			num = num/10;
			sum = sum + num;
			digit++;
		}
		cout<<"Digits ="<<digit;
	return 0;
}
