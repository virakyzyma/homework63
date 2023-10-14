#include <iostream>
#include "Transport.h"
using namespace std;

void Transport::Set(const char* fuel, const char* name)
{
    this->fuel = new char[strlen(fuel) + 1];
    strcpy_s(this->fuel, strlen(fuel) + 1, fuel);
    this->name = new char[strlen(name) + 1];
    strcpy_s(this->name, strlen(name) + 1, name);
}
void Transport::Show() const
{
    cout << "Value is undefined" << endl;
}