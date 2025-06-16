/*Level : 3 IInheritance */
/*Single Inheritance - person - student */
#include<iostream>
using namespace std;
class person
{
    public:
    void display()
    {
        cout <<"\n  This is a person Class";
    }
};
class student :public person
{

};
int main()
{
    student  s1;
    s1.display();
    return 0;
}