#include<iostream>
using namespace std;
//Hybrid Inheritance
class parent
{
    public:
            void display1()
            {
                cout<<"\n Hello  From Parent  Class";
            }
};
class Brother :public parent
{
    public:
            void display2()
            {
                cout<<"\n Hello From Brother Class";
            }
};
class Sister :public parent
{
    public:
            void display3()
            {
                cout<<"\n Hello From Sister Class";
            }
};
class Child :public Brother
{
    /*Code*/
};
class Nephew :public Sister
{
    /*Code*/
};
int main()
{
    Child c;
    c.display1();
    c.display2();
    Nephew n;
    n.display1();
    n.display3();
    return 0;
}