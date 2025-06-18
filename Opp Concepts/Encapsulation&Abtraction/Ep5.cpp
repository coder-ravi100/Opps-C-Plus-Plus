/*Practice Question 2:
Class: Rectangle
Private: length, width
Public:
setDimensions() – length and width set karo
calculateArea() – area return karo
showArea() – result dikhan
Objective: Simple geometry + encapsulated data + selected output*/
#include<iostream>
using namespace std;
class  Rectangle
{
private:
        float lenght;
        float width;
        float area;
public:
        void SetDimensions(float lenght,float width)
        {
            this->lenght=lenght;
            this->width=width;
        }
        void CalculateArea()
        {
            area = lenght * width;
            /*Area Of Rectangle Formula area = L * W*/
        }
        void GetShowArea()
        {
            cout <<"\nArea Of Rectangle Is:" <<area <<endl;
        }
};
int main()
{
    Rectangle R1;
    R1.SetDimensions(5,5);
    R1.CalculateArea();
    R1.GetShowArea();
    return 0;
}