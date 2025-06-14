/*Level 1 : Class and Object
Create a class calculator with add subtraction  multiply division function*/
#include<iostream>
using namespace std;
class Calculator
{
    public:

    int add(int a, int b)
    {
        return  a+b;
       
    }
    int sub(int a, int b)
    {
        return a-b;
       
    }
    int mul(int a, int b)
    {
        return a*b;
       
    }
    float div(float a, float b)
    {
        return (float)a/b;
       // cout <<"Division :"<<ans<<endl;
    }
};
int main()
{
    Calculator c1;
    cout << "Addition: " << c1.add(10, 10) << endl;
    cout << "Subtraction: " << c1.sub(10, 5) << endl;
    cout << "Multiplication: " << c1.mul(10, 10) << endl;
    cout << "Division: " << c1.div(10, 5) << endl;

    return 0;
}