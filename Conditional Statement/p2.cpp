/*program 2:Write a C++ program to accept the height of a person in centimeters and 
categorize the person according to their height. If height is less than 150 
then display dwarf, if height is 150 or more than display that he is average 
heighted, if height is more than 200 then display taller.*/
#include<iostream>
using namespace std;
int main()
{
	int height;
	cout<<"Enter the Height :";
	cin>>height;
	if(height < 150)
	{
		cout<<"Dwarf:"<<height;
	}
	else if(height <= 150)
	{
		cout<<"Average :"<<height;
	}
	else if(height >= 200)
	{
		cout<<"Taller :"<<height;
	}
	
	return 0;
}

