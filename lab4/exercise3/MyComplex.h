#pragma once

using namespace std;

class MyComplex {
protected:
    double real;
    double image;
public:
    void setReal(double);
    void setImage(double);
    double getReal();
    double getImage();
    MyComplex();
    MyComplex(double, double);
    MyComplex operator+(const MyComplex &z);
    MyComplex operator-(const MyComplex &z);
    MyComplex operator*(const MyComplex &z);
    void print();
};
