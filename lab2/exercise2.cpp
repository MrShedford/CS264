//Seán COMERFORD 15485892
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main() {
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    cout << "Greatest Common Divisor: " << gcd(num1,num2) << endl;
}
