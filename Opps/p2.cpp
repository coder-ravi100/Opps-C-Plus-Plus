#include<iostream>
using namespace std;
class  student
{
   public:
        int roll;
        string name;
        char grade;
};
int main()
{
    //Scanning 
    student s1,s2,s3;  //this is a multiple  object in single class
    cout<<"Enter the Roll Number = ";
    cin>>s1.roll;
    cout<<"Enter The Name =";
    cin>>s1.name;
    cout<<"Enter The Grade = ";
    cin>>s1.grade;
    //This is one Object
    cout<<"Enter The Roll Number = ";
    cin>>s2.roll;
    cout<<"Enter The Name = ";
    cin>>s2.name;
    cout<<"Enter The Grade = ";
    cin>>s2.grade;
    //This is a second Object
    cout<<"Enter The Roll Number = ";
    cin>>s3.roll;
    cout<<"Enter The Name = ";
    cin>>s3.name;
    cout<<"Enter The Grade = ";
    cin>>s3.grade;
    //printing
    cout<<"\n Details For Student 1";
    cout<<"\n Roll No = "<<s1.roll;
    cout<<"\n Name = "<<s1.name;
    cout<<"\n Grade = "<<s1.grade;

    cout<<"\n Details For Student 2";
    cout<<"\n Roll No ="<<s2.roll;
    cout<<"\n Name = "<<s2.name;
    cout<<"\n Grade ="<<s2.grade;

    cout<<"\n Details For Student 3";
    cout<<"\n Roll No ="<<s3.roll;
    cout<<"\n Name = "<<s3.name;
    cout<<"\n Grade = "<<s3.grade;
    return 0;
}