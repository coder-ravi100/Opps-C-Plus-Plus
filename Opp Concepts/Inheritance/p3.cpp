/*Q2. Create a class Shape with function area(). Derive a class Circle with radius, 
and override area() to show the area of circle.*/
#include<iostream>
using namespace std;

class Shape {
public:
    void area() {
        cout << "\n Area of Shape: Undefined (Base class)";
    }
};

class Circle : public Shape {
public:
    float radius;

    Circle(float r) {
        radius = r;
    }

    void area() {
        float result = 3.14 * radius * radius;
        cout << "\n Area of Circle: " << result;
    }
};

int main() {
    Shape s;
    s.area();  // Calls base class function

    Circle c(5);  // Object with radius = 5
    c.area();     // Calls derived class overridden function

    return 0;
}
//this code is not  clear 