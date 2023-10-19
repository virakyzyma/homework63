#include "Car.h"
Car::Car(string fuel, string name, double maxCapacity, double fuelAmont) : Transport(fuel, name, maxCapacity, fuelAmont) {};

double Car::fuelConsumption(double distance) {
	cout << "Fuel consumption: " << distance / 100 * 9.3 << endl;
	return distance / 100 * 9.3;
}
double Car::Refuel() {
	cout << "Refuel time: " << (maxCapacity - fuelAmount) / 100 << " minutes\n";
	return maxCapacity - fuelAmount * 1.5;
}

void Car::Show() const
{
    cout << "Fuel type: " << fuel << endl;
    cout << "Car name: " << name << endl;
    cout << "Maximum capacity: " << maxCapacity << endl;
}