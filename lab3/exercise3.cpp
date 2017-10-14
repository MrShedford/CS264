//Sean Comerford 15485892
#include <iostream>

using namespace std;

int main() {

    struct Person {
        string name;
        int age;
    };

    cout << "Input the number of people to be stored: ";
    int n;
    cin >> n;

    Person people[n];

    for (int i = 0; i < n; i++) {
        cout << "Name " << i + 1 << ": ";
        cin >> people[i].name;

        cout << "Age " << i + 1 << ": ";
        cin >> people[i].age;
    }

    cout << "**********" << endl;

    for (int i = n-1; i > -1; i--) {
        cout << people[i].name << ", " << people[i].age << endl;
    }

    return 0;
}
