/*Print Function Overload

print(int)
print(float)
print(string)
*/
#include<iostream>
using namespace std;
class Message
{
    public:
    void print(int num1)
    {
        cout <<"Interger Number :" <<num1 <<endl;
    }
    void print(float num2)
    {
      cout <<"Floating Number :" <<num2 <<endl;
    }
    void print(string name)
    {
        cout <<"Name is :" <<name <<endl;
    }
};
int main()
{
    Message M;
    M.print(25);
    M.print(10.11f);
    M.print("Ravi");
    return 0;
}