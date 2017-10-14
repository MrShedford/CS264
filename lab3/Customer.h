//Sean Comerford 15485892
#pragma once

using namespace std;

struct Customer {
    string name;
    Customer* next;
};

Customer* createList(string name) {
    Customer* customer = new Customer();
    customer -> name = name;
    customer -> next = NULL;

    return customer;
}

void insertName(Customer* head, string name) {
    Customer* current = head;

    while (current -> next != NULL) {
        current = current -> next;
    }

    current -> next = new Customer();
    current = current -> next;
    current -> name = name;
    current -> next = NULL;
}

int listLength(Customer* head) {
    Customer* current = head;
    int count = 0;

    while (current != NULL) {
        current = current -> next;
        count++;
    }

    return count;
}

void printCustomers(Customer *head) {
    Customer* current = head;

    while (current != NULL) {
        cout << current -> name << endl;
        current = current -> next;
    }
}

//Lab 5 version
void printCustomers(Customer &head) {
    Customer* current = &head;

    while (current != NULL) {
        cout << current -> name << endl;
        current = current -> next;
    }
}
