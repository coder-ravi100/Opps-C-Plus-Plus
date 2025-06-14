/*Level 1 : Class and Object
Create a class rectangle with lengh and breadth find area*/
#include<iostream>
using namespace  std;
class Rectangle
{
    private:
    int length;
    int breadth;
    public:
   void set(int a,int b)
    {
        length = a;
        breadth = b;
    }
    void get()
    {
       /*Area=length×breadth*/
       int area = length*breadth;
       cout << "\nArea of Rectangle is: " << area;
    }
};
int main()
{
    Rectangle r1;
    r1.set(10,5);
    r1.get();
    return 0;
}