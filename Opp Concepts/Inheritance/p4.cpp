/* Level 2: Intermediate Inheritance
Q3. Implement multilevel inheritance:
GrandParent → Parent → Child

Each class has its own data and display method.*/
#include<iostream>
using namespace std;
class GrandParent
{
    public:
    void display1()
    {
        cout <<"This GrandParent Class";
    }
};
class Parent :public GrandParent
{
    public:
    void display2()
    {
        cout <<"This  Parent  Class";
    }
};
class child :public Parent
{
    
};
int main()
{
    child  c;
    c.display1();
    c.display2();
}