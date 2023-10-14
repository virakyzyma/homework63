#include <iostream>
#include "Ship.h"
using namespace std;
void Ship::Show() const
{
    cout << "Fuel type: " << fuel << endl;
    cout << "Ship name: " << name << endl;
}
