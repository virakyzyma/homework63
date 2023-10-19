#pragma once
#include "Transport.h"
class Ship : public Transport
{
public:
	Ship() = default;
	Ship(string fuelType, string name, double fuelAmount, double tankVolume);
	double fuelConsumption(double distance);
	double Refuel();
	virtual void Show() const;
};

