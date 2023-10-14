#include "Transport.h"
#include "Car.h"
#include "Ship.h"
#include "Airplane.h"
#include "Tram.h"
#include "Motorcycle.h"
#include <iostream>
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
        ptr = new Car();
        ptr->Set("Benzine", "Tesla");
        break;
    case 2:
        ptr = new Ship();
        ptr->Set("Diesel", "SHIP");
        break;
    case 3:
        ptr = new Airplane();
        ptr->Set("Benzine", "AirplaneUA");
        break;
    case 4:
        ptr = new Tram();
        ptr->Set("Electricity", "Tram 1");
        break;
    case 5:
        ptr = new Motorcycle();
        ptr->Set("Benzine", "Motorcycle");
        break;
    default:
        break;
    }
    ptr->Show();
    delete ptr;



    return 0;
}