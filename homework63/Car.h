#pragma once
#include "Transport.h"
class Car : public Transport
{
public:
	Car() = default;

	Car(string fuelType, string name, double fuelAmount, double tankVolume);

	double fuelConsumption(double distance);
	double Refuel();
	void Show() const;
};