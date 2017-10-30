//Sean Comerford 15485892
#include <iostream>
#include "die.h"

using namespace std;

int main() {
    int sides;
    int value;
    cout << "Please enter the number of sides on this die" << endl;
    cin >> sides;
    die dice(sides);
    cout << "How many times would you like to roll the dice?" << endl;
    int rolls;
    cin >> rolls;
    cout << "You have selected: " << rolls << " rolls of the dice, okay." << endl;
    double freq[dice.getNumSides()];

    for(int i =0; i<rolls;i++){
        dice.roll();
        freq[dice.getValue() -1]++;
    }
    for(int i =0; i< dice.getNumSides();i++){
    cout << i+1 << ":" << (freq[i]/rolls)*100 << "%" << endl;
    }

}
