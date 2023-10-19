#pragma once
#include "Transport.h"
class Airplane : public Transport
{
public:
	Airplane() = default;

	Airplane(string fuelType, string name, double fuelAmount, double tankVolume);

	double fuelConsumption(double distance);
	double Refuel();
	void Show() const;
};