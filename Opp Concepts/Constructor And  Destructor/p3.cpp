/*Use Parameterized Constructor*/
#include<iostream>
using namespace std;
class Employee
{
    public:
    int roll;
    string name;
    int salary;
    string dastination;
    Employee(int r,string n,int s,string d)
    {
        roll=r;
        name=n;
        salary=s;
        dastination=d;
        cout <<"Employee Roll Number :" <<roll <<endl;
        cout <<"Employee Name :" <<name <<endl;
        cout <<"Employee Salary :" <<salary <<endl;
        cout <<"Employee Destination :" <<dastination <<endl;
    }
};
int main()
{
    Employee E1(101,"ravi",50000,"Operator");//Object created with value 101 Ravi 50000 Operator
    Employee E2(102,"Abhay",45000,"Software Developer");//Object created with value 102 Abhay 45000  Software developer

    return 0;
}