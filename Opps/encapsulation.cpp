#include<iostream>
using namespace std;

class Student {
private:
    int rollNo;
public:
    void setRollNo(int r) {
        rollNo = r;
    }
    int getRollNo() {
        return rollNo;
    }
};

int main() {
    Student s;
    s.setRollNo(101);
    cout << "Roll Number: " << s.getRollNo();
    return 0;
}
