/*Q6. Implement hybrid inheritance:
Use class Student, Test, and Result where:

Student gives name, roll

Test gives marks

Result combines both and shows result*/
#include<iostream>
using namespace std;
class Student
{
    public:
    string name="Ravi";
    int Roll=101;
    void displayStudent()
    {
        cout <<"Student name :" <<name <<endl;
        cout <<"Student Roll Number :" <<Roll <<endl;
    }
};
class Test :public Student
{
    public:
    int marks=76;
    void displayTest()
    {
        cout <<"Student Marks :" <<marks <<endl;
    }
};
class Result :public Test
{
    public:
    void displayResult()
    {
        displayStudent();
        displayTest();
    }
};
int main()
{
    Result r1;
    r1.displayResult();

    return 0;
}