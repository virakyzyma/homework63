#pragma once
#include <iostream>
using namespace std;
class Transport
{
protected:
    string name;
    string fuel;
    double maxCapacity;
    double fuelAmount;
public:
    Transport() = default;
    Transport(string fuel, string name, double maxCapacity, double fuelAmount);

    virtual void Show() const = 0;
    virtual double fuelConsumption(double distance) = 0;
    virtual double Refuel() = 0;
   virtual ~Transport(){}
};
