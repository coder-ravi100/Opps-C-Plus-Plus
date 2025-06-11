/*Single Inheritance*/
#include<iostream>
using namespace std;
class parent
{
    public:
    void display()
    {
        cout<<"\nThis Is a Parent Class";
    }
};
class child :public parent
{
    /*
    public:
    void display1()
    {
        cout<<"\nThis Is a Child Class";
    }*/
};
int main()
{
    child c;
    c.display();
//child Class Khud ki Property Use Nahi kar sakta
    return 0;
}