#include <iostream>
#include "Motorcycle.h"
using namespace std;
void Motorcycle::Show() const
{
    cout << "Fuel type: " << fuel << endl;
    cout << "Motorcycle name: " << name << endl;
}