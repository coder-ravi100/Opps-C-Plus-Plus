/*Create Class a With Getter and setter for private data*/
#include<iostream>
using namespace std;
class ClassRoom
{
    private:
            int roll;
            string name;
    public:
    void set(int roll,string name)
    {
        this->roll=roll;
        this->name=name;
    }      
    void get()
    {
        cout <<"\nStudent Roll:" <<roll <<endl;
        cout <<"Student Name:" <<name <<endl;
    }
};
int main()
{
    ClassRoom CR1;
    CR1.set(101,"Ravi");
    CR1.get();
    CR1.set(102,"Arya");
    CR1.get();
    return 0;
}