#include<iostream>
using namespace std;
//Hierarchiecal Inheritance
class parent
{
    public:
            void display()
            {
                cout<<"\n Hello From Parent Class";
            }
};
class Brother : public  parent
{
    /*Code*/
};
class Sister :public parent
{
    /*Code*/
};
int main()
{
    Brother b;
    b.display();
    Sister s;
    s.display();
    return 0;
}