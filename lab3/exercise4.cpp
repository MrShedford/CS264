//Sean Comerford 15485892
#include <iostream>

using namespace std;

struct Customer {
    string name;
    Customer* next;
};

void printCustomers(Customer &head) {
    Customer* current = &head;
Q
    while (current != NULL) {
        cout << current -> name << endl;
        current = current -> next;
    }
}

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
