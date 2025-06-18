/*Implement Destructor to Show When Object Is Destroyed*/
#include<iostream>
using namespace std;
class demo
{
    public:
    string name;
    demo ()
    {
        cout  <<"Constructor Called" <<endl;//use memory
    }
    ~demo()
    {
        cout <<"Destructor Called"  <<endl;//Memory delete
    }
    
};
int main()
{
    demo d1;
    return 0;
}