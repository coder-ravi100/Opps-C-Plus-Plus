/*Virtual Base class Example*/

/* Why Use Virtual?
Virtual base class avoids duplicate copies of the base class.

It solves diamond problem in multiple inheritance.*/
#include<iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "Base class A" << endl;
    }
};

class B : virtual public A {
    // Inheriting A virtually
};

class C : virtual public A {
    // Inheriting A virtually
};

class D : public B, public C {
    // D inherits from both B and C
};

int main() {
    D obj;
    obj.show();  // No ambiguity now
    return 0;
}
