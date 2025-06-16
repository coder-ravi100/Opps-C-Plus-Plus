/*Multi-level Q1. Create a base class Person with name and age, 
and a derived class Student with rollNo. 
Use display() function to show all details.*/
#include<iostream>
using namespace std;
class Person
{
    public:
    string name="Ravi Arya";
};

class student :public Person
{
    public:
    int age=26;
    int RollNo=101;
    string Behavior="Good";
    void display()
    {
        cout <<"\n Student Name :" <<name;
        cout <<"\n Student Age  :" <<age;
        cout <<"\n Student Roll No:" <<RollNo;
        cout <<"\n Student Behavior" <<Behavior;
    }
};
int main()
{
    student s1;
    s1.display();
    return 0;
}
