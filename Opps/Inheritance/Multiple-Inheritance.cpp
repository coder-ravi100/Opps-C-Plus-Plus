#include<iostream>
using namespace std;
//Multiple Inheritance
class Father
{
    public:
            void display1()
            {
                cout<<"\n Hello From Father Class";
            }
};
class Mother
{
    public:
    void  display2()
    {
        cout<<"\n Hello From Mother Class";
    }
};
class child :public Father, public Mother
{
    /*Code*/
};
int main()
{
    child c;
    c.display1();
    c.display2();
    return 0;
}