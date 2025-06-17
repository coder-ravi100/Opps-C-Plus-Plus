/*Q7. Explain the use of protected access modifier with example.*/
#include<iostream>
using namespace std;
class student  {
protected:
        int roll = 101;
public:
        void showRoll()
        {
            cout <<"Roll :" <<roll <<endl;
        }
};
class Result : public student
{
    public:
    void displayRoll()
    {
        cout <<"Accessing Protected Roll in Derived Class :" <<roll <<endl;
    }
};
int main()
{
    Result r1;
    r1.displayRoll();
    //r.roll; //Error : Cannot Access protected member directly from object
    return 0;
}
/* this concepts is not revied */
