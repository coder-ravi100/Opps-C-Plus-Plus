/*Example 3: Constructor Overloading with calculation*/
#include<iostream>
using namespace std;
class calculator
{
 public:
        calculator()
        {
            cout <<"\n No Value Provided";
        }
        calculator(int a,int b)
        {
            cout <<"\n Normal Value Addition Is :" <<a+b;
        }
        calculator(float c,float d)
        {
            cout <<"\n Point Value Addition Is :" <<c+d;
        }
            
};
int main()
{
    calculator c1;
    calculator c2(5,5);
    calculator c3(5.5f,5.5f);
    return 0;
}