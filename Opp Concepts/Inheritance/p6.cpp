/*Ek aur aise example banana try karo (jaise Animal → Dog, Cat)
Ya batado agla inheritance type karein?
Multiple ya hybrid?*/
#include<iostream>
using namespace std;
/*Base Class*/
class Animal
{
public:
        string name;
        int age;
        void sound()
        {
            cout <<"Animal Makes a sound" <<endl;
        }
};
/*Derived Class 1*/
class Dog :public Animal 
{
public:
        string breed;
        bool isGuardDog;
        void bark()
        {
            cout <<"Dog Name     :" <<name <<endl;
            cout <<"Dog Age      :" <<age <<endl;
            cout <<"Dog  Breed   :" <<breed <<endl;
            cout <<"Guard Dog    :" <<(isGuardDog ? "yes" : "No") <<endl;
            cout <<"Sound        :Barks!" <<endl;
        }
};
/*Derived Class 2*/
class Cat :  public Animal
{
    public:
    string color;
    int lives;
    void Meow()
    {
        cout <<"Cat Name   :" <<name <<endl;
        cout <<"Cat Age    :" <<age <<endl;
        cout <<"Cat Color  :" <<color <<endl;
        cout <<"Lives Left :" <<lives <<endl;
        cout <<"Sound      :Meow~" <<endl;
    }
};
int main()
{
    Dog d1;
    d1.name = "Bruno";
    d1.age = 4;
    d1.breed = "German Shepherd";
    d1.isGuardDog = true;

    cout <<"===Dog Info===" <<endl;
    d1.bark();

    Cat c1;
    c1.name = "Kitty";
    c1.age = 2;
    c1.color = "White";
    c1.lives = 9;

    cout <<"===Cat Infor===" <<endl;
    c1.Meow();
}