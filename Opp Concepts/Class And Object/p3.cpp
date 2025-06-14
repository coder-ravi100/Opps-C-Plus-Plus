/*Level 1 : Class and Object
Create Class student and Display name and marks
 */
#include<iostream>
using namespace std;
class student
{
    public:
    string name = "Ravi";
    int marks = 98;
};
int main()
{
    student s1;
    cout<<"\n Student name="<<s1.name;
    cout<<"\n Student Marks="<<s1.marks;
    return 0;
}