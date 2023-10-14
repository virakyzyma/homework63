#include <iostream>
#include "Tram.h"
using namespace std;
void Tram::Show() const
{
    cout << "Fuel type: " << fuel << endl;
    cout << "Tram name: " << name << endl;
}