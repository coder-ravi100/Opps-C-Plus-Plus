#include<iostream>
using namespace std;
//Simple Inheritance 
class parent //base class
{
    public:
    void display()
    {
        cout<<"\n Hello Form Parent Class";
    }
};
class child :public parent //class child use property in parent //Derived class
{
    /*code*/
};
int main()
{
    child c;
    c.display();
    return 0;
}