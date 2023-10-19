#pragma once
#include "Transport.h"
class Motorcycle :  public Transport
{
public:
	Motorcycle() = default;
	Motorcycle(string fuelType, string name, double fuelAmount, double tankVolume);

	double fuelConsumption(double distance);
	double Refuel();
	void Show() const;
};