#include "Ship.h"
Ship::Ship(string fuel, string name, double maxCapacity, double fuelAmont) : Transport(fuel, name, maxCapacity, fuelAmont) {};

double Ship::fuelConsumption(double distance) {
	cout << "Fuel consumption: " << distance / 100 * 9.3 << endl;
	return distance / 100 * 9.3;
}

double Ship::Refuel() {
	cout << "Refuel time: " << (maxCapacity - fuelAmount) / 100 << " minutes" << endl;
	return maxCapacity - fuelAmount * 1.5;
}

void Ship::Show() const
{
    cout << "Fuel type: " << fuel << endl;
    cout << "Ship name: " << name << endl;
    cout << "Maximum capacity: " << maxCapacity << endl;
}
