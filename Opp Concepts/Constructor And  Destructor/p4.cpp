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
    Employee E1(101);  // Normal constructor
    Employee E2 = E1; // Copy constructor called
    E1.display();
    E2.display();
    return 0;
}