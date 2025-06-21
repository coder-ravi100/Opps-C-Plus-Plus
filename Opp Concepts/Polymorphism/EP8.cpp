/*Function Overriding + Inheritance*/
#include<iostream>
using namespace std;
class GrandParent
{
    public:
    void display()
    {
        cout <<"\n Hello From GrandParent Class";
    }
};
class Parent : public GrandParent
{
    public:
    void display()
    {
        cout <<"\n Hello From Parent Class";
    }
};
class child :public  Parent
{
    public:
    void display()
    {
        cout <<"\n Hello From Child Class";
    }
};
int main()
{
    child c;
    c.display();
    return 0;
}
