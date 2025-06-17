/*Level 3: Multiple & Hybrid Inheritance
Q5. Implement multiple inheritance:
Class Father and class Mother, both have displayTraits() function.

Derive a class Child and call both traits.*/
#include<iostream>
using namespace std;
class Father
{
    public:
    void displayFatherTraits()
    {
        cout <<"\n Father Traits";
    }
};
class Mother 
{
    public:
    void displayMotherTraits()
    {
        cout <<"\n Mother Traits";
    }
};
class child :public Father ,public  Mother
{

};
int main()
{
    child c1;
    c1.displayFatherTraits();
    c1.displayMotherTraits();
   // c1.Father::displayTraits();
   // c1.Mother::displayTraits();
    /*Ager Same function name hota to hame 
    c1.Father::displayTraits()
    c1.Mother::displayTraits()
    --------------------------------------
    Ager function Hi Alag Likhe to 
    c1.displayFatherTraits();
    c1.displayMotherTraits();
    */
    return 0;
}