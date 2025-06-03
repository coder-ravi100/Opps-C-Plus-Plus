#include<iostream>
using namespace std;
class student
{
    private:
            int roll;
            string name;
    public:
            void set(int r,string n)
            {
                roll = r;
                name = n;
            }        
            void get()
            {
                cout<<"Value of Roll = "<<roll<<endl;
                cout<<"Value of Name = "<<name<<endl;
            }
};
int main()
{
    student s1,s2,s3;
    s1.set(101,"Ravi");
    s1.get();
    s2.set(102,"Abhay");
    s2.get();
    s3.set(103,"Priya");
    s3.get();
return 0;
}