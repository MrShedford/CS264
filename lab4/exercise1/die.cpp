//Sean Comerford 15485892
#include <iostream>
#include <cstdlib>
#include <time.h>
#include "die.h"

using namespace std;

die::die(int n){
    srand(time(NULL));

    if(n<4){
        cout << "You've entered a number less than 4, the die will default to 6 sides" << endl;
        sides=6;
    }
    else{
        sides=n;
    }
    value=0;
}


int die::roll(){
        value = rand() % sides +1;
        return value;
    }

int die::getNumSides(){
        return sides;
    }
int die::getValue(){
        return value;
    }
