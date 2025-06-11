/*Malutiple Object In Single Class*/
#include<iostream>
using namespace  std;
class student
{
    public:
    int roll;
    string name;
};
int main()
{
    //Multiple Object  In Single Class
    student s1,s2,s3;
    cout<<"Enter the Roll Number:";
    cin>>s1.roll;
     cout<<"Enter the Name:";
    cin>>s1.name;
/*     First No Object    */
    cout<<"Enter the  Roll Number:";
    cin>>s2.roll;
    cout<<"Enter the Name:";
    cin>>s2.name;
/*     Second No Object    */
    cout<<"Enter the  Roll Number:";
    cin>>s3.roll;
    cout<<"Enter the Name:";
    cin>>s3.name;
/*     Third No Object    */
    cout<<"Student 1 Details"<<endl;
    cout<<"Student No:"<<s1.roll<<endl;
    cout<<"Student Name:"<<s1.name<<endl;

    cout<<"Student 2 Details"<<endl;
    cout<<"Student No:"<<s2.roll<<endl;
    cout<<"Student Name:"<<s2.name<<endl;

    cout<<"Student 3 Details"<<endl;
    cout<<"Student No:"<<s3.roll<<endl;
    cout<<"Student Name:"<<s3.name<<endl;

    return 0;
}
