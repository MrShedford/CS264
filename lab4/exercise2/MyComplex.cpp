//Sean Comerford 15485892
#include <iostream>
#include <cstdlib>
#include "MyComplex.h"
#include <cmath>

using namespace std;

MyComplex::MyComplex(){
    real = 0;
    image =0;
}

MyComplex::MyComplex(double a, double b){
    real = a;
    image = b;
}

void MyComplex::setReal(double newReal){
    real = newReal;
    cout <<"The new real value is:" << newReal << endl;
}

void MyComplex::setImage(double newImage){
    image = newImage;
    cout <<"The new imaginary value is:" << newImage << endl;
}

double MyComplex::getReal(){
    return real;
}

double MyComplex::getImage(){
    return image;
}

MyComplex MyComplex::Add(const MyComplex &z){
    double newReal = real + z.real;
    double newImage = image + z.image;

    return MyComplex(newReal, newImage);
}

MyComplex MyComplex::Subtraction(const MyComplex &z){
    double newReal = real - z.real;
    double newImage = image - z.image;

    return MyComplex(newReal, newImage);
}

MyComplex MyComplex::Multiply(const MyComplex &z){
    double newReal = ((real*z.real)-(image*z.image));
    double newImage =((real*z.image)+(image*z.real));
    return MyComplex(newReal, newImage);
}

void MyComplex::print(){
    cout << real << " + " << image << "i" <<endl;
}
