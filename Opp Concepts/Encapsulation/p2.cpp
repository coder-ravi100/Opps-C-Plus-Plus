/*This  Pointer --->*/
#include<iostream>
using namespace std;
class student 
{
    private:
    int roll;
    string name;
    public:
    void set(int roll,string name)
    {
       this-> roll = roll; //s1.roll = function parameter roll (101)
       this-> name = name; //s1.name = function parameter name ("Ravi")

       /* this-> Pointer Ka Matlab:
this ek pointer hota hai jo current object (yahan s1) ka address hold karta hai.
this->roll ka matlab hai → s1 ke member variable roll
Right side wala roll → function ka local parameter*/
    }
    void get()
    {
        cout<<"Values of Roll Number:"<<roll<<endl;
        cout<<"Values of Name:"<<name<<endl;
    }
};
int main()
{
    student s1;
    s1.set(101,"Ravi");
    s1.get();
    return 0;
}