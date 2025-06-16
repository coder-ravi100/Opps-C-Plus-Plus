/*Method kya hota hai?
Method = Function inside a Class

Jab koi function class ke andar define kiya jata hai, to usse method kaha jata hai.
Method kisi object ke through call hota hai.*/
#include<iostream>
using namespace std;
class Dog {
public:
    void bark() {         // ← Yeh ek method hai
        cout << "Barking...";
    }
};
int main() {
    Dog d1;
    d1.bark();   // ← Method call via object
}

