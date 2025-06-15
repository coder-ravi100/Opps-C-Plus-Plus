/*Copy Constructor with Two Variables*/
#include<iostream>
using namespace std;
class Two_number
{
    public:
    int x,y;
    Two_number(int n1,int n2)
    {
        x = n1;
        y = n2;
    }
    Two_number(const Two_number &p)
    {
        x = p.x;
        y = p.y;
    }
    void display()
    {
        cout <<"NO :" <<x <<endl;
        cout <<"NO :" <<y <<endl;
    }
};
int main()
{
    Two_number t1(10,20);
    Two_number t2 = t1;  // Copy constructor called
    t1.display();
    t2.display();
    return 0;
}