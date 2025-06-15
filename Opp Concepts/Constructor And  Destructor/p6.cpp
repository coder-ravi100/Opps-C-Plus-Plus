/*Implement Destructor to Show When Object Is Destroyed*/
#include<iostream>
using namespace std;
class demo
{
    public:
    string name;
    demo ()
    {
        cout  <<"Constructor Called" <<endl;
    }
    ~demo()
    {
        cout <<"Destructor Called"  <<endl;
    }
    
};
int main()
{
    demo d1;

    return 0;
}