/* Example 4: Constructor Overloading in real-world class*/
#include<iostream>
using namespace std;
class  employee
{
    public:
            employee()
            {
                cout <<"\n Employe Created For Defualt Details:";
            }
            employee(int no)
            {
                cout <<"\n Employee No:" <<no;
            }
            employee(string name)
            {
                cout <<"\n Employee Name:"<<name;
            }
};
int main()
{
    employee y1;
    employee y2(100);
    employee y3("Ravi");
    return 0;
}