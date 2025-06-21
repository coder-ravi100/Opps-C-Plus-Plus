//Operator Overloading
/*C++ Program: Add Two Complex Numbers Using '+' Operator*/
#include<iostream>
using namespace std;
class Complex
{
    float real, imag;
    public:
    //  Constructor
    Complex(float r = 0, float i = 0)
    {
        real = r;
        imag = i;
    }
    //operator Overloading  For  '+'
    Complex operator + (Complex obj)
    {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }
    //Function to display the complex number
    void display()
    {
        cout <<real <<" + " <<imag <<"i" <<endl;
    }
};
int main()
{
    Complex c1(2,3); //2 + 3i
    Complex c2(4,5); //4 + 5i

    Complex c3;
    c3 = c1 + c2; //calls operators

    cout <<"Sum of complex Numbers: ";
    c3.display(); //output 6 + 8i
    return 0;
}

/*Operator Overloading ke Uses – Complex ke alawa bhi!
C++ mein tum almost har operator ko overload kar sakte ho:
+ - * / == != << >> [] () ++ -- etc.*/

/*Real-Life Examples Beyond Complex:
1.Money Class
Money m1(100),m2(50);
Money m3 = m1 + m2 ;
Total  Money Addition*/

/*2.Box Class (Volume,Dimension)
Box b1(2,3,4),b2(1,1,1);
Box b3 = b1 + b2
Adds lenght, breadth, height*/

/*3.String Class
MyString s1("Ravi"),s2("Kumar");
MyString s3 = s1 + s2;
Concatenate strings*/

/*4.Comparison Using '=='
Student s1("Ravi",101);
Student s2("Ravi",101);
if(s1 == s2)
Overload '==' to compare name & roll
cout <<"Same Student"; */

/*5.Iincrement Operator(++)
counter c;
c++
overload ++ to increse count*/

/*6.Insertion Operator '<<' for cout
Complex c1(2,3);
cout <<c1;
Overload '<<' to print custom object nicely*/