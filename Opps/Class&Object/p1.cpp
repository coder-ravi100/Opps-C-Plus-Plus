#include<iostream>
using namespace std;
class demo
{
    public:
    int roll;
    string name;
};
int main()
{
    demo d;
    cout<<"\n Enter the Roll Number =";
    cin>>d.roll;
    cout<<"\n Enter the Name =";
    cin>>d.name;
    cout<<"\nRoll Number Is = "<<d.roll;
    cout<<"\nName Is = "<<d.name;
    return 0;
}