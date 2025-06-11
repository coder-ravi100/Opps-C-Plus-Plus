/*Multi-Level Inheritance*/
#include<iostream>
using namespace std;
class GrandParent
{
    public:
    void display1()
    {
        cout<<"\nThis is a GrandParent Class";
    }
};
class parent :public GrandParent
{
    public:
    void display2()
    {
        cout<<"\nThis is a Parent Class";
    }
};
class child :public parent
{
    public:
    void display3()
    {
        cout<<"\nThis Is a child Class";
    }
};
class GrandChild :public child
{
    //Code
};
int main()
{
    GrandChild gc;
    gc.display1();
    gc.display2();
    gc.display3();

    child c;
    c.display1();
    c.display2();
    c.display3();

    parent p;
    p.display1();
    p.display2();

    GrandParent gp;
    gp.display1();
    return 0;
}