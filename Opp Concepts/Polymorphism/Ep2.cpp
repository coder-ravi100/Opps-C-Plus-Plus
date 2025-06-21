/*Area Function Overload

Area of circle (1 argument: radius)
Area of rectangle (2 arguments: length, breadth)
Area of triangle (3 arguments: base, height, dummy)*/
#include<iostream>
using namespace std;
class shape
{
    public:
    void area(float radius)
    {
        float area = 3.14*radius*2;
        cout <<"Area of Circle :" <<area <<endl;
    }
    void area(float lenght,float breadth)
    {
         float area = lenght * breadth;
          cout <<"Area of Rectangle :" <<area <<endl;
    }
    void area(float base,float height,float dummy)
    {
       float area = (float)1/2 * base *  height * dummy;
        cout <<"Area Of Triangle :" <<area  <<endl; 
    }
    
};
int main()
{
    shape s;
    s.area(5);
    s.area(5,5);
    s.area(5,5,5);
    return 0;
}