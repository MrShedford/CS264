//sean comerford 15485892
#pragma once

using namespace std;
class die{
    int sides;
    int value;

public:
        int roll();
        int getValue();
        int getNumSides();
        die(int);
};
