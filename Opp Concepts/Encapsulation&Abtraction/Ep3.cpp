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
    void set(string brand,float price,string ram)
    {
        this->Brand=brand;
        this->Price=price;
        this->RAM=ram;
    }
    void get()
    {
        
        cout <<"\nBrand :" <<Brand <<endl;
        cout <<"Price :" <<Price <<endl;
        cout <<"RAM :" <<RAM <<endl;

       
    }
};
int main()
{
    Laptop L1;
    cout <<".......Public Info.........";
    L1.set("Lenovo",56000,"8GB");
    L1.get();
    L1.set("Dell",73000,"16GB");
    L1.get();
    return 0;
}