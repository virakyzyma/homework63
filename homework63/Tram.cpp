#include "Tram.h"
Tram::Tram(string fuel, string name, double maxCapacity, double fuelAmont) : Transport(fuel, name, maxCapacity, fuelAmont) {};
double Tram::fuelConsumption(double distance) {
	cout << "Fuel consumption: " << distance / 100 * 9.3 << endl;
	return distance / 100 * 9.3;
}

double Tram::Refuel() {
	cout << "Refuel time: " << (maxCapacity - fuelAmount) / 100 << " minutes" << endl;
	return maxCapacity - fuelAmount * 1.5;
}

void Tram::Show() const
{
    cout << "Fuel type: " << fuel << endl;
    cout << "Tram name: " << name << endl;
    cout << "Maximum capacity: " << maxCapacity << endl;
}