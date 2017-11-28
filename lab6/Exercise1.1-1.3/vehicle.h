// Sean COMERFORD 15485892

#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>

#include <string>

using std::string;

class Vehicle {
    public:
        Vehicle(const int doors, const int cylinders, string color, double initialFuel, const int transmission);
        void setColor(string color);
        string getColor() const;
        void setFuelLevel(double amount);
        double getFuelLevel() const;
        int getTransmissionType() const;
        int getNumberOfDoors() const;
        int getNumberOfCylinders() const;
        virtual string getClassName() const;
        virtual void horn() const = 0;
        virtual void print() const;

    private:
        const int numberOfDoors;
        const int numberOfCylinders;
        string vehicleColor;
        double fuelLevel;
        const int transmissionType;
};

#endif
