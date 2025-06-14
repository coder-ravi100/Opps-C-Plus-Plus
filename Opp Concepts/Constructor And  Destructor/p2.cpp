/* Deference Between Contructor and Function*/
#include<iostream>
using namespace std;
class Mydemo
{
    public:
    Mydemo()
    {
        cout <<"Constructor manually call" <<endl;
    }
    void Show()
    {
        cout <<"Function Call" <<endl;
    }
};
int main()
{
    Mydemo m; //Constructor auto-call hota hai
    m.Show();// Function manually call hota hai
    return 0;
}