/*Example 1: Student → Test → Sports → Result*/
#include<iostream>
using namespace std;

class Student {
public:
    void show() {
        string name = "Ravi Arya";
        cout << "Student Name: " << name << endl;
    }
};

class Test : virtual public Student {
public:
    void showTest() {
        string result = "Win";
        cout << "Test Result: " << result << endl;
    }
};

class Sport : virtual public Student {
public:
    void showSport() {
        string game = "Cricket Match";
        cout << "Game Played by Student: " << game << endl;
    }
};

class Result : public Test, public Sport {
    // Result inherits from both Test and Sport
};

int main() {
    Result r1;
    r1.show();        // Student info
    r1.showTest();    // Test info
    r1.showSport();   // Sport info
    return 0;
}

