/*Example 2: Overloading with different data types*/
#include<iostream>
using namespace std;
class Box
{
public:
        Box()
        {
            cout  <<"No Dimenstions Provided." <<endl;
        }
        Box(int side)
        {
            cout <<"Cube Created With side:" <<side <<endl;
        }
        Box(int lenght, int breadth)
        {
            cout <<"Rectangle Created With L:" <<lenght <<endl;
            cout <<"Breadth Created  With  B:"  <<breadth <<endl;
        }
        Box(float radius)
        {
            cout <<"Circle Created With Radius:" <<radius <<endl;
        }

};  
int main()
{
    Box b1;
    Box b2(5); //Cube
    Box b3(10,5); //Rectangle
    Box b4(3.5f); //Circle
    return 0;
}