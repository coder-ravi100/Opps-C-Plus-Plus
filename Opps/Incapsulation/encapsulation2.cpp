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
                this->roll = roll;
                //roll = roll--------------->function ka parameter

                //this->roll = roll;-------->class ka member variable
               this->name  = name;
            }
            void get()
            {
                cout<<"Value of roll"<<roll<<endl;
                cout<<"Value of name"<<name<<endl;
            }
};
int main()
{
    student s1,s2,s3;
    s1.set(101,"Ravi");
    s1.get();
    s2.set(102,"Priya");
    s2.get();
    s3.set(103,"Abhay");
    s3.get();
    return 0;
}