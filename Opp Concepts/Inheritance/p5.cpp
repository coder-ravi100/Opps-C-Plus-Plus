/*Q4. Implement hierarchical inheritance:
Base class Vehicle, derived classes: Car and Bike

Add relevant data and method in each and show output.*/
#include<iostream>
using namespace std;
class Vehicle
{
    public:
   string brand = "Generic Vehicle";
   void ShowVehicle()
   {
    cout <<"\nVehacle Brand"  <<brand;
   }
};
class Car :public Vehicle
{
    public:
    int doors=4;
    string fualType="Petrol";
    void ShowCar()
    {
        ShowVehicle(); //Call Base Class Method
        cout <<"\n Car Doors :" <<doors;
        cout <<"\n Car Fual  :" <<fualType;
    }
};
class  Bike :public Vehicle
{
    public:
    string Type = "Sports";
    int Gears = 5;
    void ShowBike()
    {
        ShowVehicle();
        cout <<"\n Bike Type :" <<Type;
        cout <<"\n Bike Gear :" <<Gears;
    }
};
int main()
{
    Car C1;
    cout <<"\n ===Car Info===";
    C1.ShowCar();

    Bike B1;
    cout <<"\n ===Bike Info===";
    B1.ShowBike();
    return 0;
}