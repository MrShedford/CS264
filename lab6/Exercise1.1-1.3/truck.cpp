// Sean COMERFORD 15485892

#include <iostream>

using std::cout;

#include "truck.h"

Truck::Truck(double fuel) : Vehicle(2, 16, "black", fuel, 8) {
    cargo = false;
}

bool Truck::hasCargo() const {
    return cargo;
}


void Truck::setCargo(bool cargoValue) {
    cargo = cargoValue;
}

void Truck::print() const {
    Vehicle::print();

    if (cargo)
        cout << "\tThe truck is currently carrying cargo.\n";
    else
        cout << "\tThe truck is currently not carrying cargo.\n";

    cout << "class name: " << getClassName() << "\n";
}

void Truck::horn() const {
    cout << "HOOOONK!";
}

string Truck::getClassName() const {
    return "Truck";
}
