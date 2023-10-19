#include "Airplane.h"
Airplane::Airplane(string fuel, string name, double maxCapacity, double fuelAmont) : Transport(fuel, name, maxCapacity, fuelAmont) {};

double Airplane::fuelConsumption(double distance) {
	cout << "Fuel consumption: " << distance / 100 * 9.3 << endl;
	return distance / 100 * 9.3;
}

double Airplane::Refuel() {
	cout << "Refuel time: " << (maxCapacity - fuelAmount) / 100 << " minutes" << endl;
	return maxCapacity - fuelAmount * 1.5;
}
void Airplane::Show() const
{
    cout << "Fuel type: " << fuel << endl;
    cout << "Airplane name: " << name << endl;
    cout << "Maximum capacity: " << maxCapacity << endl;
}
