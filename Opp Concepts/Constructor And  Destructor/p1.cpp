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
};
int main()
{
    Apple a;
    return 0;
}