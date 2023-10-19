#include <iostream>
#include "Transport.h"
#include "Car.h"
#include "Ship.h"
#include "Airplane.h"
#include "Tram.h"
#include "Motorcycle.h"
using namespace std;

int main()
{
    int m;
    cout << "1.Car\n2.Ship\n3.Airplane\n4.Tram\n5.Motorcycle\n-> ";
    cin >> m;

    Transport* ptr = nullptr;
    switch (m)
    {
    case 1:
        ptr = new Car("Benzine", "BMW", 40, 100);
        //ptr->Set("Benzine", "BMW", 50, 5);
        //ptr->fuelConsumption();
        break;
    case 2:
        ptr = new Ship("Diesel", "SHIP", 300, 500);
        break;
    case 3:
        ptr = new Airplane("Benzine", "AirplaneUA", 2000, 2500);
        break;
    case 4:
        ptr = new Tram("Electricity", "Tram 1", 0, 0);
        break;
    case 5:
        ptr = new Motorcycle("Benzine", "Motorcycle", 30, 40);
        break;
    default:
        break;
    }
    ptr->Show();
    ptr->Refuel();
    ptr->fuelConsumption(100);
    delete ptr;



    return 0;
}