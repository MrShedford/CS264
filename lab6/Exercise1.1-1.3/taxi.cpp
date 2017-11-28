// Sean COMERFORD 15485892

#include <iostream>

using std::cout;

#include "taxi.h"

Taxi::Taxi(double fuel) : Vehicle(4, 6, "yellow", fuel, 5) {
    customers = false;
}

void Taxi::setCustomers(bool c) {
    customers = c;
}

bool Taxi::hasCustomers() const {
    return customers;
}

void Taxi::print() const {
    Vehicle::print();

    if (customers)
        cout << "\tThe taxi currently has passengers.\n";
    else
        cout << "\tThe taxi currently has no passengers.\n";

    cout << "class name: " << getClassName() << "\n";
}

void Taxi::horn() const {
    cout << "beep beep";
}

string Taxi::getClassName() const {
    return "Taxi";
}
