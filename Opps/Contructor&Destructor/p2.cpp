#include<iostream>
using namespace std;
class demo
{
    private:
    int id;
    string name;
    public:
    demo(int i, string n)
    {
        id = i;
        name = n;
    }
    demo()
    {

    }
    void display()
    {
        cout<<"\n  Id ="<<id;
        cout<<"\n  name ="<<name;
    }
};
int main()
{
    demo  d1(101,"ravi");
    d1.display();
    demo d2;
    demo d3(102,"syaam");
    d2.display();
    d3.display();
    return 0;
}