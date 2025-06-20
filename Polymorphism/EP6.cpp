/*Function Overloading*/
#include<iostream>
using namespace std;
class shape
{
    public:
    //square circle rectangle triangle
    void display(int side)
    {
        cout <<"\n The Area Of Square is :" <<side*side;
    }
    void display(double radius)
    {
        cout <<"\n The Area of Circle :" <<3.14*(radius*radius);
    }
    void display(int l,int b)
    {
        cout <<"\n The Area Of Rectangle :" <<l*b;
    }
    void display(int b,double h)
    {
        cout <<"\n The Area Of Triangle :" <<0.5*(b*h);
    }
};
int main()
{
    shape s;
    s.display(2);
    s.display(2.5);
    s.display(3,2);
    s.display(2,2.5);
}