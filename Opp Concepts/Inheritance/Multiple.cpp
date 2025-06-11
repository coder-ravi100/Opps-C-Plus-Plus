/*Muptile Inheritance*/
#include<iostream>
using namespace std;
class Father
{
    public:
    void display1()
    {
        cout<<"\n This is a Father Class";
    }
};
class Mother 
{
    public:
    void display2()
    {
        cout<<"\n This is a Mother Class";
    }
};
class child  :public Father ,public Mother//comma means two class ki property Ek hi class use kar raha hai
{
    //code
};
int main()
{
    child c;
    c.display1();
    c.display2();
    return 0;
}