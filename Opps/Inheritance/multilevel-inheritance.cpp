#include<iostream>
using namespace std;
//Multi-Level Inheritance
class GrandParent //Base class
{
    public:
            void display1()
            {
                cout<<"\n Hello From GrandParent  Class";
            }
};
class parent :public GrandParent
{
    public:
            void display2()

            {
                cout<<"\n Hello From Parent  Class";
            }
};
class child :public parent
{
    public:
            void display3()
            {
                cout<<"\n Hello From Child  class";
            }
};
class GrandChild :public child
{
    void display4()
    {
        /*code for next level*/
    }
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
    return 0;
}