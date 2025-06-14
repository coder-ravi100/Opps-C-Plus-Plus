/*Level  : Constructor & Destructor
Create A class with defualt constructor printting "Object Created"*/
#include<iostream>
using namespace std;
class Apple
{
    public:
    Apple()
    {
        cout<<"\n Object Created"<<endl;
    }
    ~Apple()
    {
        cout <<"\n Destructor" <<endl;
    }
};
int main()
{
    Apple a1,a2,a3;
    return 0;
}