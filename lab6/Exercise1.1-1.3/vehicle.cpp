// Sean COMERFORD 15485892

#include <iostream>

using std::cout;
using std::endl;
using std::ostream;

#include "vehicle.h"

Vehicle::Vehicle(const int doors, const int cylinders, string color, double initialFuel, const int transmission)
                : numberOfDoors(doors), numberOfCylinders(cylinders), transmissionType(transmission) {
    setFuelLevel(initialFuel);
    setColor(color);
}

void Vehicle::print() const {
    cout << "\n\tNumber of doors: " << getNumberOfDoors()
         << "\n\tNumber of cylinders: " << getNumberOfCylinders()
         << "\n\tTransmission type: " << getTransmissionType()
         << "\n\tColor: " << getColor()
         << "\n\tFuel level: " << getFuelLevel() << endl;
}

void Vehicle::setColor(string color) {
    vehicleColor = color;
}

void Vehicle::setFuelLevel(double amount) {
    if (amount > 0.0 && amount <= 20.0)
        fuelLevel = amount;
    else
        fuelLevel = 5.0;
}

string Vehicle::getColor() const {
    return vehicleColor;
}

double Vehicle::getFuelLevel() const {
    return fuelLevel;
}

int Vehicle::getTransmissionType() const {
    return transmissionType;
}

int Vehicle::getNumberOfDoors() const {
    return numberOfDoors;
}

int Vehicle::getNumberOfCylinders() const {
    return numberOfCylinders;
}

string Vehicle::getClassName() const {
    return "Vehicle";
}
