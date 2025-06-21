/*Set 1: Function Overloading (Compile-time)
Add Function Overload
2 int numbers ka sum
3 int numbers ka sum
2 float numbers ka sum*/
#include<iostream>
using namespace std;
class Addition
{
    public:
    void Add(int num1,int num2)
    {
        cout <<"Sum Of Two Number Is:" <<num1+num2 <<endl;
    }
    void Add(int num1,int num2,int num3)
    {
        cout <<"Sum Of Three Number Is:" <<num1+num2+num3 <<endl;
    }
    void Add(float num1,float num2)
    {
        cout <<"Sum Of Two Floating Number Is:" <<num1+num2 <<endl;
    }
};
int main()
{
    Addition a;
    a.Add(10,20);
    a.Add(10,20,30);
    a.Add(5.5f,6.6f);
    return 0;
}