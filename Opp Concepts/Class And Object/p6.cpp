/*Level 1 : Class and Object
class car display car model brand and year*/
#include<iostream>
using namespace std;
class Car
{
    public:
    string model;
    string brand;
    string year;
    void display()
    {
        cout<<"Model : Car"<<model<<endl;
        cout<<"Brand : Toyta"<<brand<<endl;
        cout<<"Year  : 1937"<<year<<endl;
    }
};
int main()
{
    Car c1;
    c1.display();
    return 0;
}
