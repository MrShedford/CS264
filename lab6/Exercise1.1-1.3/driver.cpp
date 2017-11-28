// Sean COMERFORD 15485892

#include <iostream>

using std::cout;
using std::endl;

#include <vector>

using std::vector;

#include "vehicle.h"
#include "taxi.h"
#include "truck.h"
#include "parkinglot.h"

int main() {
    ParkingLot *parkingLot = new ParkingLot;

    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            Taxi *cab = new Taxi(i);
            parkingLot -> addVehicle(cab);
            (i % 4 == 0) ? cab -> setCustomers(true) : cab -> setCustomers(false); // This just sets some of them to have customers
        }

        else {
            Truck *mack = new Truck(i);
            parkingLot -> addVehicle(mack);
            (i % 3 == 0) ? mack -> setCargo(true) : mack -> setCargo(false); // This just sets some of them to have cargo
        }
    }

    parkingLot -> printVehicles();
    cout << "There are " << parkingLot -> getVehicleCount() << " vehicles in this parking Lot." << endl;

    return 0;
}
