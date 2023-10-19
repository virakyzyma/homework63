#include "Motorcycle.h"
Motorcycle::Motorcycle(string fuel, string name, double maxCapacity, double fuelAmont) : Transport(fuel, name, maxCapacity, fuelAmont) {};

double Motorcycle::fuelConsumption(double distance) {
	cout << "Fuel consumption: " << distance / 100 * 9.3 << endl;
	return distance / 100 * 9.3;
}
double Motorcycle::Refuel() {
	cout << "Refuel time: " << (maxCapacity - fuelAmount) / 100 << " minutes" << endl;
	return maxCapacity - fuelAmount * 1.5;
}
void Motorcycle::Show() const
{
    cout << "Fuel type: " << fuel << endl;
    cout << "Motorcycle name: " << name << endl;
    cout << "Maximum capacity: " << maxCapacity << endl;
}