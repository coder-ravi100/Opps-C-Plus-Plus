/*Destructor Freeing Memory*/
#include<iostream>
using namespace std;
class  sample
{
    int *ptr;
    public:
    sample()
    {
        ptr = new int;
        *ptr = 50;
        cout <<"Value Stored :"  <<*ptr <<endl;
    }
    ~sample()
    {
        delete ptr;
        cout <<"Memory Released.." <<endl;
    }
};
int main()
{
    sample obj;
    return 0;
}