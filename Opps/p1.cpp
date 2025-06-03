#include<iostream>
using namespace std;
class student//class
{
    public://Accessible public
    int roll = 101;
    string name = "Ravi";
};
int main()
{
    student s;// 'S' object
    cout<<"\n Roll Number = "<<s.roll;
    cout<<"\n Name ="<<s.name;

    return 0;
}