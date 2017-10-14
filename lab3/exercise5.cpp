//Sean Comerford 15485892
#include <iostream>
#include "Customer.h"

using namespace std;

int main() {

    Customer customer1, customer2, customer3;

    customer1.name = "Jack";
    customer2.name = "Jane";
    customer3.name = "Joe";

    customer1.next = &customer2;
    customer2.next = &customer3;
    customer3.next = NULL;

    printCustomers(customer1);

    return 0;
}
