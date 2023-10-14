#include <iostream>
#include "Airplane.h"
using namespace std;
void Airplane::Show() const
{
    cout << "Fuel type: " << fuel << endl;
    cout << "Airplane name: " << name << endl;
}
