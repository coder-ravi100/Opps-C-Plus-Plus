/*Create Copy Contructor*/
#include<iostream>
using namespace std;
class Employee
{
    public:
    int roll;
    
    Employee(int r)
    {
        roll=r;
    }
    Employee(const Employee &s)
    {
        roll=s.roll;
    }
    void display()
    {
        cout <<"Roll Number:" <<roll <<endl;
    }
};
int main()
{
    Employee obj1(101);  // Normal constructor
    Employee obj2 = obj1; // Copy constructor called
    obj1.display();
    obj2.display();
    return 0;
}