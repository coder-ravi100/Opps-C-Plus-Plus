/*1. Inheritance Wrapping of Data and functions Into a Single Unit (Class)*/
#include<iostream>
using namespace std;
class student
{
    private:
    int roll;
    string name;
    public:
    void set(int r, string n)/*-----> set() data members ko set karta hai.*/
    {
        roll = r;
        name = n;
    }
    void get()/*---> get() values ko display karta hai*/
    {
        cout<<"Value of Roll :"<<roll<<endl;
        cout<<"Value of Name :"<<name<<endl;
    }
};
int main()
{
    student s1;
    s1.set(101,"Ravi");
    s1.get();
    return 0;
}
/* Flow-wise Dry Run 

student class define hoti hai with roll and name (private)

main() function start hota hai

s1 object banta hai (class student ka)

s1.set(101, "Ravi") call hota hai

roll = 101, name = "Ravi" set hota hai

s1.get() call hota hai

main() function return karta hai*/