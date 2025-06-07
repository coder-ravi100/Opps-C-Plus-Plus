#include<iostream>
using namespace std;
class Demo
{
    private:
    int id;
    string name;
    public:
    Demo(int i,string n)
    {
        cout<<"\n Parameterized Constructor";
        id   = i;
        name = n;
    }
    Demo(Demo &obj)
    {
        cout<<"\n Copy Contructor";
        id   = obj.id;
        name = obj.name;
    }
    Demo()
    {
        cout<<"\n Default Contructor";
    }
    void display()
    {
        cout<<"\n id ="<<id;
        cout<<"\n Name ="<<name;
    }
};
int main()
{
    Demo d1(101,"Ravi");
    Demo d2(d1);
    d1.display();
    d2.display();
    return 0;
}