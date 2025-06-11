/*Used (Public) Keyword than data is not Sequar*/
#include<iostream>
using namespace std;
class student
{
    public:
    int roll = 101;
    string name = "Ravi";
};
int main()
{
    student s1;
    cout<<"\n Roll No ="<<s1.roll;
    cout<<"\n Name ="<<s1.name;
    return 0;
}