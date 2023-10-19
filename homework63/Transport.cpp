#include "Transport.h"

Transport::Transport(string fuel, string name, double maxCapacity, double fuelAmount)
{
    this->fuel = fuel;
    this->name = name;
    this->maxCapacity = maxCapacity;
    this->fuelAmount = fuelAmount;
}