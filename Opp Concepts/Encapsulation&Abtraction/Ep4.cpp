/* Practice Question 1:
Class: StudentRecord
Private: name, marks1, marks2, marks3
Public:
setDetails() – student ka naam aur 3 subjects ke marks set kar
calculateTotal() – total marks calculate karke return karo
showResult() – student ka naam aur total marks display karo
Objective: Practice with multiple private members & abstraction using functions.*/
#include<iostream>
using namespace std;
class StudentRecord
{
private:
        string name;
        int total;
        int sub1,sub2,sub3;
public:
        void SetDetails(string name,int sub1,int sub2,int sub3)
        {
            this->name=name;
            this->sub1=sub1;
            this->sub2=sub2;
            this->sub3=sub3;
           // this->total=total;
        }
        void CalculateTotal()
        {
            total=sub1+sub2+sub3;
        }
        void GetShowResult()
        {
            cout <<"Student Name :" <<name <<endl;
            cout <<"Student Marks:" <<total <<endl;
        }
};
int main()
{
    StudentRecord SR1;
    SR1.SetDetails("ravi",90,40,50);
     SR1.CalculateTotal();
    SR1.GetShowResult();
    return 0;
}