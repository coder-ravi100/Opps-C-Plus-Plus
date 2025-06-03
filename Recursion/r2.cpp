#include<iostream>
using namespace std;
int fact(int num)
{
	if(num!=0)
	{
		return num *  fact(num-1);
	}
	else
	{
		return 1;
	}
}
int main()
{
	int num;
	cout<<"Enter the number =";
	cin>>num;
	int answer  =  fact(num);
	cout<<"\n Factorial of"<<num<<" is ="<<answer;
	return  0;
	return 0;
}
