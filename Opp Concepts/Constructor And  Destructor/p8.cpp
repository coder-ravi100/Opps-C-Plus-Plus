/*Constructor Overloading*/
#include<iostream>
using namespace std;
class student
{
public:
        student()
        {
            cout <<"Defualt Constructor"  <<endl;
        }
        student(string name)
        {
            cout <<"Parameterized Constructor Called Name:" <<name <<endl;
        }
        student(string name,int age)
        {
            cout <<"Constructor With Name :" << name <<endl;
            cout <<"Constructor With Age :" <<age <<endl;
        }
};
int main()
{
    student s1;             //Defualt Constructor
    student s2("Ravi");     //Constructor  with 1 parameter
    student s3("Ravi",26);  //Constructo  with  2 parameters
    return 0;
}