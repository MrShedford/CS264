//Sean Comerford 15485892
#include <iostream>
#include "MyComplex.h"

using namespace std;

int main() {
    double realNumber;
    double imaginaryNumber;
    cout << "Please enter the real number for the first object" << endl;
    cin >> realNumber;
    cout << "Please enter the imaginary number for the first object" << endl;
    cin >> imaginaryNumber;

    MyComplex fObject(realNumber, imaginaryNumber);
    fObject.print();

    cout << "Please enter the real number for the second object" << endl;
    cin >> realNumber;
    cout << "Please enter the imaginary number for the second object" << endl;
    cin >> imaginaryNumber;

    MyComplex sObject(realNumber, imaginaryNumber);
    sObject.print();
    MyComplex addition;
    addition = fObject + sObject;
    addition.print();
    MyComplex subtraction;
    subtraction = fObject - sObject;
    MyComplex multiplication;
    multiplication = fObject * sObject;
    multiplication.print();

    MyComplex tObject;
    cout << "Created the Third object, default is real=0 and imaginary=0" << endl;
    cout << "Please enter the real number to set for this object:" << endl;
    cin >> realNumber;
    cout << "Please enter the imaginary number to set for this object:" << endl;
    cin >> imaginaryNumber;
    tObject.setReal(realNumber);
    tObject.setImage(imaginaryNumber);
    tObject.print();
}
