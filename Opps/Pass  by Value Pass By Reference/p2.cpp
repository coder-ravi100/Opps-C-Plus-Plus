#include<iostream>
using namespace std;
class demo
{
    public:
        int data;
        void  SetValue(int b)
        {
            data = b;
        }
        void  UpdateValue(int  x)
        {
            x = x + 10;
            cout<<"inside Fuction (Pass By Value) : x = "<<x<<endl;
        }
};
int main()
{
    demo obj;
    obj.SetValue(5);
    obj.UpdateValue(obj.data);
    cout<<"Outside Function  : Obj.data = "<<obj.data<<endl;
    return 0;
}
/*Doubt*/