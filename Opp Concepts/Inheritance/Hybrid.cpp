/*Hybrid Inheritance*/
#include<iostream>
using namespace std;
class parent
{
    public:
    void display1()
    {
        cout<<"\n This is a Parent class";
    }
};
class Brother :public parent
{
    public:
    void display2()
    {
        cout<<"\n This is a Brother class";
    }
};
class sister :public parent
{
    public:
    void display3()
    {
        cout<<"\n This is a Sister Class";
    }
};
class child :public Brother
{
    //code
};
class Nephew :public sister
{
    //code
};
int main()
{
    child c;
    c.display1();
    c.display2();
    Nephew n;
    n.display1();
    n.display3();
    return 0;
}