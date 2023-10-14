#include <iostream>
#include "Car.h"
using namespace std;
void Car::Show() const
{
    cout << "Fuel type: " << fuel << endl;
    cout << "Car name: " << name << endl;
}