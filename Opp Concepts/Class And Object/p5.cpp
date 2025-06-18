/*Level 1 : Class and Object
class circle take redius calculate circumference and area*/
#include<iostream>
using namespace std;
class circle
{
    private:
    float radius;
    float circumference;
    public:
    void set(float r,float c)
    {
        radius = r;
        circumference = c;
    }
    void get()
    {
        /*formula for area
        Area = 3.14 * redius * redius */
        float area  = 3.14 * radius * radius;
        cout<<"\n Area Calculate:"<<area<<endl;
        
        /*formula for circumference 
        circumeference = 2 * 3.14 * redius*/
        circumference = 2 * 3.14 * radius;
        cout<<"\n Circumefernce Calculate:"<<circumference<<endl;
    }
};
int main()
{
    circle c1;
    c1.set(5,4);
    c1.get();
    return 0;
}