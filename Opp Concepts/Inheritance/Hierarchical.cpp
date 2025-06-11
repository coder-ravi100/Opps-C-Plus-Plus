/*Hierarchical Inheritance*/
#include<iostream>
using namespace std;
class  parent
{
    public:
    void display()
    {
        cout<<"\n This is a Parent Class";
    }
};
class Brother :public parent
{
    //code
};
class Sister :public parent
{
    //code
};
int main()
{
    Brother b;
    b.display();
    Sister s;
    s.display();
    return 0;
}