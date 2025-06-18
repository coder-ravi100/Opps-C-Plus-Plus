/*class Laptop Encapsulation spaces and show selected info*/
#include<iostream>
using namespace std;
class Laptop
{
    private:
    string Brand;
    string RAM;
    float Price;
    string processor;
    public:
    void set(string brand,float price)
    {
        this->Brand=brand;
        this->Price=price;
    }
    void get()
    {
        
        cout <<"\nBrand :" <<Brand <<endl;
        
        cout <<"Price :" <<Price <<endl;
       
    }
};
int main()
{
    Laptop L1;
    cout <<".......Public Info.........";
    L1.set("Lenovo",56000);
    L1.get();
    L1.set("Dell",73000);
    L1.get();
    return 0;
}