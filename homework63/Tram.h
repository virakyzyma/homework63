#pragma once
#include "Transport.h"
class Tram : public Transport
{
public:
	Tram() = default;
	Tram(string fuelType, string name, double fuelAmount, double tankVolume);
	
	double fuelConsumption(double distance);
	double Refuel();
	virtual void Show() const;
};