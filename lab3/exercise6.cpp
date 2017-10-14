//Sean Comerford 15485892
#include <iostream>
#include "Customer.h"

using namespace std;

int main() {

     int n;
     string name;

     cout << "Input the number of customers would you like to create: ";
     cin >> n;

     cout << "Enter the name of the first customer: ";
     cin >> name;
     Customer* head = createList(name);

     for (int x = 1; x < n; x++) {
         cout << "Enter the name of customer " << x+1 << ": ";
         cin >> name;

         insertName(head, name);
     }

     n = listLength(head);
     cout << endl << "List length: " << n << endl << "Customer names:" << endl;

     printCustomers(head);

    return 0;
}
