//Write a C++ program to find the Armstrong number for a given range of number.
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int digit = 0;
    while (num != 0)//56
    {
        num = num / 10;// Ek piece (digit) nikal
        digit++;//Piece count kar
    }
    cout << "Digits: " << digit << endl;
    return 0;
}
