/* Q8. What if both base and derived class have the same function name? 
    Explain Function Overriding
What is Overriding?
Jab base class aur derived class dono mein same function name hota hai, aur derived 
class us function ko redefine karta hai — usse function overriding kehte hain.*/
#include<iostream>
using namespace std;
class Animal{
public:
        void speak()
        {
            cout <<"Animal Speak Something"  <<endl;
        }
};
class Dog :public Animal

{
    public:
            void speak()
            {
                cout <<"Dog Barks :Bhau Bhau!"  <<endl;
            }
};
int main()
{
    Dog d1;
    d1.speak();//Derived Class ka speak() Chalega
    //if we want to base class function:

    d1.Animal::speak();//This will call base class speak()
    return 0;
}